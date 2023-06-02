int ledbrillante = 12;
int sensorinfrarojo = 11;
int movimiento = LOW;
int estado = 0;

void setup() {
  pinMode(ledbrillante, OUTPUT);
  pinMode(sensorinfrarojo, INPUT);

}

void loop() {
  estado = digitalRead(sensorinfrarojo);
  
  if (estado == HIGH)
  {
    digitalWrite(ledbrillante,HIGH);
    movimiento = HIGH;
    
    }

   else
   {
    digitalWrite(ledbrillante,LOW);
    movimiento = LOW;
    } 

}
