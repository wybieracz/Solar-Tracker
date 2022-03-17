# Solar-Tracker
The aim of the project was to design and build a model of a mobile platform for a photovoltaic panel. The platform moves in two axes: horizontal and vertical, adjusting its position to make the most effective use of the sunlight falling on the panel. The program that determines the best position of the platform uses data provided by the light detection module connected to the microcontroller. The platform is moved by two servos controlled by the microcontroller.
## General information
* Model of a platform for a photovoltaic panel
* Rotation in vertical and horizontal axies
* Automatically follows the light
## Technologies used
* C
* Autodesk EAGLE
* Arduino Nano
## Schematic
![sch1](/schematic/e1.png)
![sch2](/schematic/e2.png)
![pcb](/schematic/pcb.png)
![uni_pcb](/schematic/uni_pcb.jpg)
## Components description
* Arduino Nano - microcontroller.
* J1 - Power module with DC 2.1/5.5mm socket.
* LIGHT_DETECTOR - connector to the light detection sensor. Connected to Arduino Nano analog pins A0 - A3 and 5V0.
* SERVO_1, SERVO_2 - connectors to the servos. Connected to Arduino Nano digital pins D9, D10, 5V0 and GND.
* R0 - R3 - 10k resistors necessary to read data from the light detection system.
* C1 - Electrolytic capacitor 100u which guarantees stable operation of the whole system.
* C2 - ceramic capacitor 100n guaranteeing stable operation of the microprocessor.
* C3, C5 - ceramic capacitors 100n guaranteeing stable operation of the servomechanisms.
* C4, C6 - 100u electrolytic capacitors guaranteeing stable operation of servos.
## Photos
![DSC_1455](/photos/DSC_1455.JPG)
![DSC_1457](/photos/DSC_1457.JPG)
![DSC_1458](/photos/DSC_1458.JPG)
![DSC_1466](/photos/DSC_1466.JPG)
![DSC_1469](/photos/DSC_1469.JPG)
![DSC_1470](/photos/DSC_1470.JPG)
![DSC_1473](/photos/DSC_1473.JPG)
![DSC_1474](/photos/DSC_1474.JPG)
![DSC_1475](/photos/DSC_1475.JPG)
## Links
* https://docs.arduino.cc/hardware/nano
* https://www.arduino.cc/reference/en/
* https://www.thingiverse.com/thing:708819
* https://diyi0t.com/arduino-nano-tutorial/
