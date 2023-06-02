#include <AccelStepper.h>
// X - q1
// Y - q2
// Z - z
//////////////////////////////// ESLABON 1 ////////////////////////////
const int J1stepPin = 2;
const int J1dirPin = 5;
int J1Position = 0;

AccelStepper J1Motor(1, J1stepPin, J1dirPin); // (Tipo de driver: con 2 pines, STEP, DIR)

//////////////////////////////// ESLABON 2 ////////////////////////////
const int J2stepPin = 3;
const int J2dirPin = 6;
int J2Position = 0;

AccelStepper J2Motor(1, J2stepPin, J2dirPin); // (Tipo de driver: con 2 pines, STEP, DIR)

//////////////////////////// Z /////////////////////////////////////
const int zstepPin = 4;
const int zdirPin = 7;
int zPosition = 0;

AccelStepper zMotor(1, zstepPin, zdirPin); // (Tipo de driver: con 2 pines, STEP, DIR)

///////////////////// COMUNICACION SERIAL ////////////////
String inputString = "";
bool stringComplete = false;
const char separator = ',';
const int dataLength = 3;
int datos[dataLength];

unsigned long lastTime = 0, sampleTime =100;

void setup() {

   Serial.begin(9600);
  
   J1Motor.setMaxSpeed(1000);
   J1Motor.setAcceleration(500);
   J1Motor.setCurrentPosition(0);

   J2Motor.setMaxSpeed(1000);
   J2Motor.setAcceleration(500);
   J2Motor.setCurrentPosition(0);

   zMotor.setMaxSpeed(1000);
   zMotor.setAcceleration(500);
   zMotor.setCurrentPosition(0);

}

void loop() {
  
  ////////// SI RECIBE DATOS /////////////
  if (stringComplete) 
  {
    for (int i = 0; i < dataLength ; i++)
    {
      int index = inputString.indexOf(separator);
      datos[i] = inputString.substring(0, index).toFloat();
      inputString = inputString.substring(index + 1);
     }
       J1Position = datos[0];
       J2Position = datos[1];
       zPosition = datos[2];
       
       J1Motor.moveTo(J1Position); // cuántos pasos debe moverse
       J2Motor.moveTo(J2Position); // cuántos pasos debe moverse
       zMotor.moveTo(zPosition); // cuántos pasos debe moverse 
  
  

     inputString = "";
     stringComplete = false;
  }
  

  while (J1Motor.currentPosition() != J1Position || J2Motor.currentPosition() != J2Position  || zMotor.currentPosition() != zPosition)
  {
    J1Motor.run();
    J2Motor.run();
    zMotor.run();
  }

  

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
