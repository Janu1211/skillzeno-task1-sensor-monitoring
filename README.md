# Task 1 – Sensor Monitoring

## Objective
To build a basic sensor monitoring system using Arduino and a temperature sensor.

## Components Used
- Arduino Uno
- TMP36 Temperature Sensor
- Serial Monitor

## Sensor Connection
- TMP36 VCC → 5V
- TMP36 VOUT → A0
- TMP36 GND → GND

## Working
The TMP36 sensor provides an analog voltage based on temperature.
Arduino reads the sensor value through analog pin A0, converts it into temperature, and displays the temperature through the Serial Monitor.

## Output
Temperature readings are displayed continuously in the Serial Monitor.

## Simulation
The circuit was simulated using Tinkercad.