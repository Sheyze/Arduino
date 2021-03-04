int i = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  while(i < 55){
    Serial.println(i);
    i++;
  }
}
