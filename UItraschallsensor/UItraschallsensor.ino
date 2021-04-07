void setup()
{
  Serial.begin(9600);
  pinMode(10, OUTPUT);
}

void loop()
{
  int trigger = 7;
  pinMode(trigger, OUTPUT);
  digitalWrite(trigger, HIGH);
  digitalWrite(trigger, LOW);
  int echo = 7;
  pinMode(echo, INPUT);
  int dauer = pulseIn(echo, HIGH);
  int entfernung = 0.0343*(dauer/2);
  bl();
  Serial.print(entfernung);
  Serial.println(" cm");
}

void bl()
{
  digitalWrite(10, HIGH);
  float LED = entfernung * 100;
  delay(LED);
  digitalWrite(10, LOW);
  delay(LED);
}
