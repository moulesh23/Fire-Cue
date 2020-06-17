int s1=7;
void setup()
{
  pinMode(8,OUTPUT);
  pinMode(7,INPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  digitalWrite(8,HIGH);
  
}
void loop()
{
  int x;
  x=digitalRead(s1);
  if(x==LOW)
  {
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    
  }
}

