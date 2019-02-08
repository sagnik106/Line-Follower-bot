#define a 7
#define b 8
#define c 9
#define lm1 10
#define lm2 11
#define rm1 12
#define rm2 5
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(7,INPUT);
pinMode(9,INPUT);
pinMode(8,OUTPUT);
pinMode(lm1,OUTPUT);
pinMode(lm2,OUTPUT);
pinMode(rm1,OUTPUT);
pinMode(rm2,OUTPUT);
digitalWrite(b,HIGH);
}

void loop() {
  int i1=digitalRead(a);//left
  int i2=digitalRead(c);//right
  Serial.print(i1+i2);
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
  analogWrite(lm1,170);
  analogWrite(lm2,0);
  analogWrite(rm1,170);
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
