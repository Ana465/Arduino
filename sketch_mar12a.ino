bint GRE = 8;
int RED = 10;
int YEL = 9;
int TRIG = 4;
int ECHO = 5;
int tempo = 0;
int x = 0;

void setup() {
 
   pinMode (GRE, OUTPUT);
   pinMode (RED, OUTPUT);
   pinMode (YEL, OUTPUT);
   pinMode (TRIG, OUTPUT);
   pinMode (ECHO, INPUT);
   
}
  
void loop()
{
  Serial.begin(9600);
  digitalWrite (TRIG, LOW);
  delayMicroseconds (10);
  digitalWrite (TRIG, HIGH);
  delayMicroseconds (40);
  tempo = pulseIn (ECHO, HIGH);
  x = tempo/29.4/2;
  Serial.println(x);
}  
  

