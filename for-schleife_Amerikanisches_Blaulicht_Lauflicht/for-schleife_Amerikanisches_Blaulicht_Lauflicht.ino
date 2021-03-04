int myPins[] = {9,10,11,12,13};

void setup() {
  pinMode(myPins[0], OUTPUT); 
  pinMode(myPins[1], OUTPUT);
  pinMode(myPins[2], OUTPUT); 
  pinMode(myPins[3], OUTPUT);
  pinMode(myPins[4], OUTPUT);
}

void loop() {
    for(int i = 0; i <= 5; i ++){
    digitalWrite(myPins[i], HIGH);
    delay(100);
    digitalWrite(myPins[i], LOW);
  }
}
