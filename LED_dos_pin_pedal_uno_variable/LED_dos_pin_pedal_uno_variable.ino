int ledPin[] = {9,10,11} ;
byte brillo[] = {15,30,45,60,75,90,105,120,135,180,255};
byte intbrill = 200 ;
void setup() {
 pinMode(ledPin, OUTPUT);  
}

void loop() {
  
  for (int i = 0; i<= 7; i ++ ) /*Esto es para los índices del array de la variable brillo [] */ 
    {
      analogWrite(ledPin[0],intbrill);
      analogWrite(ledPin[1],intbrill);
      analogWrite(ledPin[2], brillo [i] ); /*Es importante que los pines que vayan a variar la luz estén en Pulse With Modulation (PWM) */
      delay(500);
      }
}
