int pin = 10;


void setup() {
  pinMode(pin, OUTPUT);

}

void loop() {
  
  for(int i = 0; i<=2; i++)
  {
    digitalWrite(pin,HIGH);
    delay(500);
    digitalWrite(pin,LOW);
    delay(100);    
    }
  for(int i = 0; i<3; i++)
  {
    digitalWrite(pin,HIGH);
    delay(1500);
    digitalWrite(pin,LOW);
    delay(100);    
    }
  for(int i = 0; i<=2; i++)
  {
    digitalWrite(pin,HIGH);
    delay(500);
    digitalWrite(pin,LOW);
    delay(100);    
    }
delay(1000);


}
