const int LED = 11;
const int PULSADOR = 12;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(PULSADOR, INPUT_PULLUP);
}

void loop()
{
  if(digitalRead(PULSADOR)== LOW)
  {
  	  digitalWrite(LED, HIGH);
  }else
  {
  	  digitalWrite(LED, LOW);
  }
  
}