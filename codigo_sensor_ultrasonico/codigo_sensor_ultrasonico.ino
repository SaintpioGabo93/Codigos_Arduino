const int trigPin = 13; //Manda el pulso que va a leer el echo para estimar la distancia
const int echoPin = 12; /*Estima la distancia entre el punto en el que rebotó el sonido y el echo
*/
int ledPin = 11;

long duracion;
int distancia;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);

}

void loop() {
/////////////////////// Código para activar el sensor ///////////////////  
  // Limpia el trigPin
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  // Establece el trigPin en estado HIGH durante 10 microsegundos
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  // Lee el echoPin, devuelve el tiempo de viaje de la onda de sonido en microsegundos
  duracion = pulseIn(echoPin, HIGH);
  // Calcula la distancia
  // Velocidad del sonido 340m/sm, 34cm/ms
  // Distance = (Speed x Time) / 2 = (34cm/ms x 1.5ms) / 2 = 25.5cm.
  distancia = duracion*0.034/2;


  if (distancia < 15)
  {
    digitalWrite(ledPin,HIGH);
    }

  else
  {
    digitalWrite(ledPin,LOW);
    }
Serial.print("Distance: ");
Serial.println(distancia);
}

  /*La función pulseIn(): Lee un pulso (ya sea HIGH o LOW) en un pin. Por ejemplo, si el valor
  es HIGH, pulseIn() espera a que el pin pase de LOW a HIGH, comienza
  a cronometrar, luego espera a que el pin pase a LOW y detiene el
  cronometraje. Devuelve la longitud del pulso en microsegundos o se
  da por vencido y devuelve 0 si no se recibió ningún pulso completo
  dentro del tiempo de espera.
  
  El tiempo de esta función ha sido determinado empíricamente y
  probablemente mostrará errores en pulsos más largos. Funciona con
  pulsos de 10 microsegundos a 3 minutos de duración.
  
  Syntax
  pulseIn(pin, value)
  pulseIn(pin, value, timeout)
  */
