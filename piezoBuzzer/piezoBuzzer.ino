// Project 7 - Trying out a Piezo Buzzer

#define PIEZO 3 // pin 3 is capable of PWM output to drive tones
int del = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIEZO, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(PIEZO, 128); // 50% duty cycle tone to the  piezo
  delay(del);
  digitalWrite(PIEZO, LOW); // turn the piezo off
  delay(del);
}
