// Project 13 - Multiplying a Number by Two

long number;
long a = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  number = 0; // zero the incoming number, ready for a new read
  Serial.flush(); //clear any "junk" out of the serial buffer before waiting

  while (Serial.available() == 0) {
    // do nothing until something enters the serial buffer
    // when something comes in Serial.available will return how many
    // characters are waiting in the buffer to process.
  }
  while (Serial.available() > 0) {

    // move any previous digit to the next column on the left;
    // in other words, 1 becomes 10 while there is data in the buffer
    number = number * 10;
    // read the number in the serial buffer
    // remove the ascii text offset for zero: '0'
    a = Serial.read() - '0';
    // add this value a into the accumulating number
    number = number +a;
    // allow a short delay for more serial data to come into 
    // Serial.available()
    delay(5);
  }
  // Show me the number!
  Serial.print("You entered: ");
  Serial.println(number);
  Serial.print(number);
  Serial.print(" multiplied by two is ");
  number = number * 2;
  Serial.println(number);
}
