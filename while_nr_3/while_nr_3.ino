int i = 0;
int a = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  i = random(1, 21);
  a = random(1, 21);
  while( i == a){
    i = random(1, 21);
    a = random(1, 21);
  }
  Serial.print("i:");
  Serial.print(i);
  Serial.print("a:");
  Serial.println(a);
  delay(3000);
}
