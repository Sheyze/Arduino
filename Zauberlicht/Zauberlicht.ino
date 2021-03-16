void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  float Wid = analogRead(A0);
  float WidV = Wid *(5.0/1024);
  if(WidV > 2.70){
    digitalWrite(13, HIGH);
  }
  else{
    digitalWrite(13, LOW);
  }
}
