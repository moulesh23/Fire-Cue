int r8=12,left=13;
int x=0,y=0;

void setup()
{
 pinMode(7,INPUT);
 pinMode(8,INPUT);
 pinMode(r8,OUTPUT);
 pinMode(left,OUTPUT);
 
}

void loop()
{
  x=digitalRead(7);
  y=digitalRead(8);
 
  if(x==HIGH)
  {
    digitalWrite(r8,HIGH);
  }
  else
  {
    digitalWrite(r8,LOW);
  }
  if(y==HIGH)
  {
    digitalWrite(left,HIGH);
  }
  else
  {
    digitalWrite(left,LOW);
  }
}
