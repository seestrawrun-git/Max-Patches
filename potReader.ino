int potPin = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(potPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  int potValue = analogRead(potPin);
  Serial.println(potValue);
  delay(40);

}
