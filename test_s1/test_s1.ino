int x;
void setup() {
  
 pinMode(12,INPUT);
 pinMode(11,OUTPUT);
 pinMode(10,OUTPUT);
 digitalWrite(10,HIGH);
  

}

void loop() {


 
  x=digitalRead(12);
 
  
  
  if(x==LOW)
  {
   
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    
  }
  

}
