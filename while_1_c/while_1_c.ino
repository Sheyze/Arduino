int i = 0;
int a = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  while(i != 12){
    i = random(1, 13);
    a ++;
    delay(100);
    Serial.println(i);
  }
  Serial.println("Nach:");
  Serial.println(a);
  a = 0;
  i = 0;
  delay(1000);
}
