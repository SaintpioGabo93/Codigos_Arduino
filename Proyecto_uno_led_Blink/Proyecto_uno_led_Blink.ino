int led1 = 3;

void setup() {
  // put your setup code here, to run once:
pinMode(led1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led1, HIGH); //Comentario con doble slash
delay(500);               /*Comentario para parrafos completos*/
digitalWrite(led1, LOW);
delay(500);
}
