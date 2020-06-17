int b=12;
int o4=11;
int g4=10;
int s4;



void setup()
{
  pinMode(b,INPUT);
  pinMode(o4,OUTPUT);
  pinMode(g4,INPUT);

  digitalWrite(g4,HIGH);
}

void loop()
{
  s4=digitalRead(b);
  if(s4==LOW)
  {
    digitalWrite(o4,HIGH);
    digitalWrite(g4,LOW);
  }

}

