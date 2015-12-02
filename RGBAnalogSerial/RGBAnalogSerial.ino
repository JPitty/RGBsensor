/*
 Analog input and serial output

 Reads analog input pins, maps the result to a range from 0 to 255
 Also prints the results to the serial monitor.

 JP 12/1/15
 */

//RGB input pins
const int RPin = 22; //A8
const int GPin = 21; //A7
const int BPin = 20; //A6

//RGB output values
int RValue = 0;
int GValue = 0;
int BValue = 0;

void setup() {
  analogReadRes(16);
  // initialize serial communications
  Serial.begin(9600);
}

void loop() {
  // read the analog in value:
  RValue = analogRead(RPin);
  GValue = analogRead(GPin);
  BValue = analogRead(BPin);

  //Use this to write an LED?
  // map it to the range of the analog out:
  //outputValue = map(xValue, 0, 1023, 0, 255);
  // change the analog out value:
  //analogWrite(analogOutPin, outputValue);

  // print the results to the serial monitor:
  Serial.print("R = ");
  Serial.print(RValue);
  Serial.print("  G = ");
  Serial.print(GValue);
  Serial.print("  B = ");
  Serial.println(BValue);

  // wait milliseconds before the next loop
  // for the analog-to-digital converter to settle
  delay(25);
}
