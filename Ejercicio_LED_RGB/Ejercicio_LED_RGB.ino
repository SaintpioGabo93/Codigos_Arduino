int r = 12 ;
int b = 11 ;
int g = 10 ;

void setup() {
  // put your setup code here, to run once:
  pinMode(r, OUTPUT) ;
  pinMode(b, OUTPUT) ;
  pinMode(g, OUTPUT) ;
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(r, HIGH);
delay(500);

digitalWrite(r, LOW);
delay(500);
    
digitalWrite(b, HIGH);
delay(500);
    
digitalWrite(b, LOW);
delay(500);
    
digitalWrite(g, HIGH);
delay(500);
    
digitalWrite(g, LOW);
delay(500);
    
digitalWrite(g, HIGH);
digitalWrite(b, HIGH);
digitalWrite(r, LOW);
delay(800);
  
digitalWrite(g, LOW);
digitalWrite(b, LOW);
digitalWrite(r, LOW);
delay(500);

digitalWrite(g, LOW);
digitalWrite(b, HIGH);
digitalWrite(r, HIGH);
delay(800);

digitalWrite(g, LOW);
digitalWrite(b, LOW);
digitalWrite(r, LOW);
delay(500);

digitalWrite(g, HIGH);
digitalWrite(b, LOW);
digitalWrite(r, HIGH);
delay(800);

digitalWrite(g, LOW);
digitalWrite(b, LOW);
digitalWrite(r, LOW);
delay(500);

digitalWrite(g, HIGH);
digitalWrite(b, HIGH);
digitalWrite(r, HIGH);
delay(800);

digitalWrite(g, LOW);
digitalWrite(b, LOW);
digitalWrite(r, LOW);
delay(500);
}
