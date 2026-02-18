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

/**
 * @brief Continuously reads light intensity.
 *
 * Steps:
 * 1. Reads analog value from LDR (0–1023)
 * 2. Converts value into percentage (0–100%)
 * 3. Prints raw value and percentage to Serial Monitor
 * 4. Waits 500 milliseconds before next reading
 */
void loop() {

    int ldr = analogRead(ldrpin);  ///< Read analog value from LDR

    // Convert raw value (0–1023) to percentage (0–100)
    int lightPercent = map(ldr, 0, 1023, 0, 100);

    Serial.println("LDR Value:");
    Serial.println(ldr);

    Serial.print("Light Percent: ");
    Serial.print(lightPercent);
    Serial.println("%");

    delay(500);
}
