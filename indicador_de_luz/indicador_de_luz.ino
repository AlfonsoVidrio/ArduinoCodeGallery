#include <Servo.h>

Servo servo;

const int led_verde = 2;
const int led_amarillo = 3;
const int led_rojo = 4;

void setup()
{
  servo.attach(5);
  
  pinMode(led_verde, OUTPUT);
  pinMode(led_amarillo, OUTPUT);
  pinMode(led_rojo, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  //Leds
  int sensor = analogRead(A0);
  Serial.println(sensor);
  
  if(sensor < 290)//Baja
  {
    digitalWrite(led_verde,HIGH);
    digitalWrite(led_amarillo,LOW);
    digitalWrite(led_rojo,LOW);
    
  servo.write(30);
  delay(10);
  }
  else if(sensor >= 290 and sensor <= 580){ //Normal
    digitalWrite(led_verde,LOW);
    digitalWrite(led_amarillo,HIGH);
    digitalWrite(led_rojo,LOW);
    
  servo.write(90);
  delay(10);
  }else{ // Cuidado
    digitalWrite(led_verde,LOW);
    digitalWrite(led_amarillo,LOW);
    digitalWrite(led_rojo,HIGH);   
    
  servo.write(150);
  delay(10);
  }

}