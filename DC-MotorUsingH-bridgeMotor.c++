void setup()
{
  pinMode(12, OUTPUT); 
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);  
  
  digitalWrite(12, HIGH); 
}

void loop()
{
  digitalWrite(10, HIGH); // Run motor forward
  digitalWrite(8, LOW);

  delay(2000); 

  digitalWrite(10, LOW); // Run motor backward
  digitalWrite(8, HIGH);

  delay(2000); 
}
