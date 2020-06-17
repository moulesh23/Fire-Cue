int a=A0;
int s1;

void setup()
{
  pinMode(a,INPUT);
  pinMode(8,OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  s1=analogRead(a);
  Serial.println(s1);
  delay(1000);
}


