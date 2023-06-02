int pinLed[5] = {2,3,4,5,6};


void setup() {
 pinMode(pinLed,OUTPUT);

}

void loop() {
  int i = 2 ;
  while(i < 7);
  {
    digitalWrite(pinLed[i], HIGH);
    i++ ;
    }

}
