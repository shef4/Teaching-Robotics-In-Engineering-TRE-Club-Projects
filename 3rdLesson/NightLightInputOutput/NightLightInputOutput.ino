int sensor = A2;
int LED = 8;

void setup() 
{
  // put your setup code here, to run once:
  pinMode(sensor, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(sensor));
  if (analogRead(sensor) > 512)
  {
    digitalWrite(LED,HIGH);  
  }
  else
  {
    digitalWrite(LED,LOW);
  }
}
