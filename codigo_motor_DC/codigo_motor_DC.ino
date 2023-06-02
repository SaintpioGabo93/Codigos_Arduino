#include<AFMotor.h>

AF_DCMotor motor1(3); //Creamos el objeto motor1 que será del tipo DC
void setup() {
  motor1.setSpeed(255); //Se establece la velocidad del motor

}

void loop() {
  motor1.run(FORWARD); //Esta función inicia el motor y lo hace girar hacia adelante
  delay(500);
  motor1.run(BACKWARD);
  delay(500);

}
