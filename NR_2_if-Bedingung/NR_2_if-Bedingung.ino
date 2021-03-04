int tasterStatus = 0;
int ledStatus = 0;

void setup()
{
  pinMode(tasterStatus, INPUT_PULLUP);
  pinMode(ledStatus, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  tasterStatus = digitalRead(3);
  
  if(tasterStatus == HIGH)
  {
    ledStatus ++;
    delay(500);
  }

  if(ledStatus == 0) //RED
  {
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
  }

  else if(ledStatus == 1) //GREEN
  {
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
  }

  else if(ledStatus == 2) //BLUE
  {
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
  }

  else //RED
  {
    ledStatus = 0;
  }
}
