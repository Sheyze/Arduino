int n = 5;
int i = 1;
long z = 1;
void setup() {
  Serial.begin(9600);
}

void loop() {
  for(i; i<=n; i++){
    z = z*i;
    Serial.println(z);
  }
}
