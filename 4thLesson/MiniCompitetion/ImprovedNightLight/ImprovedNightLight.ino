int sensor = A2;
int RLED = 7;
int WLED = 6;
int GLED = 5;
void setup() {
  // put your setup code here, to run once
  pinMode(sensor, INPUT);
  pinMode(RLED, OUTPUT);
  pinMode(WLED, OUTPUT);
  pinMode(GLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(sensor));
  if (analogRead(sensor) > 600)
  {
    digitalWrite(RLED,HIGH);  
    delay(500);
    digitalWrite(RLED,LOW);
  }
  else
  {
    digitalWrite(RLED,LOW);
  }
  
    if (300 < analogRead(sensor) && analogRead(sensor) < 400)
  {
    digitalWrite(WLED,HIGH);  
  }
  else
  {
    digitalWrite(WLED,LOW);
  }
  
      if (100 < analogRead(sensor) && analogRead(sensor) < 200)
  {
    digitalWrite(GLED,HIGH);  
  }
  else
  {
    digitalWrite(GLED,LOW);
  }
}
