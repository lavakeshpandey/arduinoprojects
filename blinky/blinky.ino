void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT); //set digital pin 13 to output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); // turn on digital pin 13
  delay(950); // pause for a second
  digitalWrite(13, LOW); // turn off digital pin 13
  delay(950); // pause for one second
}
