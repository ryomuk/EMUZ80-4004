/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F47Q43
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set TEST aliases
#define TEST_TRIS                 TRISAbits.TRISA0
#define TEST_LAT                  LATAbits.LATA0
#define TEST_PORT                 PORTAbits.RA0
#define TEST_WPU                  WPUAbits.WPUA0
#define TEST_OD                   ODCONAbits.ODCA0
#define TEST_ANS                  ANSELAbits.ANSELA0
#define TEST_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define TEST_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define TEST_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define TEST_GetValue()           PORTAbits.RA0
#define TEST_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define TEST_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define TEST_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define TEST_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define TEST_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define TEST_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define TEST_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define TEST_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set DIN0 aliases
#define DIN0_TRIS                 TRISBbits.TRISB0
#define DIN0_LAT                  LATBbits.LATB0
#define DIN0_PORT                 PORTBbits.RB0
#define DIN0_WPU                  WPUBbits.WPUB0
#define DIN0_OD                   ODCONBbits.ODCB0
#define DIN0_ANS                  ANSELBbits.ANSELB0
#define DIN0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define DIN0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define DIN0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define DIN0_GetValue()           PORTBbits.RB0
#define DIN0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define DIN0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define DIN0_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define DIN0_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define DIN0_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define DIN0_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define DIN0_SetAnalogMode()      do { ANSELBbits.ANSELB0 = 1; } while(0)
#define DIN0_SetDigitalMode()     do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set DIN1 aliases
#define DIN1_TRIS                 TRISBbits.TRISB1
#define DIN1_LAT                  LATBbits.LATB1
#define DIN1_PORT                 PORTBbits.RB1
#define DIN1_WPU                  WPUBbits.WPUB1
#define DIN1_OD                   ODCONBbits.ODCB1
#define DIN1_ANS                  ANSELBbits.ANSELB1
#define DIN1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define DIN1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define DIN1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define DIN1_GetValue()           PORTBbits.RB1
#define DIN1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define DIN1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define DIN1_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define DIN1_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define DIN1_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define DIN1_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define DIN1_SetAnalogMode()      do { ANSELBbits.ANSELB1 = 1; } while(0)
#define DIN1_SetDigitalMode()     do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set DIN2 aliases
#define DIN2_TRIS                 TRISBbits.TRISB2
#define DIN2_LAT                  LATBbits.LATB2
#define DIN2_PORT                 PORTBbits.RB2
#define DIN2_WPU                  WPUBbits.WPUB2
#define DIN2_OD                   ODCONBbits.ODCB2
#define DIN2_ANS                  ANSELBbits.ANSELB2
#define DIN2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define DIN2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define DIN2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define DIN2_GetValue()           PORTBbits.RB2
#define DIN2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define DIN2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define DIN2_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define DIN2_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define DIN2_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define DIN2_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define DIN2_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define DIN2_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set DIN3 aliases
#define DIN3_TRIS                 TRISBbits.TRISB3
#define DIN3_LAT                  LATBbits.LATB3
#define DIN3_PORT                 PORTBbits.RB3
#define DIN3_WPU                  WPUBbits.WPUB3
#define DIN3_OD                   ODCONBbits.ODCB3
#define DIN3_ANS                  ANSELBbits.ANSELB3
#define DIN3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define DIN3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define DIN3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define DIN3_GetValue()           PORTBbits.RB3
#define DIN3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define DIN3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define DIN3_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define DIN3_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define DIN3_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define DIN3_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define DIN3_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define DIN3_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set RB4 aliases
#define RB4_TRIS                 TRISBbits.TRISB4
#define RB4_LAT                  LATBbits.LATB4
#define RB4_PORT                 PORTBbits.RB4
#define RB4_WPU                  WPUBbits.WPUB4
#define RB4_OD                   ODCONBbits.ODCB4
#define RB4_ANS                  ANSELBbits.ANSELB4
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()           PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define RB4_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define RB4_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define RB4_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set RB5 aliases
#define RB5_TRIS                 TRISBbits.TRISB5
#define RB5_LAT                  LATBbits.LATB5
#define RB5_PORT                 PORTBbits.RB5
#define RB5_WPU                  WPUBbits.WPUB5
#define RB5_OD                   ODCONBbits.ODCB5
#define RB5_ANS                  ANSELBbits.ANSELB5
#define RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RB5_GetValue()           PORTBbits.RB5
#define RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define RB5_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define RB5_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define RB5_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define RB5_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define RB5_SetAnalogMode()      do { ANSELBbits.ANSELB5 = 1; } while(0)
#define RB5_SetDigitalMode()     do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set RB6 aliases
#define RB6_TRIS                 TRISBbits.TRISB6
#define RB6_LAT                  LATBbits.LATB6
#define RB6_PORT                 PORTBbits.RB6
#define RB6_WPU                  WPUBbits.WPUB6
#define RB6_OD                   ODCONBbits.ODCB6
#define RB6_ANS                  ANSELBbits.ANSELB6
#define RB6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define RB6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define RB6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define RB6_GetValue()           PORTBbits.RB6
#define RB6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define RB6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define RB6_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define RB6_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define RB6_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define RB6_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define RB6_SetAnalogMode()      do { ANSELBbits.ANSELB6 = 1; } while(0)
#define RB6_SetDigitalMode()     do { ANSELBbits.ANSELB6 = 0; } while(0)

// get/set CMROM aliases
#define CMROM_TRIS                 TRISBbits.TRISB7
#define CMROM_LAT                  LATBbits.LATB7
#define CMROM_PORT                 PORTBbits.RB7
#define CMROM_WPU                  WPUBbits.WPUB7
#define CMROM_OD                   ODCONBbits.ODCB7
#define CMROM_ANS                  ANSELBbits.ANSELB7
#define CMROM_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define CMROM_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define CMROM_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define CMROM_GetValue()           PORTBbits.RB7
#define CMROM_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define CMROM_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define CMROM_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define CMROM_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define CMROM_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define CMROM_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define CMROM_SetAnalogMode()      do { ANSELBbits.ANSELB7 = 1; } while(0)
#define CMROM_SetDigitalMode()     do { ANSELBbits.ANSELB7 = 0; } while(0)

// get/set DOUT0 aliases
#define DOUT0_TRIS                 TRISCbits.TRISC0
#define DOUT0_LAT                  LATCbits.LATC0
#define DOUT0_PORT                 PORTCbits.RC0
#define DOUT0_WPU                  WPUCbits.WPUC0
#define DOUT0_OD                   ODCONCbits.ODCC0
#define DOUT0_ANS                  ANSELCbits.ANSELC0
#define DOUT0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define DOUT0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define DOUT0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define DOUT0_GetValue()           PORTCbits.RC0
#define DOUT0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define DOUT0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define DOUT0_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define DOUT0_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define DOUT0_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define DOUT0_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define DOUT0_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define DOUT0_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set DOUT1 aliases
#define DOUT1_TRIS                 TRISCbits.TRISC1
#define DOUT1_LAT                  LATCbits.LATC1
#define DOUT1_PORT                 PORTCbits.RC1
#define DOUT1_WPU                  WPUCbits.WPUC1
#define DOUT1_OD                   ODCONCbits.ODCC1
#define DOUT1_ANS                  ANSELCbits.ANSELC1
#define DOUT1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define DOUT1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define DOUT1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define DOUT1_GetValue()           PORTCbits.RC1
#define DOUT1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define DOUT1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define DOUT1_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define DOUT1_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define DOUT1_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define DOUT1_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define DOUT1_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define DOUT1_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set DOUT2 aliases
#define DOUT2_TRIS                 TRISCbits.TRISC2
#define DOUT2_LAT                  LATCbits.LATC2
#define DOUT2_PORT                 PORTCbits.RC2
#define DOUT2_WPU                  WPUCbits.WPUC2
#define DOUT2_OD                   ODCONCbits.ODCC2
#define DOUT2_ANS                  ANSELCbits.ANSELC2
#define DOUT2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define DOUT2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define DOUT2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define DOUT2_GetValue()           PORTCbits.RC2
#define DOUT2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define DOUT2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define DOUT2_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define DOUT2_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define DOUT2_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define DOUT2_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define DOUT2_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define DOUT2_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set DOUT3 aliases
#define DOUT3_TRIS                 TRISCbits.TRISC3
#define DOUT3_LAT                  LATCbits.LATC3
#define DOUT3_PORT                 PORTCbits.RC3
#define DOUT3_WPU                  WPUCbits.WPUC3
#define DOUT3_OD                   ODCONCbits.ODCC3
#define DOUT3_ANS                  ANSELCbits.ANSELC3
#define DOUT3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define DOUT3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define DOUT3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define DOUT3_GetValue()           PORTCbits.RC3
#define DOUT3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define DOUT3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define DOUT3_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define DOUT3_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define DOUT3_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define DOUT3_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define DOUT3_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define DOUT3_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set RC4 aliases
#define RC4_TRIS                 TRISCbits.TRISC4
#define RC4_LAT                  LATCbits.LATC4
#define RC4_PORT                 PORTCbits.RC4
#define RC4_WPU                  WPUCbits.WPUC4
#define RC4_OD                   ODCONCbits.ODCC4
#define RC4_ANS                  ANSELCbits.ANSELC4
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()           PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define RC4_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define RC4_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define RC4_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define RC4_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define RC4_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set RC5 aliases
#define RC5_TRIS                 TRISCbits.TRISC5
#define RC5_LAT                  LATCbits.LATC5
#define RC5_PORT                 PORTCbits.RC5
#define RC5_WPU                  WPUCbits.WPUC5
#define RC5_OD                   ODCONCbits.ODCC5
#define RC5_ANS                  ANSELCbits.ANSELC5
#define RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RC5_GetValue()           PORTCbits.RC5
#define RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define RC5_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define RC5_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define RC5_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define RC5_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define RC5_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define RC5_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set RC6 aliases
#define RC6_TRIS                 TRISCbits.TRISC6
#define RC6_LAT                  LATCbits.LATC6
#define RC6_PORT                 PORTCbits.RC6
#define RC6_WPU                  WPUCbits.WPUC6
#define RC6_OD                   ODCONCbits.ODCC6
#define RC6_ANS                  ANSELCbits.ANSELC6
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()           PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define RC6_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define RC6_SetAnalogMode()      do { ANSELCbits.ANSELC6 = 1; } while(0)
#define RC6_SetDigitalMode()     do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set DOE aliases
#define DOE_TRIS                 TRISCbits.TRISC7
#define DOE_LAT                  LATCbits.LATC7
#define DOE_PORT                 PORTCbits.RC7
#define DOE_WPU                  WPUCbits.WPUC7
#define DOE_OD                   ODCONCbits.ODCC7
#define DOE_ANS                  ANSELCbits.ANSELC7
#define DOE_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define DOE_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define DOE_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define DOE_GetValue()           PORTCbits.RC7
#define DOE_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define DOE_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define DOE_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define DOE_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define DOE_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define DOE_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define DOE_SetAnalogMode()      do { ANSELCbits.ANSELC7 = 1; } while(0)
#define DOE_SetDigitalMode()     do { ANSELCbits.ANSELC7 = 0; } while(0)

// get/set RD2 procedures
#define RD2_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define RD2_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define RD2_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define RD2_GetValue()              PORTDbits.RD2
#define RD2_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define RD2_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define RD2_SetPullup()             do { WPUDbits.WPUD2 = 1; } while(0)
#define RD2_ResetPullup()           do { WPUDbits.WPUD2 = 0; } while(0)
#define RD2_SetAnalogMode()         do { ANSELDbits.ANSELD2 = 1; } while(0)
#define RD2_SetDigitalMode()        do { ANSELDbits.ANSELD2 = 0; } while(0)

// get/set RD3 procedures
#define RD3_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define RD3_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define RD3_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define RD3_GetValue()              PORTDbits.RD3
#define RD3_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define RD3_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define RD3_SetPullup()             do { WPUDbits.WPUD3 = 1; } while(0)
#define RD3_ResetPullup()           do { WPUDbits.WPUD3 = 0; } while(0)
#define RD3_SetAnalogMode()         do { ANSELDbits.ANSELD3 = 1; } while(0)
#define RD3_SetDigitalMode()        do { ANSELDbits.ANSELD3 = 0; } while(0)

// get/set CLK2 aliases
#define CLK2_TRIS                 TRISDbits.TRISD4
#define CLK2_LAT                  LATDbits.LATD4
#define CLK2_PORT                 PORTDbits.RD4
#define CLK2_WPU                  WPUDbits.WPUD4
#define CLK2_OD                   ODCONDbits.ODCD4
#define CLK2_ANS                  ANSELDbits.ANSELD4
#define CLK2_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define CLK2_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define CLK2_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define CLK2_GetValue()           PORTDbits.RD4
#define CLK2_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define CLK2_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define CLK2_SetPullup()          do { WPUDbits.WPUD4 = 1; } while(0)
#define CLK2_ResetPullup()        do { WPUDbits.WPUD4 = 0; } while(0)
#define CLK2_SetPushPull()        do { ODCONDbits.ODCD4 = 0; } while(0)
#define CLK2_SetOpenDrain()       do { ODCONDbits.ODCD4 = 1; } while(0)
#define CLK2_SetAnalogMode()      do { ANSELDbits.ANSELD4 = 1; } while(0)
#define CLK2_SetDigitalMode()     do { ANSELDbits.ANSELD4 = 0; } while(0)

// get/set CLK1 aliases
#define CLK1_TRIS                 TRISDbits.TRISD5
#define CLK1_LAT                  LATDbits.LATD5
#define CLK1_PORT                 PORTDbits.RD5
#define CLK1_WPU                  WPUDbits.WPUD5
#define CLK1_OD                   ODCONDbits.ODCD5
#define CLK1_ANS                  ANSELDbits.ANSELD5
#define CLK1_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define CLK1_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define CLK1_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define CLK1_GetValue()           PORTDbits.RD5
#define CLK1_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define CLK1_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define CLK1_SetPullup()          do { WPUDbits.WPUD5 = 1; } while(0)
#define CLK1_ResetPullup()        do { WPUDbits.WPUD5 = 0; } while(0)
#define CLK1_SetPushPull()        do { ODCONDbits.ODCD5 = 0; } while(0)
#define CLK1_SetOpenDrain()       do { ODCONDbits.ODCD5 = 1; } while(0)
#define CLK1_SetAnalogMode()      do { ANSELDbits.ANSELD5 = 1; } while(0)
#define CLK1_SetDigitalMode()     do { ANSELDbits.ANSELD5 = 0; } while(0)

// get/set SYNC aliases
#define SYNC_TRIS                 TRISDbits.TRISD6
#define SYNC_LAT                  LATDbits.LATD6
#define SYNC_PORT                 PORTDbits.RD6
#define SYNC_WPU                  WPUDbits.WPUD6
#define SYNC_OD                   ODCONDbits.ODCD6
#define SYNC_ANS                  ANSELDbits.ANSELD6
#define SYNC_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define SYNC_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define SYNC_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define SYNC_GetValue()           PORTDbits.RD6
#define SYNC_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define SYNC_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define SYNC_SetPullup()          do { WPUDbits.WPUD6 = 1; } while(0)
#define SYNC_ResetPullup()        do { WPUDbits.WPUD6 = 0; } while(0)
#define SYNC_SetPushPull()        do { ODCONDbits.ODCD6 = 0; } while(0)
#define SYNC_SetOpenDrain()       do { ODCONDbits.ODCD6 = 1; } while(0)
#define SYNC_SetAnalogMode()      do { ANSELDbits.ANSELD6 = 1; } while(0)
#define SYNC_SetDigitalMode()     do { ANSELDbits.ANSELD6 = 0; } while(0)

// get/set RD7 aliases
#define RD7_TRIS                 TRISDbits.TRISD7
#define RD7_LAT                  LATDbits.LATD7
#define RD7_PORT                 PORTDbits.RD7
#define RD7_WPU                  WPUDbits.WPUD7
#define RD7_OD                   ODCONDbits.ODCD7
#define RD7_ANS                  ANSELDbits.ANSELD7
#define RD7_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define RD7_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define RD7_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define RD7_GetValue()           PORTDbits.RD7
#define RD7_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define RD7_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define RD7_SetPullup()          do { WPUDbits.WPUD7 = 1; } while(0)
#define RD7_ResetPullup()        do { WPUDbits.WPUD7 = 0; } while(0)
#define RD7_SetPushPull()        do { ODCONDbits.ODCD7 = 0; } while(0)
#define RD7_SetOpenDrain()       do { ODCONDbits.ODCD7 = 1; } while(0)
#define RD7_SetAnalogMode()      do { ANSELDbits.ANSELD7 = 1; } while(0)
#define RD7_SetDigitalMode()     do { ANSELDbits.ANSELD7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);




#endif // PIN_MANAGER_H
/**
 End of File
*/