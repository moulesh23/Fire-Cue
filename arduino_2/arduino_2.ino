int c=13;
int m3=12;
int r3=11;
int g3=10;
int buzz3=9;

int d=8;
int m4=7;
int r4=6;
int g4=5;
int buzz4=4;

int s3,s4;
void setup()
{
  pinMode(c,INPUT);
  pinMode(d,INPUT);
    
  pinMode(r3,OUTPUT);
  pinMode(r4,OUTPUT);
  pinMode(g3,OUTPUT);
  pinMode(g4,OUTPUT);

  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT);

  digitalWrite(g3,HIGH);
  digitalWrite(g4,HIGH);
  digitalWrite(m3,LOW);
  digitalWrite(m4,LOW);
  digitalWrite(r3,LOW);
  digitalWrite(r4,LOW);
  digitalWrite(buzz3,LOW);
  digitalWrite(buzz4,LOW);
}

void loop()
{
  s3=digitalRead(c);
  s4=digitalRead(d);

  if(s3==HIGH)
  {
    digitalWrite(r3,HIGH);
    digitalWrite(g3,LOW);
    digitalWrite(m3,HIGH);
    digitalWrite(buzz3,HIGH);
  }

  if(s4==HIGH)
  {
    digitalWrite(r4,HIGH);
    digitalWrite(g4,LOW);
    digitalWrite(m4,HIGH);
    digitalWrite(buzz4,HIGH);
  }

  
}

