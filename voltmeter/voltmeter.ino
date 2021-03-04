void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int i = analogRead(A0);
  float a = i * (5.0 / 1023);
  delay(500);
  Serial.println(a);
}
