int x,y,z;

void setup()
{
  
  pinMode( 8,OUTPUT);
  pinMode( 9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  x = analogRead(0);
  y = analogRead(1);
  z = analogRead(2);
  Serial.println("aaa");
  delay(1000);
}
