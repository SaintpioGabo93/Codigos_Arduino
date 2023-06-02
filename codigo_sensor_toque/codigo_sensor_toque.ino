int led = 12;
int sensdig = 10;
int tocar = LOW;
int estado = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(sensdig, INPUT);

}

void loop() {
  estado = digitalRead(sensdig);
  if (estado == HIGH)
  {
    digitalWrite(led, HIGH);
    tocar = HIGH; 
    }
  else (estado == LOW)
  {
    digitalWrite(led, LOW);
    tocar = LOW;
    }
}
