const int led = 13;

void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int analogico = analogRead(A0);
  Serial.println(analogico);
//si hay luz
  if(analogico > 500){
    //Apagamos el led
  	digitalWrite(led,LOW);
  }else{
    //Si no hay luz encendemos el led
  	digitalWrite(led,HIGH);
  }
    
}