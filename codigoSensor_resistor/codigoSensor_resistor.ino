void setup() {
  Serial.begin(9600);

}

void loop() {
  int datos = analogRead(A0);
  Serial.println(datos);
  delay(500);
}
