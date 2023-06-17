/*
  This is a demo of ESP8266 WiFi Module in standalone mode (without Arduino) controlling an LED via a Web page.
  This code also demostrates that PWM is available on the ESP8266, so we can dim the LED.
  Analog Input is available on the ESP8266 but this pin is not wired up on ESP-01 board.
  The ESP can also support interrupts.

  This demo uses the Arduino IDE and the Arduino Boards Manager to upload the program to the ESP2866 with an FTDI Programmer.
  NB: This overwrites any Firmware that was previously on the ESP8266.

  See: http://www.instructables.com/id/ESP8266-WiFi-Module-for-Dummies/ for the details on how to set the board up and upload the code to the ESP8266
  Also see: http://www.instructables.com/id/The-Simple-Guide-to-Flashing-Your-ESP8266-Firmware/
*/

// Include the ESP8266 Library. This library is automatically provided by the ESP8266 Board Manager and does not need to be installed manually.
#include <ESP8266WiFi.h>

String codeVersion = "Version 1.0  Aug 2016 by TonesB";

// WiFi Router Login - change these to your router settings
const char* SSID = "YourSSID";
const char* password = "YourPassword";

// Setup GPIO2
int pinGPIO2 = 2; //To control LED
int ledStatus = 0; //0=off,1=on,2=dimmed

void setup() {
  Serial.begin(115200);
  delay(10);
  Serial.println();
  Serial.println();
  Serial.println(codeVersion);
  Serial.println("/");
}

void loop() {
  Serial.println("New User");

}
