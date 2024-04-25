/**
 * #define RCM_HARDWARE_VERSION RCM_BYTE_V1
 * version 1 of the RCM BYTE // https://github.com/RCMgames/RCM-Hardware-BYTE/tree/v1---archive
 * */

#ifndef RCM_BYTE_V1_H
#define RCM_BYTE_V1_H

#include <Arduino.h>
#include <JMotor.h> //https://github.com/joshua-8/JMotor

#include <FastLED.h>
#include <TMC7300.h>

CRGB RSL_leds[1] = { CRGB(0, 0, 0) };

#define RSL RSL_leds[0]

void setRSL(CRGB color, boolean show = true)
{
    if (RSL != color) {
        RSL = color;
        if (show)
            FastLED.show();
    }
}

CRGB RSLcolor = CRGB(250, 45, 0); // orange

#define batMonitorPin A1
#define uartPin A0

#define motorsEnablePin RX

#define buttonPin 0

#define port1Pin SCK
#define port2Pin MISO
#define port3Pin MOSI
#define port4Pin A2
#define port5Pin A3
#define port6Pin SDA
#define port7Pin SCL
#define port8Pin TX

//          PWM_CH, PIN
#define port1 0, port1Pin
#define port2 1, port2Pin
#define port3 2, port3Pin
#define port4 3, port4Pin
#define port5 4, port5Pin
#define port6 5, port6Pin
#define port7 6, port7Pin
#define port8 7, port8Pin

//            chip address, motor address
#ifndef MOTOR_DRIVER_BAUD
#define MOTOR_DRIVER_BAUD 110000
#endif

#define portAB uartPin, 2, MOTOR_DRIVER_BAUD
#define portCD uartPin, 3, MOTOR_DRIVER_BAUD
#define portEF uartPin, 1, MOTOR_DRIVER_BAUD
#define portGH uartPin, 0, MOTOR_DRIVER_BAUD

TMC7300IC TMC7300_AB = TMC7300IC(portAB);
TMC7300IC TMC7300_CD = TMC7300IC(portCD);
TMC7300IC TMC7300_EF = TMC7300IC(portEF);
TMC7300IC TMC7300_GH = TMC7300IC(portGH);

#define portA TMC7300_AB, 0
#define portB TMC7300_AB, 1
#define portC TMC7300_CD, 0
#define portD TMC7300_CD, 1
#define portE TMC7300_EF, 0
#define portF TMC7300_EF, 1
#define portG TMC7300_GH, 0
#define portH TMC7300_GH, 1

JMotorDriverTMC7300 motorDriverA = JMotorDriverTMC7300(portA);
JMotorDriverTMC7300 motorDriverB = JMotorDriverTMC7300(portB);
JMotorDriverTMC7300 motorDriverC = JMotorDriverTMC7300(portC);
JMotorDriverTMC7300 motorDriverD = JMotorDriverTMC7300(portD);
JMotorDriverTMC7300 motorDriverE = JMotorDriverTMC7300(portE);
JMotorDriverTMC7300 motorDriverF = JMotorDriverTMC7300(portF);
JMotorDriverTMC7300 motorDriverG = JMotorDriverTMC7300(portG);
JMotorDriverTMC7300 motorDriverH = JMotorDriverTMC7300(portH);

void setupMotors()
{
    pinMode(motorsEnablePin, OUTPUT);
    digitalWrite(motorsEnablePin, LOW);
    TMC7300_AB.begin();
    TMC7300_CD.begin();
    TMC7300_EF.begin();
    TMC7300_GH.begin();
    digitalWrite(motorsEnablePin, HIGH);
}

#endif // RCM_BYTE_V1_H