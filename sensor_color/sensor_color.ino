const int s[] = {8,9,11,12};
const int salida = 10;
int pinled[] = {2,3,4}; // red=2, green=3, blue=4

void setup() {
  Serial.begin(9600);
  pinMode(s, OUTPUT);
  pinMode(salida,INPUT);
  pinMode(pinled, OUTPUT);
  digitalWrite(s[0],HIGH);
  digitalWrite(s[1],HIGH);

}

void loop() {
  //color()
  Serial.print("Intensidad Rojo: ");
  Serial.print(pinled[0],DEC);
  Serial.print("Intensidad Verde: ");
  Serial.print(pinled[1],DEC);
  Serial.print("Intensidad Azul: ");
  Serial.print(pinled[2],DEC);

  if(pinled[0] < pinled[2] && pinled[0] < pinled[1] && pinled[0] < 20)
  {
    Serial.print("- (Color Rojo)");
    digitalWrite(pinled[0],HIGH);
    digitalWrite(pinled[1],LOW);
    digitalWrite(pinled[2],LOW);
    }
  else if(pinled[2] < pinled[0] && pinled[2] < pinled[1] && pinled[2] < 20)
  {
    Serial.print("- (Color Azul)");
    digitalWrite(pinled[0],LOW);
    digitalWrite(pinled[1],LOW);
    digitalWrite(pinled[2],HIGH);
    }
  else if(pinled[1] < pinled[0] && pinled[1] < pinled[2] && pinled[1] < 20)
  {
    Serial.print("- (Color Verde)");
    digitalWrite(pinled[0],LOW);
    digitalWrite(pinled[1],HIGH);
    digitalWrite(pinled[2],LOW);
    }       
}
