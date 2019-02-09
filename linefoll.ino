#define a 7//IR module out
#define b 8//+5 V Vcc output
#define c 9//IR module out
#define lm1 10//left motor1
#define lm2 11//left motor2
#define rm1 12//right motor1
#define rm2 5//right motor2
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(a,INPUT);
pinMode(c,INPUT);
pinMode(b,OUTPUT);
pinMode(lm1,OUTPUT);
pinMode(lm2,OUTPUT);
pinMode(rm1,OUTPUT);
pinMode(rm2,OUTPUT);
digitalWrite(b,HIGH);
}

void loop() {
  int i1=digitalRead(a);//left
  int i2=digitalRead(c);//right
  if(i1==0 && i2==0)
  {
    fwd();Serial.println("fwd");
  }
  else if(i1==1 && i2==0)
  {
    lft();Serial.println("lft");
  }
  else if(i1==0 && i2==1)
  {
    rit();Serial.println("rit");
  }
  else if(i1==1 && i2==1)
  {
    stp();Serial.println("stp");
  }
}
void fwd()
{
  analogWrite(lm1,160);
  analogWrite(lm2,0);
  analogWrite(rm1,140);
  analogWrite(rm2,0);
}
void lft()
{
  digitalWrite(lm1,LOW);
  digitalWrite(lm2,HIGH);
  digitalWrite(rm1,HIGH);
  digitalWrite(rm2,LOW);
}
void rit()
{
  digitalWrite(lm1,HIGH);
  digitalWrite(lm2,LOW);
  digitalWrite(rm1,LOW);
  digitalWrite(rm2,HIGH);
}
void stp()
{
  digitalWrite(lm1,LOW);
  digitalWrite(lm2,LOW);
  digitalWrite(rm1,LOW);
  digitalWrite(rm2,LOW);
}
