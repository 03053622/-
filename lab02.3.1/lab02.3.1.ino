const byte startPin = 8;
const byte endPin = 17;
void setup() 
{
for (byte i = startPin; i<= endPin; i++) 
{
pinMode(i, OUTPUT);
}
}
void loop()
{
byte i;
byte lightPin = startPin;
  for (i=startPin; i<= endPin; i++)
  {
   digitalWrite(i,HIGH);
  }
  delay(200);
  for (i=startPin; i<= endPin; i++)
  {
   digitalWrite(i,LOW);
  }
  delay(200);
  for (i=startPin; i<= endPin; i++)
  {
   digitalWrite(i,HIGH);
  }
  delay(200);
  for (i=startPin; i<= endPin; i++)
  {
   digitalWrite(i,LOW);
  }
  delay(200);
  for (i=endPin; i>=startPin; i--) 
  {
     digitalWrite(i,HIGH);
     delay (200);
    digitalWrite(i,LOW);
  }

  for (i=startPin; i<= endPin; i++)
  {
   digitalWrite(i,HIGH);
  }
  delay(200);
  for (i=startPin; i<= endPin; i++)
  {
   digitalWrite(i,LOW);
  }
  delay(200);
  for (i=startPin; i<= endPin; i++)
  {
   digitalWrite(i,HIGH);
  }
  delay(200);
   for (i=startPin; i<= endPin; i++)
  {
   digitalWrite(i,LOW);
  }
  delay(200);
  for (i=startPin; i<= endPin; i++) 
  {
     digitalWrite(i,HIGH);
     delay (200);
     digitalWrite(i,LOW);
  }
}
