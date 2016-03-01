/*
 * Copyright (c) 2012, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

// File: usdhc1_iomux_config.c

/* ------------------------------------------------------------------------------
 * <auto-generated>
 *     This code was generated by a tool.
 *     Runtime Version:3.4.0.0
 *
 *     Changes to this file may cause incorrect behavior and will be lost if
 *     the code is regenerated.
 * </auto-generated>
 * ------------------------------------------------------------------------------
*/

#include "iomux_config.h"
#include "registers/regsiomuxc.h"

// Function to configure IOMUXC for usdhc1 module.
void usdhc1_iomux_config(void)
{
    // Config usdhc1.SD1_CLK to pad SD1_CLK(D20)
    // HW_IOMUXC_SW_MUX_CTL_PAD_SD1_CLK_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_SD1_CLK_WR(0x0001B0B0);
    // HW_IOMUXC_USDHC1_CARD_CLK_IN_SELECT_INPUT_WR(0x00000001);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_SD1_CLK(0x020E02DC)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: usdhc1 signal: SD1_CLK
    //     ALT3 (3) - Select instance: gpt signal: GPT_CLKIN
    //     ALT5 (5) - Select instance: gpio1 signal: GPIO1_IO20
    HW_IOMUXC_SW_MUX_CTL_PAD_SD1_CLK_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_SD1_CLK_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_SD1_CLK_MUX_MODE_V(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_SD1_CLK(0x020E06C4)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_SD1_CLK_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_CLK_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_CLK_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_CLK_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_CLK_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_CLK_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_CLK_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_CLK_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_CLK_SRE_V(SLOW));
    // Pad SD1_CLK is involved in Daisy Chain.
    // Input Select Register:
    // IOMUXC_USDHC1_CARD_CLK_IN_SELECT_INPUT(0x020E0928)
    //   DAISY [0] - MUX Mode Select Field Reset: RESERVED0
    //               Selecting Pads Involved in Daisy Chain.
    //     RESERVED0 (0) - This field value is reserved.
    //     SD1_CLK_ALT0 (1) - Select signal usdhc1 SD1_CLK as input from pad SD1_CLK(ALT0).
    HW_IOMUXC_USDHC1_CARD_CLK_IN_SELECT_INPUT_WR(
            BF_IOMUXC_USDHC1_CARD_CLK_IN_SELECT_INPUT_DAISY_V(SD1_CLK_ALT0));

    // Config usdhc1.SD1_CMD to pad SD1_CMD(B21)
    // HW_IOMUXC_SW_MUX_CTL_PAD_SD1_CMD_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_SD1_CMD_WR(0x0001F0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_SD1_CMD(0x020E02E0)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: usdhc1 signal: SD1_CMD
    //     ALT2 (2) - Select instance: pwm4 signal: PWM4_OUT
    //     ALT3 (3) - Select instance: gpt signal: GPT_COMPARE1
    //     ALT5 (5) - Select instance: gpio1 signal: GPIO1_IO18
    HW_IOMUXC_SW_MUX_CTL_PAD_SD1_CMD_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_SD1_CMD_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_SD1_CMD_MUX_MODE_V(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_SD1_CMD(0x020E06C8)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_SD1_CMD_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_CMD_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_CMD_PUS_V(22K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_CMD_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_CMD_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_CMD_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_CMD_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_CMD_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_CMD_SRE_V(SLOW));

    // Config usdhc1.SD1_DATA0 to pad SD1_DATA0(A21)
    // HW_IOMUXC_SW_MUX_CTL_PAD_SD1_DATA0_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA0_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_SD1_DATA0(0x020E02E4)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: usdhc1 signal: SD1_DATA0
    //     ALT3 (3) - Select instance: gpt signal: GPT_CAPTURE1
    //     ALT5 (5) - Select instance: gpio1 signal: GPIO1_IO16
    HW_IOMUXC_SW_MUX_CTL_PAD_SD1_DATA0_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_SD1_DATA0_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_SD1_DATA0_MUX_MODE_V(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_SD1_DATA0(0x020E06CC)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA0_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA0_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA0_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA0_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA0_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA0_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA0_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA0_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA0_SRE_V(SLOW));

    // Config usdhc1.SD1_DATA1 to pad SD1_DATA1(C20)
    // HW_IOMUXC_SW_MUX_CTL_PAD_SD1_DATA1_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA1_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_SD1_DATA1(0x020E02E8)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: usdhc1 signal: SD1_DATA1
    //     ALT2 (2) - Select instance: pwm3 signal: PWM3_OUT
    //     ALT3 (3) - Select instance: gpt signal: GPT_CAPTURE2
    //     ALT5 (5) - Select instance: gpio1 signal: GPIO1_IO17
    HW_IOMUXC_SW_MUX_CTL_PAD_SD1_DATA1_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_SD1_DATA1_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_SD1_DATA1_MUX_MODE_V(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_SD1_DATA1(0x020E06D0)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA1_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA1_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA1_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA1_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA1_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA1_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA1_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA1_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA1_SRE_V(SLOW));

    // Config usdhc1.SD1_DATA2 to pad SD1_DATA2(E19)
    // HW_IOMUXC_SW_MUX_CTL_PAD_SD1_DATA2_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA2_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_SD1_DATA2(0x020E02EC)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: usdhc1 signal: SD1_DATA2
    //     ALT2 (2) - Select instance: gpt signal: GPT_COMPARE2
    //     ALT3 (3) - Select instance: pwm2 signal: PWM2_OUT
    //     ALT4 (4) - Select instance: wdog1 signal: WDOG1_B
    //     ALT5 (5) - Select instance: gpio1 signal: GPIO1_IO19
    //     ALT6 (6) - Select instance: wdog1 signal: WDOG1_RESET_B_DEB
    HW_IOMUXC_SW_MUX_CTL_PAD_SD1_DATA2_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_SD1_DATA2_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_SD1_DATA2_MUX_MODE_V(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_SD1_DATA2(0x020E06D4)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA2_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA2_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA2_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA2_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA2_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA2_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA2_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA2_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA2_SRE_V(SLOW));

    // Config usdhc1.SD1_DATA3 to pad SD1_DATA3(F18)
    // HW_IOMUXC_SW_MUX_CTL_PAD_SD1_DATA3_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA3_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_SD1_DATA3(0x020E02F0)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: usdhc1 signal: SD1_DATA3
    //     ALT2 (2) - Select instance: gpt signal: GPT_COMPARE3
    //     ALT3 (3) - Select instance: pwm1 signal: PWM1_OUT
    //     ALT4 (4) - Select instance: wdog2 signal: WDOG2_B
    //     ALT5 (5) - Select instance: gpio1 signal: GPIO1_IO21
    //     ALT6 (6) - Select instance: wdog2 signal: WDOG2_RESET_B_DEB
    HW_IOMUXC_SW_MUX_CTL_PAD_SD1_DATA3_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_SD1_DATA3_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_SD1_DATA3_MUX_MODE_V(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_SD1_DATA3(0x020E06D8)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA3_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA3_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA3_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA3_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA3_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA3_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA3_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA3_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD1_DATA3_SRE_V(SLOW));

    // Config usdhc1.SD1_DATA4 to pad NAND_DATA00(A18)
    // HW_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA00_WR(0x00000001);
    // HW_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA00_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_NAND_DATA00(0x020E0284)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: gpmi signal: NAND_DATA00
    //     ALT1 (1) - Select instance: usdhc1 signal: SD1_DATA4
    //     ALT5 (5) - Select instance: gpio2 signal: GPIO2_IO00
    HW_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA00_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA00_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA00_MUX_MODE_V(ALT1));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_NAND_DATA00(0x020E066C)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA00_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA00_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA00_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA00_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA00_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA00_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA00_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA00_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA00_SRE_V(SLOW));

    // Config usdhc1.SD1_DATA5 to pad NAND_DATA01(C17)
    // HW_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA01_WR(0x00000001);
    // HW_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA01_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_NAND_DATA01(0x020E0288)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: gpmi signal: NAND_DATA01
    //     ALT1 (1) - Select instance: usdhc1 signal: SD1_DATA5
    //     ALT5 (5) - Select instance: gpio2 signal: GPIO2_IO01
    HW_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA01_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA01_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA01_MUX_MODE_V(ALT1));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_NAND_DATA01(0x020E0670)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA01_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA01_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA01_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA01_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA01_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA01_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA01_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA01_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA01_SRE_V(SLOW));

    // Config usdhc1.SD1_DATA6 to pad NAND_DATA02(F16)
    // HW_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA02_WR(0x00000001);
    // HW_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA02_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_NAND_DATA02(0x020E028C)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: gpmi signal: NAND_DATA02
    //     ALT1 (1) - Select instance: usdhc1 signal: SD1_DATA6
    //     ALT5 (5) - Select instance: gpio2 signal: GPIO2_IO02
    HW_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA02_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA02_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA02_MUX_MODE_V(ALT1));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_NAND_DATA02(0x020E0674)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA02_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA02_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA02_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA02_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA02_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA02_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA02_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA02_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA02_SRE_V(SLOW));

    // Config usdhc1.SD1_DATA7 to pad NAND_DATA03(D17)
    // HW_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA03_WR(0x00000001);
    // HW_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA03_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_NAND_DATA03(0x020E0290)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: gpmi signal: NAND_DATA03
    //     ALT1 (1) - Select instance: usdhc1 signal: SD1_DATA7
    //     ALT5 (5) - Select instance: gpio2 signal: GPIO2_IO03
    HW_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA03_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA03_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA03_MUX_MODE_V(ALT1));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_NAND_DATA03(0x020E0678)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA03_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA03_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA03_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA03_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA03_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA03_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA03_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA03_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA03_SRE_V(SLOW));
}