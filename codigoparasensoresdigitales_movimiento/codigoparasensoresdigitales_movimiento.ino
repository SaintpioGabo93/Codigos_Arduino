int ledpin = 12;
int pin_entrada_datos = 11;
int movimiento = LOW;
int estado = 0;

void setup() {
  pinMode(ledpin, OUTPUT);
  pinMode(pin_entrada_datos, INPUT);

}

void loop() {
  estado = digitalRead(pin_entrada_datos);
  
  if (estado == HIGH)
  {
    digitalWrite(ledpin,HIGH);
    movimiento = HIGH;
    
    }

   else
   {
    digitalWrite(ledpin,LOW);
    movimiento = LOW;
    } 

}
