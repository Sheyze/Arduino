void setup(){
  Serial.begin(9600);
  pinMode(10, OUTPUT);
}

void loop(){
  int trigger = 7;
  pinMode(trigger, OUTPUT);
  digitalWrite(trigger, HIGH);
  digitalWrite(trigger, LOW);
  
  int echo = 7;
  pinMode(echo, INPUT);
  int dauer = pulseIn(echo, HIGH);
  float entfernung = 0.0343*(dauer/2);
  
  Serial.print(entfernung);
  Serial.println(" cm");
  
  if(entfernung<=5){
    digitalWrite(10, HIGH);
  }
  else{
  float LED = entfernung * 4;
  delay(LED);
  digitalWrite(10, HIGH);
  delay(LED);
  digitalWrite(10, LOW);
  Serial.print(entfernung);
  Serial.println(" cm");
  }
}
