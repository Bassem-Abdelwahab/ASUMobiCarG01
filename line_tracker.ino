  #define mR1 2 //for motor right +
  #define mR2 3 //for motor right -
  #define mL1 4 //for motor lift +
  #define mL2 5 //for motor lift -
  #define x 255 //max speed
  #define y 125 //min speed
  #define z 192 //half speed
  #define enR 9 //enable to control speed for motor right
  #define enL 10 //enable to control speed for motor lift
  #define s1 7 //sensor 1 in the right side
  #define s2 8 //sensor 2 in the right side
  #define s3 11 //sensor 3 in the middle
  #define s4 12 //sensor 4 in the lift side
  #define s5 13 //sensor 5 in the lift side
  
  void setup() {
    pinMode(mR1, OUTPUT);
    pinMode(mR2, OUTPUT);
    pinMode(mL1, OUTPUT);
    pinMode(mL2, OUTPUT);
    pinMode(enR, OUTPUT);
    pinMode(enL, OUTPUT);
    pinMode(s1, INPUT);
    pinMode(s2, INPUT);
    pinMode(s3, INPUT);
    pinMode(s4, INPUT);
    pinMode(s5, INPUT);
  }
  
  void loop() {
    digitalWrite(mR1, HIGH);
    digitalWrite(mR2, LOW);
    digitalWrite(mL1, HIGH);
    digitalWrite(mL2, LOW);
    if(s3==HIGH){
      analogWrite(enR, x);
      analogWrite(enL, x);
      }else if(s2==HIGH){//to turn right low
      analogWrite(enR, z);
      analogWrite(enL, x);
        }else if(s1==HIGH){//to turn right
      analogWrite(enR, y);
      analogWrite(enL, x);
        }else if(s4==HIGH){//to turn lift low
      analogWrite(enR, x);
      analogWrite(enL, z);
        }else if(s5==HIGH){//to turn lift
      analogWrite(enR, x);
      analogWrite(enL, y);
        }else{
      analogWrite(enR, x);
      analogWrite(enL, x);
          }
  }
