void setup()
{
  for(int i=4;i<=7;i++)
  {
  pinMode(i, OUTPUT);
}
}

void loop()
{
  for(int i=4;i<=7;i++)
  {
  if(i!=7)
  {
  digitalWrite(i, HIGH);
  digitalWrite(i+1, HIGH);
  delay(200);
    {
    for(int i=4;i<=7;i++)
    {digitalWrite(i,LOW);
    }
    delay(200);
  }
 
  }
  else
  digitalWrite(i,HIGH);
   digitalWrite(i-3,HIGH);      
  delay(200);
    {
    for(int i=4;i<=7;i++)
    {digitalWrite(i,LOW);
    }
    delay(200);
  }
 
}
  {
    for(int i=4;i<=7;i++)
    {digitalWrite(i,LOW);
    }
    delay(200);
  }
 
}
