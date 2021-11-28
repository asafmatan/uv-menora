/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(D8, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);
}



// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, LOW);    
  digitalWrite(D8, LOW);    
  digitalWrite(D2, LOW);    
  digitalWrite(D3, LOW);    
  digitalWrite(D4, LOW);    
  digitalWrite(D5, LOW);    
  digitalWrite(D6, LOW);    
  digitalWrite(D7, LOW);    
  delay(1000);                       
  digitalWrite(LED_BUILTIN, HIGH);    
  delay(1000);                       
  digitalWrite(D8, HIGH);    
  delay(1000);                       
  digitalWrite(D2, HIGH);    
  delay(1000);                       
  digitalWrite(D3, HIGH);    
  delay(1000);                       
  digitalWrite(D4, HIGH);    
  delay(1000);                       
  digitalWrite(D5, HIGH);    
  delay(1000);                       
  digitalWrite(D6, HIGH);    
  delay(1000);                       
  digitalWrite(D7, HIGH);    
  delay(1000);                       
}
