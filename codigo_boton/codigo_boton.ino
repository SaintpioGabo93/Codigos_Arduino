int led = 10;
int botonPin = 8;
int boton = LOW;
int estadoboton = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(botonPin, INPUT);

}

void loop() {
  estadoboton = digitalRead(botonPin);
  if (estadoboton == HIGH)
  {
    digitalWrite(led, HIGH);
    boton=HIGH;
    }
  if (estadoboton == LOW)
  {
    digitalWrite(led, LOW);
    boton=LOW;
    }    

}
