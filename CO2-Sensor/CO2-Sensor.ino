int werte[] = {61, 114, 175, 236, 297, 358};
void setup() {
  Serial.begin(9600);
  pinMode(A5, INPUT);
  pinMode(2, OUTPUT);
  for(int i = 0; i < 7; i++){
    pinMode(8+i, OUTPUT);
  }
}

void loop() {
  int sen = analogRead(A5);
  Serial.println(sen);
  
  for(int i = 0; i <=6; i++){
    if(sen > werte[i]){ 
     digitalWrite(8+i, HIGH);
    }
    for(int i = 0; i < 7; i++){
      digitalWrite(8+i, LOW);
    }
  }
  if(sen >= werte[4]){
    tone(2, 500);
  }
  else{
    noTone(2);
  }
}
