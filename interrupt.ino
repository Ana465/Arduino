int interrupcaoB1 = 0;
int buzzer = 4;


void setup() 
{
  Serial.begin(9600);
  attachInterrupt(interrupcaoB1,frequencia, RISING);
  pinMode(buzzer, OUTPUT);
  
  
}

void loop() 
{
  while(true)
 {
  Serial.print(".");
  delay(250);
 }
 noTone(buzzer);

}


void frequencia()
{
  tone(buzzer, 1000);
  Serial.print("+");
  
}

