
## CODACY BADGE

[![Codacy Badge](https://app.codacy.com/project/badge/Grade/13880149001440ab9030197edfc2a17a)](https://www.codacy.com/gh/Nat1718/M2_Heating_Seat_Applications_Embedded_C/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Nat1718/M2_Heating_Seat_Applications_Embedded_C&amp;utm_campaign=Badge_Grade)

        [(https://app.codiga.io/public/project/32919/M2_Heating_Seat_Applications_Embedded_C/dashboard)]


## Embedded C Project
### Heating Seat Application 

### Principle
This system is basically used to control the temperature inside a vehicle(Car). Whenever the user  gets seated inside the car, the button sensor gets activated. After that, the user gets access to turn on the heater. Temperature will be monitored by the temperature sensor and tha analog value will be sent to microcontroller,***Atmega328***.

### Simulation

The operation of the heat control system is coded in embedded c and the working is demonstrated using a simuation software called ***SimulIDE***.

This system is usually done in 3 steps or in 3 activities

*   When the two switches are closed, the first LED glows indicating the actuation of the system and the heater.
*   Then the analog input from the temperature sensor is received and digitized using ADC.
*   The digitized temperature input is visualized using Pulse Width Modulation.
