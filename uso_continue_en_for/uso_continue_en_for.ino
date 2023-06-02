int ledPin = 9;

void setup() {
  digitalWrite(ledPin, OUTPUT);
}

void loop() {
  for (int fade = 0 ; fade <= 255 ; fade += 5)
  {
    if (fade > 40 && fade < 120)
    {
      continue;
    }
    analogWrite(ledPin, fade);
    delay(30);
  }
  for (int fade = 255 ; fade >= 0 ; fade -= 5)
  {
    analogWrite(ledPin, fade);
    delay(30);
  }

}
