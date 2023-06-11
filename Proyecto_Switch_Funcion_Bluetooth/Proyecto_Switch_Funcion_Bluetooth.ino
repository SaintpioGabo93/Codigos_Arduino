int led[] = {2,3,4,5,6,7,8,9,10,11};

char val;


void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);

}

void loop() {
  
  while (Serial.avialable() > 0)
  {
    val =Serial.read();
    Serial.println(val);
    }

  if (val == 'c')
  {
    for(int i = 0;i <9;i++) //Código para la ejecución del Chase Efect
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

  else if (val == 'n')
  {
    for(int i = 0;i <9;i++)
    {
      analogWrite(led[i],255);
      analogWrite(led[i+1],255);
      analogWrite(led[i+2],255);
      delay(100);
      analogWrite(led[i],0);
      analogWrite(led[i+1],0);
      analogWrite(led[i+2],0);
      }
    for(int i = 9;i >1;i--)
    {
      analogWrite(led[i],255);
      analogWrite(led[i],255);
      analogWrite(led[i],255);
      delay(100);
      analogWrite(led[i],0);
      analogWrite(led[i+1],0);
      analogWrite(led[i+2],0);
      }
   }

  else if (val == 'a')
  {
    for (int i = 0;i <9;i++)
    {
      digitalWrite(led[i],LOW);
     }
   }

}