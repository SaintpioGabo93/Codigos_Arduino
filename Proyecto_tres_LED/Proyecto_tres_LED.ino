int amy = 5;
int ron = 4;
int lol = 3;

void setup() {
  // put your setup code here, to run once:
pinMode(amy, OUTPUT);
pinMode(ron, OUTPUT);
pinMode(lol, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(amy, HIGH);
digitalWrite(ron, HIGH);
digitalWrite(lol, HIGH);
delay(500);
digitalWrite(amy, LOW);
digitalWrite(ron, LOW);
digitalWrite(lol, LOW);
delay(500);
digitalWrite(amy, HIGH);
delay(500);
digitalWrite(amy, LOW);
delay(500);
digitalWrite(ron, HIGH);
delay(500);
digitalWrite(ron, LOW);
delay(500);
digitalWrite(lol, HIGH);
delay(500);
digitalWrite(lol, LOW);
delay(500);
}
