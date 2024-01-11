void setup()
{
	Serial.begin(9600);
}

void loop()
{
  //Distancia = Velocidad * Tiempo
  long distancia =  readUltrasonicDistance(2, 3);
  delay(10); 
  
  Serial.print("Distancia: ");
  Serial.println(distancia);
}

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT); 
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);

  return 0.01723 * pulseIn(echoPin, HIGH);
}