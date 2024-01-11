
#include <Servo.h>

Servo servo;

void setup()
{
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);
  servo.attach(9);
}

void loop()
{
  int angulo = map(analogRead(A0),0,1023,0,180);
  
  if(angulo >= 90){
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
  }else{
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
  }
  Serial.println(angulo);
  servo.write(angulo);
  delay(100); 
}