int ledpin[] = {12,11,10} ;
int i = 0 ;

void setup() {
  pinMode(ledpin, OUTPUT);

}

void loop() {
  for (i = 0 ; i <= 3 ; i++ )
  {
    digitalWrite(ledpin[i], HIGH);
    delay(500);
    digitalWrite(ledpin[i], LOW);
    delay(500);
    }
/*  digitalWrite(ledpin [0,1], HIGH);
  delay(1000);
  digitalWrite(ledpin [0,1], LOW);
  delay(500);
  digitalWrite(ledpin [0,2], HIGH);
  delay(1000);
  digitalWrite(ledpin [0,2], LOW);
  delay(500);
  digitalWrite(ledpin [1,2], HIGH);
  delay(1000);
  digitalWrite(ledpin [1,2], LOW);
  delay(500);   */
  
}
