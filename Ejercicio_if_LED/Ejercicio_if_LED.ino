int leds[] = {12,11,10};
int x = 4 ;
int y = 5 ;
int z = 9 ;

void setup() {
  pinMode(leds,OUTPUT);

}

void loop() {
 int a = x + y ;
 if (a == z)
 {
  digitalWrite(leds[0], HIGH);
  delay(500);
  digitalWrite(leds[0], LOW);
  delay(500);
  }
 if (a - y == x)

  {
    digitalWrite(leds[1],HIGH);
    delay(500);
    digitalWrite(leds[1],LOW);
    delay(500);    
    }

 if (a - x == y)

  {
    digitalWrite(leds[2],HIGH);
    delay(500);
    digitalWrite(leds[2],LOW);
    delay(500);    
    }  

  if (a+1 != z) 
  {
      analogWrite(leds[0], 250);
      analogWrite(leds[1], 250);
      analogWrite(leds[2], 150);            
      delay(1000);
      analogWrite(leds[0], 0);
      analogWrite(leds[1], 0);
      analogWrite(leds[2], 0);   
      delay(500);       
  }
}
