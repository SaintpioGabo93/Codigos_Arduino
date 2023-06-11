int leds [] = {5,6,7,8};
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

  if (val == 'a')
    {
      digitalWrite(leds[0],HIGH);
      }

  else if (val == 'b')
    {
      digitalWrite(leds[0],LOW);
      }

  else if (val == 'c')
    {
      digitalWrite(leds[1],HIGH);
      }

  else if (val == 'd')
    {
      digitalWrite(leds[1],LOW);
      }

  else if (val == 'e')
    {
      digitalWrite(leds[2],HIGH);
      }

  else if (val == 'f')
    {
      digitalWrite(leds[2],LOW);
      }

  else if (val == 'g')
    {
      digitalWrite(leds[3],HIGH);
      }
  
  else if (val == 'h')
    {
      digitalWrite(leds[3],LOW);
      }

      
}
