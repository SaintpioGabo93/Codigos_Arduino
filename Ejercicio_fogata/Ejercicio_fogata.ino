#include <Random16.h>
Random16 rnd;
int pin[] = {2,3,4};
void setup() {
  pinMode(pin,OUTPUT);
  rnd.setSeed(12345);
}

void loop(){

  analogWrite(pin[1], 255);
  analogWrite(pin[0],rnd.get(50, 255));
  delay(rnd.get(0, 100));
  analogWrite(pin[2],rnd.get(100, 200));
  //delay(50);  
}
