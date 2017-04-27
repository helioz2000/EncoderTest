
// rotary encoder demo by 'jurs' for Arduino Forum
// This is the code for the main "sketch"

#include "Encoder.h"
#define BAUDRATE 115200L // serial baud rate

void setup() {
  Serial.begin(BAUDRATE);
  Serial.println();
  Serial.println("Good night and good luck!"); // print some Test-Message at beginning
  beginEncoders();
}

void printEncoders()
{ // print current count of each encoder to Serial
  for (int i=0; i<NUMENCODERS; i++)
  {
    Serial.print(encoder[i].count);
    Serial.print('\t');
  }
  Serial.println();
}

void loop() {
  if (updateEncoders()) printEncoders();
}
