/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios0' in SOPC Builder design 'system_design'
 * SOPC Builder design path: C:/Users/JairoAndres/Documents/Quartus/Projects/puj-ca-de1-audio-pump/build/system_design.sopcinfo
 *
 * Generated: Sun Nov 02 23:34:19 COT 2014
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_qsys"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x1100820
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "fast"
#define ALT_CPU_DATA_ADDR_WIDTH 0x19
#define ALT_CPU_DCACHE_LINE_SIZE 32
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_DCACHE_SIZE 2048
#define ALT_CPU_EXCEPTION_ADDR 0x1080020
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 1
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 4096
#define ALT_CPU_INITDA_SUPPORTED
#define ALT_CPU_INST_ADDR_WIDTH 0x19
#define ALT_CPU_NAME "nios0"
#define ALT_CPU_NUM_OF_SHADOW_REG_SETS 0
#define ALT_CPU_RESET_ADDR 0x1080000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x1100820
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "fast"
#define NIOS2_DATA_ADDR_WIDTH 0x19
#define NIOS2_DCACHE_LINE_SIZE 32
#define NIOS2_DCACHE_LINE_SIZE_LOG2 5
#define NIOS2_DCACHE_SIZE 2048
#define NIOS2_EXCEPTION_ADDR 0x1080020
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 1
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 4096
#define NIOS2_INITDA_SUPPORTED
#define NIOS2_INST_ADDR_WIDTH 0x19
#define NIOS2_NUM_OF_SHADOW_REG_SETS 0
#define NIOS2_RESET_ADDR 0x1080000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_NEW_SDRAM_CONTROLLER
#define __ALTERA_AVALON_PIO
#define __ALTERA_NIOS2_QSYS
#define __ALTPLL
#define __AUDIO_IF
#define __I2C_OPENCORES
#define __SEG7_LUT_8
#define __SRAM_16BIT_512K


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone II"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag0"
#define ALT_STDERR_BASE 0x1101050
#define ALT_STDERR_DEV jtag0
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag0"
#define ALT_STDIN_BASE 0x1101050
#define ALT_STDIN_DEV jtag0
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag0"
#define ALT_STDOUT_BASE 0x1101050
#define ALT_STDOUT_DEV jtag0
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "system_design"


/*
 * audio0 configuration
 *
 */

#define ALT_MODULE_CLASS_audio0 AUDIO_IF
#define AUDIO0_BASE 0x1101020
#define AUDIO0_IRQ -1
#define AUDIO0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define AUDIO0_NAME "/dev/audio0"
#define AUDIO0_SPAN 32
#define AUDIO0_TYPE "AUDIO_IF"


/*
 * hal configuration
 *
 */

#define ALT_MAX_FD 4
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * i2c0 configuration
 *
 */

#define ALT_MODULE_CLASS_i2c0 i2c_opencores
#define I2C0_BASE 0x1101000
#define I2C0_IRQ 0
#define I2C0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define I2C0_NAME "/dev/i2c0"
#define I2C0_SPAN 32
#define I2C0_TYPE "i2c_opencores"


/*
 * jtag0 configuration
 *
 */

#define ALT_MODULE_CLASS_jtag0 altera_avalon_jtag_uart
#define JTAG0_BASE 0x1101050
#define JTAG0_IRQ 1
#define JTAG0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG0_NAME "/dev/jtag0"
#define JTAG0_READ_DEPTH 64
#define JTAG0_READ_THRESHOLD 8
#define JTAG0_SPAN 8
#define JTAG0_TYPE "altera_avalon_jtag_uart"
#define JTAG0_WRITE_DEPTH 64
#define JTAG0_WRITE_THRESHOLD 8


/*
 * pio0 configuration
 *
 */

#define ALT_MODULE_CLASS_pio0 altera_avalon_pio
#define PIO0_BASE 0x0
#define PIO0_BIT_CLEARING_EDGE_REGISTER 0
#define PIO0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIO0_CAPTURE 0
#define PIO0_DATA_WIDTH 32
#define PIO0_DO_TEST_BENCH_WIRING 0
#define PIO0_DRIVEN_SIM_VALUE 0
#define PIO0_EDGE_TYPE "NONE"
#define PIO0_FREQ 50000000
#define PIO0_HAS_IN 0
#define PIO0_HAS_OUT 0
#define PIO0_HAS_TRI 1
#define PIO0_IRQ -1
#define PIO0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIO0_IRQ_TYPE "NONE"
#define PIO0_NAME "/dev/pio0"
#define PIO0_RESET_VALUE 0
#define PIO0_SPAN 16
#define PIO0_TYPE "altera_avalon_pio"


/*
 * pll0 configuration
 *
 */

#define ALT_MODULE_CLASS_pll0 altpll
#define PLL0_BASE 0x1101040
#define PLL0_IRQ -1
#define PLL0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PLL0_NAME "/dev/pll0"
#define PLL0_SPAN 16
#define PLL0_TYPE "altpll"


/*
 * sdram0 configuration
 *
 */

#define ALT_MODULE_CLASS_sdram0 altera_avalon_new_sdram_controller
#define SDRAM0_BASE 0x800000
#define SDRAM0_CAS_LATENCY 3
#define SDRAM0_CONTENTS_INFO
#define SDRAM0_INIT_NOP_DELAY 0.0
#define SDRAM0_INIT_REFRESH_COMMANDS 2
#define SDRAM0_IRQ -1
#define SDRAM0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SDRAM0_IS_INITIALIZED 1
#define SDRAM0_NAME "/dev/sdram0"
#define SDRAM0_POWERUP_DELAY 100.0
#define SDRAM0_REFRESH_PERIOD 15.625
#define SDRAM0_REGISTER_DATA_IN 1
#define SDRAM0_SDRAM_ADDR_WIDTH 0x16
#define SDRAM0_SDRAM_BANK_WIDTH 2
#define SDRAM0_SDRAM_COL_WIDTH 8
#define SDRAM0_SDRAM_DATA_WIDTH 16
#define SDRAM0_SDRAM_NUM_BANKS 4
#define SDRAM0_SDRAM_NUM_CHIPSELECTS 1
#define SDRAM0_SDRAM_ROW_WIDTH 12
#define SDRAM0_SHARED_DATA 0
#define SDRAM0_SIM_MODEL_BASE 0
#define SDRAM0_SPAN 8388608
#define SDRAM0_STARVATION_INDICATOR 0
#define SDRAM0_TRISTATE_BRIDGE_SLAVE ""
#define SDRAM0_TYPE "altera_avalon_new_sdram_controller"
#define SDRAM0_T_AC 5.5
#define SDRAM0_T_MRD 3
#define SDRAM0_T_RCD 20.0
#define SDRAM0_T_RFC 70.0
#define SDRAM0_T_RP 20.0
#define SDRAM0_T_WR 14.0


/*
 * sevenseg0 configuration
 *
 */

#define ALT_MODULE_CLASS_sevenseg0 seg7_lut_8
#define SEVENSEG0_BASE 0x1101058
#define SEVENSEG0_IRQ -1
#define SEVENSEG0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEVENSEG0_NAME "/dev/sevenseg0"
#define SEVENSEG0_SPAN 4
#define SEVENSEG0_TYPE "seg7_lut_8"


/*
 * sram0 configuration
 *
 */

#define ALT_MODULE_CLASS_sram0 sram_16bit_512k
#define SRAM0_BASE 0x1080000
#define SRAM0_IRQ -1
#define SRAM0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SRAM0_NAME "/dev/sram0"
#define SRAM0_SPAN 524288
#define SRAM0_TYPE "sram_16bit_512k"

#endif /* __SYSTEM_H_ */
