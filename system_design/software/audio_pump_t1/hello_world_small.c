#include "sys/alt_stdio.h"
#include "system.h"
#include "i2c_opencores.h"
#include "i2c_opencores_regs.h"

#include <stdbool.h>

int write_wm(int addr, int val);

int main()
{
  alt_putstr("Hello from Nios II!\n");

  write_wm(6, 0);
  write_wm(7, 2 | (3 << 2) | (1 << 6)); // I2S, 32 bit, Master
  write_wm(8, 1 | (1 << 1) | (8 << 2)); // usb mode, 272fs, 44.1 Khz
  write_wm(9, 1); // activate

  return 0;
}


int write_wm(int addr, int val)
{
	int ack = 0;
	I2C_init(I2C0_BASE, ALT_CPU_CPU_FREQ, 400000);
	ack = I2C_start(I2C0_BASE, 0x35, 0);
	ack = I2C_write(I2C0_BASE, (alt_u8)addr, false);
	ack = I2C_write(I2C0_BASE, (alt_u8)val, false);
	return ack;
}
