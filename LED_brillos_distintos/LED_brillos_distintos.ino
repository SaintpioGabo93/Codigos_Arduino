int ledPin[] = {10,11,12} ;
byte brillo[] = {30,60,90,120,180,255};
byte intbrill = 240 ;
void setup() {
 pinMode(ledPin, OUTPUT);  
}

void loop() {
  
  for (int i = 0; i<= 7; i ++ ) /*Esto es para los índices del array de la variable brillo */ 
    {
      analogWrite(ledPin[0],intbrill);
      analogWrite(ledPin[1], brillo [i] );
      delay(1000);
      }
}
