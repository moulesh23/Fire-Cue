int a=12,s1;
int o1=11,g1=10;


void setup()
{
  pinMode(a,INPUT);
  pinMode(o1,OUTPUT);
  pinMode(g1,OUTPUT);
  digitalWrite(g1,HIGH);
  
}


void loop()
{
  s1=digitalRead(a);
  if(s1==LOW)
  {
    digitalWrite(o1,HIGH);
    digitalWrite(g1,LOW);
   
  }

}

