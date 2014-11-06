#include "sys/alt_stdio.h"
#include "system.h"
#include "i2c_opencores.h"
#include "i2c_opencores_regs.h"

#include <stdbool.h>
#include <stdio.h>
#include <math.h>

int write_wm(int addr, int val);

#define MAX_SAMPLES (2*44100/1000)

int wave[MAX_SAMPLES];

int main()
{
	I2C_init(I2C0_BASE, ALT_CPU_CPU_FREQ, 400000);
	alt_putstr("Hello from Nios II!\n");

	write_wm(0xF, 0);  // reset
	write_wm(2, 0x79 << 0); // L volume +6db
	write_wm(3, 0x79 << 0); // R volume +6db
	write_wm(4, (1 << 1) | (1 << 4)); // mic mute, DAC select
	write_wm(5, 0); // no DAC mute
	write_wm(6, 0);  // power up
	write_wm(7, 2 | (1 << 6) | (0 << 2) | (2 << 0)); // I2S, 16 bit, Master
	write_wm(8, 1 | (1 << 1) | (8 << 2) | (1 << 0)); // usb mode, 272fs, 44.1 Khz
	write_wm(9, 1); // activate


	int fs = 12000000/272; // 44.1k
	int t = 0;
	int f = 1000;
	int w = 2*31415*f / 10000;
	int A = 16000;
	int offset = 0;

	IOWR(AUDIO0_BASE, 4, 0); // CMD_ADDR - fifo_clear
	IOWR(SEVENSEG0_BASE, 0, 1);

	for(t=0; t<MAX_SAMPLES; t++)
	{
		// t en periodos de sampling
		// t * 1/fs es tiempo
		int y = (int)(A*sinf(w*t/(float)fs)) + offset;
		wave[t] = y;
		printf("t -> y | %d -> %d\n", t, y);
	}

	t = 0;
	while(true)
	{
		/*
		if(t >= MAX_SAMPLES) t = 0;
		int y = wave[t++];
		IOWR(AUDIO0_BASE, 0, y); // DAC_LFIFO_ADDR
		IOWR(AUDIO0_BASE, 1, y); // DAC_RFIFO_ADDR

		while( IORD(AUDIO0_BASE,5) & 0x1 ) // STATUS_ADDR
		{
			IOWR(SEVENSEG0_BASE, 0, 0xF);
		}

		IOWR(SEVENSEG0_BASE, 0, 0);
		*/
	}

	return 0;
}

int write_wm(int addr, int val)
{
	int ack = 0;
	ack = I2C_start(I2C0_BASE, 0x35 >> 1, 0);
	printf("ack %d\n", ack);
	ack = I2C_write(I2C0_BASE, (alt_u8)((addr << 1) | (val >> 8)), false);
	printf("ack %d\n", ack);
	ack = I2C_write(I2C0_BASE, (alt_u8)val, true);
	printf("ack %d\n", ack);
	return ack;
}
