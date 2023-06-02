int led[] = {12,11,10}; 


void setup() {
 pinMode(led, OUTPUT);

}

void loop() {

  for(int i = 0; i<=10;i++)
  {
    digitalWrite(led[2],HIGH);
    digitalWrite(led[1],HIGH);
    delay(100);
    digitalWrite(led[2],LOW);
    digitalWrite(led[1],LOW);
    delay(100);
  }

  for(int i = 0; i<=10;i++)
  {
    digitalWrite(led[2],HIGH);
    digitalWrite(led[0],HIGH);
    delay(100);
    digitalWrite(led[2],LOW);
    digitalWrite(led[0],LOW);
    delay(100); 
  }

  for(int i = 0; i<=10;i++)
  {
    digitalWrite(led[2],HIGH);
    digitalWrite(led[1],HIGH);
    digitalWrite(led[0],HIGH);    
    delay(100);
    digitalWrite(led[2],LOW);
    digitalWrite(led[1],LOW);
    digitalWrite(led[0],LOW);    
    delay(100);
  }                     
  delay(500);
}
