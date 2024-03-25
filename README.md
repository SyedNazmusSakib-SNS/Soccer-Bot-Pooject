# Soccer-Bot-Pooject

Soccer Bot
This repository contains code and instructions for building a Soccer Bot using two different hardware setups: Arduino Uno based and ESP32 based. The Soccer Bot is designed to be controlled remotely and features a BTS760 motor driver, a buck module, and a 2200 mAh battery for power. Additionally, it can be controlled using the Flysky FS-i6 transmitter and receiver system.

# Arduino Uno Based Soccer Bot
### Components Used:
* Arduino Uno R3
* BTS760 Motor Driver
* Buck Module
* 2200 mAh Battery
* Flysky FS-i6 Transmitter and Receiver
### Description:
The Arduino Uno based Soccer Bot utilizes the Arduino Uno R3 microcontroller board to control its motors and receive input signals from the Flysky FS-i6 transmitter and receiver. The BTS760 motor driver is used to drive the motors of the bot, providing the necessary power and control. The buck module is employed to regulate the voltage supplied to the components, ensuring stable operation. The 2200 mAh battery powers the entire system, providing mobility and flexibility.

## Setup Instructions:
* Connect the motors to the BTS760 motor driver, ensuring proper polarity.
* Connect the BTS760 motor driver to the Arduino Uno R3.
* Connect the buck module to the power source and regulate the voltage to match the requirements of the components.
* Power up the Arduino Uno using the 2200 mAh battery.
* Bind the Flysky FS-i6 transmitter and receiver.
* Upload the provided Arduino code to the Arduino Uno board.


# ESP32 Based Soccer Bot
### Components Used:
* ESP32
* BTS760 Motor Driver
* Buck Module
* 2200 mAh Battery
  
### Description:
The ESP32 based Soccer Bot employs the ESP32 microcontroller for enhanced processing capabilities and built-in Wi-Fi connectivity. The BTS760 motor driver is utilized to control the motors of the bot, providing adequate power and control. Similar to the Arduino Uno based setup, the buck module is employed to regulate the voltage supplied to the components, ensuring stable operation. The 2200 mAh battery powers the entire system, offering mobility and flexibility.

Setup Instructions:
* Connect the motors to the BTS760 motor driver, ensuring proper polarity.
* Connect the BTS760 motor driver to the ESP32 board.
* Connect the buck module to the power source and regulate the voltage to match the requirements of the components.
* Power up the ESP32 using the 2200 mAh battery.
* Configure the Wi-Fi settings of the ESP32 as per your network requirements.
* Upload the provided code to the ESP32 board.

### Additional Notes:
* Ensure proper wiring and connections to avoid damage to the components.
* Customize the code as needed to incorporate additional features or functionalities.
* Test the bot in a safe environment to avoid accidents or damage.
* Refer to the datasheets of the components for detailed specifications and pinouts.
