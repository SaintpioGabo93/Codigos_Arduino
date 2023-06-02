int LED[]= {12,11,10};//r = 12, y = 11, g = 10
void setup() {
  pinMode(LED,OUTPUT);

}

void loop() {
  for(int i = 0; i<3;i++)
  {
    analogWrite(LED[i],255);
    analogWrite(LED[i],0);
    }

digitalWrite(LED[0],HIGH);
delay(3000);
digitalWrite(LED[1],HIGH);
digitalWrite(LED[0],LOW);
delay(500);
digitalWrite(LED[1],LOW);
digitalWrite(LED[2],HIGH);
delay(3000);

}
