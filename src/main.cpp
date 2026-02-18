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

