/*
 ESP8266 Blink by Simon Peter
 Blink the blue LED on the ESP-01 module
 This example code is in the public domain
 
 The blue LED on the ESP-01 module is connected to GPIO1 
 (which is also the TXD pin; so we cannot use Serial.print() at the same time)
 
 Note that this sketch uses LED_BUILTIN to find the pin with the internal LED
*/

void setup() {
  pinMode(2, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
}

// the loop function runs over and over again forever
void loop() {
  // dash
  digitalWrite(2, LOW);   // Turn the LED on (Note that LOW is the voltage level)
  delay(100);                      // Wait for a second
  digitalWrite(2, HIGH);  // Turn the LED off by making the voltage HIGH

  delay(300);                      

  digitalWrite(2, LOW);   // Turn the LED on (Note that LOW is the voltage level)
  delay(100);                      // Wait for a second
  digitalWrite(2, HIGH);  // Turn the LED off by making the voltage HIGH

  delay(300);                      

  digitalWrite(2, LOW);   // Turn the LED on (Note that LOW is the voltage level)
  delay(100);                      // Wait for a second
  digitalWrite(2, HIGH);  // Turn the LED off by making the voltage HIGH

  delay(2000);                      

  digitalWrite(2, LOW);   // Turn the LED on (Note that LOW is the voltage level)
  delay(800);                      // Wait for a second
  digitalWrite(2, HIGH);  // Turn the LED off by making the voltage HIGH

  delay(500);                      

  digitalWrite(2, LOW);   // Turn the LED on (Note that LOW is the voltage level)
  delay(800);                      // Wait for a second
  digitalWrite(2, HIGH);  // Turn the LED off by making the voltage HIGH

  delay(500);                      

  digitalWrite(2, LOW);   // Turn the LED on (Note that LOW is the voltage level)
  delay(800);                      // Wait for a second
  digitalWrite(2, HIGH);  // Turn the LED off by making the voltage HIGH

  delay(2000);
}
