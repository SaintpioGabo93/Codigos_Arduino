int led[] = {2,3,4,5,6,7,8,9,10,11};
void setup() {
  pinMode(led, OUTPUT);

}

void loop() {
  for(int i = 0;i <9;i++)
  {
   analogWrite(led[i],255);
   delay(100);
   analogWrite(led[i],0);
   }
  for(int i = 9;i >1;i--)
  {
   analogWrite(led[i],255);
   delay(100);
   analogWrite(led[i],0);
   }
}
