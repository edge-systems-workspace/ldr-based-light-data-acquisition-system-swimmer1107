/**
 * @file LDR_Light_Measurement.ino
 * @brief Light intensity measurement using LDR sensor.
 *
 * This program reads analog values from an LDR (Light Dependent Resistor)
 * connected to analog pin A0. The raw analog value (0–1023) is converted
 * into a percentage (0–100%) to represent light intensity.
 * The values are displayed on the Serial Monitor.
 *
 * @author Pulkit Kulshreshtha
 * @date 18 Feb 2026
 */

#include <Arduino.h>

#define ldrpin A0   ///< LDR sensor connected to analog pin A0

/**
 * @brief Initializes serial communication and LDR pin.
 *
 * This function runs once when the Arduino starts.
 * - Starts Serial communication at 9600 baud rate
 * - Sets LDR pin as INPUT
 * - Prints setup confirmation message
 */
void setup() {
    Serial.begin(9600);
    pinMode(ldrpin, INPUT);
    Serial.println("LDR setup");
}


