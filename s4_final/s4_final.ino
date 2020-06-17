int a=7;
int o4=6;
int g4=5;
int s4;



void setup()
{
  pinMode(a,INPUT);
  pinMode(o4,OUTPUT);
  pinMode(g4,INPUT);

  digitalWrite(g4,HIGH);
}

void loop()
{
  s4=digitalRead(a);
  if(s4==LOW)
  {
    digitalWrite(o4,HIGH);
    digitalWrite(g4,LOW);
  }

}

