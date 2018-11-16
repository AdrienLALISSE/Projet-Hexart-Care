void setup() {  // put your setup code here, to run once:
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);  

}

void loop() { // put your main code here, to run repeatedly:


int x;
x=200;


digitalWrite(1,LOW);
digitalWrite(3,LOW);
digitalWrite(8,LOW);
digitalWrite(7,LOW);
digitalWrite(4,LOW);
digitalWrite(6,LOW);
digitalWrite(10,LOW);
digitalWrite(2,HIGH);
digitalWrite(5,HIGH);
digitalWrite(9,HIGH);
  delay(x);

digitalWrite(1,LOW);
digitalWrite(2,LOW);
digitalWrite(8,LOW);
digitalWrite(7,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(9,LOW);
digitalWrite(3,HIGH);
digitalWrite(6,HIGH);
digitalWrite(10,HIGH);
  delay(x);

digitalWrite(3,LOW);
digitalWrite(2,LOW);
digitalWrite(8,LOW);
digitalWrite(6,LOW);
digitalWrite(10,LOW);
digitalWrite(5,LOW);
digitalWrite(9,LOW);
digitalWrite(4,HIGH);
digitalWrite(7,HIGH);
digitalWrite(1,HIGH);
  delay(x);


 }
