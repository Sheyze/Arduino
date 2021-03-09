void setup() {
  Serial.begin(9600);
}

void loop() {
  int n = analogRead(A0);
  float Spannung2 = n *(5.0/1023);
  float Spannung1 = 5 - Spannung2;
  float Ohm = 1000 / Spannung1 * Spannung2;
  Serial.println(Ohm);
}
