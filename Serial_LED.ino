void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

char c;

void loop()
{
  while (Serial.available() > 0)
  {
    c = Serial.read();
  }
  
  delay(5);
  
  if (!Serial.available())
  {
    i = 1;
    if (c == '1')
      digitalWrite(13, HIGH);
    else if (c == '0')
      digitalWrite(13, LOW);
  }    
}
