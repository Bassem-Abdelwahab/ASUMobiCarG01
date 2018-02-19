int red=10;
int yellow=11;
int green=12;
void setup() {
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop() {

  digitalWrite(red,HIGH);
  digitalWrite(yellow,LOW);
  digitalWrite(green,LOW);
  delay(2000);

  
  digitalWrite(yellow,HIGH);
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  delay(2000);
  
  digitalWrite(green,HIGH);
  digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
  delay(2000);
  
}
