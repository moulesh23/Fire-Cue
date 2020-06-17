int a=12;
int o3=11;
int g3=10;
int s3;

int b=7;
int o4=6;
int g4=5;
int s4;

void setup()
{
  pinMode(a,INPUT);
  pinMode(o3,OUTPUT);
  pinMode(g3,INPUT);

  digitalWrite(g3,HIGH);

  pinMode(b,INPUT);
  pinMode(o4,OUTPUT);
  pinMode(g4,INPUT);

  digitalWrite(g4,HIGH);
}

void loop()
{
  s3=digitalRead(a);
  if(s3==LOW)
  {
    digitalWrite(o3,HIGH);
    digitalWrite(g3,LOW);
    
  }

  s4=digitalRead(a);
  
  if(s4==LOW)
  {
    digitalWrite(o4,HIGH);
    digitalWrite(g4,LOW);
    digitalWrite(03,LOW);
  } 

}

