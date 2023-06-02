#include <AccelStepper.h>

const int stepPin = 2;
const int dirPin = 5; 

AccelStepper motor1(1, stepPin, dirPin); // (Tipo de driver: con dos pines, STEP, DIR)

///////////////////// COMUNICACION SERIAL ////////////////
String inputString = "";
bool stringComplete = false;
int posicion = 0; // pasos

unsigned long lastTime = 0;

void setup() {
  Serial.begin(9600);
  motor1.setMaxSpeed(600);
  motor1.setAcceleration(50);
  //motor1.setCurrentPosition(0);
}
void loop() {

  ////////// SI RECIBE DATOS /////////////
  if (stringComplete) 
  {
    posicion = inputString.toInt();
 
    inputString = "";
    stringComplete = false;
  }

   motor1.moveTo(posicion); // Definir el movimiento del motor hasta una posición en una referencia absoluta.
   motor1.run();
}

/////////////// RECEPCION DE DATOS /////////////////////
void serialEvent() {
  while (Serial.available()) {
    char inChar = (char)Serial.read();
    inputString += inChar;
    if (inChar == '\n') {
      stringComplete = true;
    }
  }
}
