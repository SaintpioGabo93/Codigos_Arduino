int pin1 = 12;
int pin2 = 9;
void setup() {
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
}

void loop() {
  for (int brillo = 0; brillo < 255; brillo += 5)
  {
    digitalWrite(pin1,HIGH);
    analogWrite(pin2,brillo);
    delay(50);
    }
  for (int brillo = 255; brillo >=0; brillo -= 5)
  {
    digitalWrite(pin1, HIGH);
    analogWrite(pin2,brillo);
    delay(50);
    }

}
