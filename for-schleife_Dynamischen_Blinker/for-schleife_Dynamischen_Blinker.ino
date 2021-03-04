int myPins[] = {9,10,11,12,13,8};
int i = 0;

void setup() {
  for(i = 0; i <= 6; i ++){
    pinMode(myPins[i], OUTPUT);
  }
}

void loop() {
    for(int i = 0; i <= 6; i ++){
      digitalWrite(myPins[i], HIGH);
      delay(100);
      digitalWrite(myPins[i], LOW);
      if(i == 6){
        digitalWrite(myPins[i], HIGH);
        delay(500);
        digitalWrite(myPins[i], LOW);
      }
      }
}
