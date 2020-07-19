// Create a Function to Set the number of blinks

#define LED 3

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
}

void blinkLED(int cycles, int del){
  for(int z=0; z<cycles; z++){
    digitalWrite(LED, HIGH);
    delay(del);
    digitalWrite(LED, LOW);
    delay(del);
  }
}
void loop() {
  // put your main code here, to run repeatedly:
  blinkLED(5, 100);
  delay(1000);
}
