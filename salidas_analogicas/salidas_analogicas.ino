
const int LED = 3;
const int potenciometro = A0; 

// Variables para almacenar la lectura del potenciómetro 
int lectura;
int convertido;

void setup()
{

}

void loop()
{
  // Leemos el valor del potenciómetro
  lectura = analogRead(potenciometro);
  
  // Convertimos el valor leído (que estará entre 0 y 1023) a un rango de 0 a 255
  // Se utiliza el número 255 porque la función analogWrite() acepta valores de 0 a 255
  // Donde 0 significa que el LED está apagado y 255 significa que el LED está en su brillo máximo
  convertido = map(lectura, 0, 1023, 0, 255);
  

  // Esto cambiará el brillo del LED dependiendo de la posición del potenciómetro
  analogWrite(LED, convertido);
}