int pins[]={2,3,4,5,6,7};
int led=0;
void setup(){
  Serial.begin(9600);
  pinMode(A0, INPUT);
  for(int i=0;i<=5;i++){
    pinMode(pins[i],OUTPUT);
  }
}
void loop(){
  int n=analogRead(A0);
  float a=n*(5.0/1023);
  for(led=0;led<=6;led++){
    if(led<=a){
      digitalWrite(pins[led],HIGH);
    }
  }
  Serial.println(a);
  delay(200);
  for(led=0;led<=6;led++){
    if(led<=a){
      digitalWrite(pins[led],LOW);
    }
  }
}
