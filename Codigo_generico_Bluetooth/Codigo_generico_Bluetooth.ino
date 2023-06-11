char val;


void setup() {
  Serial.begin(9600);
  pinMode(leds,OUTPUT);

}

void loop() {
  
  while (Serial.avialable() > 0)
  {
    val =Serial.read();
    Serial.println(val);
    }
