void setup() {
  Serial.begin(9600);
}

void loop() {
  float Wid = analogRead(A0);
  Serial.println(Wid);
  float i = 0;

  for(Wid; Wid>512;){
    if(Wid>i){
      i = i + 10;
      analogWrite(A5, i);
    }
  }
  
for(Wid; Wid<512;){
    if(Wid<i){
      i = i - 10;
      analogWrite(A5, i);
    }
   }
   Serial.println(i);
}
