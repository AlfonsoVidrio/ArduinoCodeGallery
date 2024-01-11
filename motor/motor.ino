bool estado = 0;

void setup()
{
   pinMode(13, OUTPUT);
   pinMode(12, INPUT_PULLUP);
   pinMode(11, INPUT_PULLUP);
}

void loop()
{
  int lecturaCarga = digitalRead(12);
  int lecturaLlegada = digitalRead(11);
  
  //si lecturaCarga es igual a LOW,valor de estado = 1
  if(lecturaCarga == LOW)

  {
    delay(500);    
    estado = 1;
  }
  //si lecturaLlegada es igual a LOW, valor de estado = 0
  if(lecturaLlegada == LOW)
  {
    delay(500);
    estado = 0;
  }
  
  //si estado es igual a 0, apaga el motor
  if(estado == 0)
  {
    digitalWrite(13, LOW);
   //si estado es igual a 1, enciende el motor
  }else{
    digitalWrite(13, HIGH);
  }
    
}