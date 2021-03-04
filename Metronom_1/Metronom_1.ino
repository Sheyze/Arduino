int tasterstatus;
int a=0;

void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  Serial.begin(9600);


}

void loop() {
  tasterstatus=digitalRead(2);

  Serial.print("Wert von a:");
  Serial.println(a);

  if (tasterstatus == LOW) {
    a=a+1;
    delay(200);
  }

  if ( a == 1 ) {
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
    digitalWrite(13, HIGH);
    delay(1000);
  }

  if ( a == 2 ) {
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);
    digitalWrite(13, HIGH);
    delay(500);
  }

  if ( a == 3 ) {
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(200);
    digitalWrite(13, HIGH);
    delay(200);
  }

  if ( a == 4 ) {
    digitalWrite(13, LOW);
  }

  else {
    a=0;
  }
}
