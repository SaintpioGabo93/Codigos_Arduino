char* mistring[] = {"string1","string2","string3","string4"};

void setup() {
  Serial.begin(9600);

}

void loop() {
  for(int i = 0; i <= 4 ; i++)
  {
    Serial.println(mistring[i]);
    delay(500);
    }
 
}
