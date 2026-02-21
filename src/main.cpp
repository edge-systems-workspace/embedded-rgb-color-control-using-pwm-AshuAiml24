#include <Arduino.h>

/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 * @author ASHU PAL
 * @date 2026-02-17
 *
 * @details
 * Controls an RGB LED using digital ON/OFF and analog PWM brightness control.
 * Demonstrates simple digital blink and PWM color cycling on three pins.
 */


int RED_pin = 9;

 // Define RED pin (Use 9)
int GREEN_pin = 10;


 // Define GREEN pin (Use 10)

int BLUE_pin = 11;
 // Define BLUE pin (Use 11)

/**
 * @brief Initialize serial communication and configure LED pins.
 *
 * @details
 * Starts the hardware Serial at 9600 baud and sets the RGB pins as OUTPUT.
 * Prints an initialization message to the serial console.
 *
 * @return void
 */
void setup() {
 Serial.begin(9600);

 pinMode(RED_pin, OUTPUT);
 pinMode(GREEN_pin, OUTPUT);
 pinMode(BLUE_pin, OUTPUT);

 Serial.println("RGB LED Initialized!");
}



void loop() {

    // -------- DIGITAL MODE --------

    // TODO 7:
    // Turn ON red (digital HIGH)

    // TODO 8:
    // Turn OFF red

    // -------- ANALOG (PWM) MODE --------

    // TODO 9:
    // Set RED brightness using analogWrite()

    // TODO 10:
    // Set GREEN brightness using analogWrite()

    // TODO 11:
    // Set BLUE brightness using analogWrite()

    // TODO 12:
    // Add delay for visible transition
}
