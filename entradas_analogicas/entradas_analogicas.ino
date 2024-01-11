const int LED_VERDE = 2;
const int LED_ROJO = 3;

int lectura = 0;
void setup()
{
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_ROJO, OUTPUT);
}

void loop()
{
  lectura = analogRead(A0);
  
  if(lectura > 512)
  {
    digitalWrite(LED_VERDE, HIGH);
    digitalWrite(LED_ROJO, LOW);
  }
  else
  {
  	digitalWrite(LED_ROJO, HIGH);
    digitalWrite(LED_VERDE, LOW);
  }

}