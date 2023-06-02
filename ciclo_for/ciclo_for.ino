int i = 0;
void setup() {
  Serial.begin(9600);

}

void loop() {
  for(i = 0; i <= 100; i++)
  {
    Serial.println(i);
    delay(200);
    }
  

}
