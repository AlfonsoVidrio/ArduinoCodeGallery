const int ROJO = 12;
const int VERDE = 10;

unsigned long aux;
bool estado = false;

void setup()
{
  pinMode(ROJO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  
  aux = millis();
}

void loop()
{
  	if((millis()-aux) > 2000)
    {
      estado = !estado;
      digitalWrite(ROJO, estado ? HIGH : LOW);
      digitalWrite(VERDE, estado ? LOW : HIGH);
      aux = millis();
    }
}
