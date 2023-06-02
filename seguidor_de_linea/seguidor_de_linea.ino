
int pinled = 9;
int linea = 2;
int nivel = LOW;
int estado = 0;

void setup() {
  pinMode(pinled, OUTPUT);
  pinMode(linea, INPUT);

}

void loop() {
  estado = digitalRead(linea);
  
  if (estado == HIGH)
  {
    digitalWrite(pinled, HIGH);
    nivel = HIGH;
    }

  else
  {
    digitalWrite(pinled, LOW);
    nivel = LOW;
    } 

}
