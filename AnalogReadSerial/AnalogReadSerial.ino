int P[10] = {11,10,9,8,7,6,5,4,3,2};
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  for (int i = 0;i < 10; i++)
  {
    pinMode(P[i], OUTPUT);
  }
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0)*9/1023;
  // print out the value you read:
  Serial.println(sensorValue);
  for (int i = 0;i <= sensorValue; i++)
  {
    digitalWrite(P[i], HIGH);
  }
   // delay in between reads for stability
  for (int i = sensorValue + 1;i < 10; i++)
  {
    digitalWrite(P[i], LOW);
  }
  delay(1000); 
}
