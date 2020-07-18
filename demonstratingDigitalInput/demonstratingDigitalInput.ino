
// Project 4- Demonstrating digital input

#define LED 12
#define BUTTON 7

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT); // Output for the LED
  pinMode(BUTTON, INPUT); // Input for the button
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(BUTTON) == HIGH){
    digitalWrite(LED, HIGH); // turn on the LED
    delay(500); // wait for 0.5 seconds
    digitalWrite(LED, LOW); // turn of the LED
  }
}
