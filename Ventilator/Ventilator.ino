void setup() {
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  float Temp = analogRead(A5);
  Serial.println(Temp);
  if(Temp>165){
    digitalWrite(11, HIGH);
  }
  else{
    digitalWrite(11, LOW);
  }
}
