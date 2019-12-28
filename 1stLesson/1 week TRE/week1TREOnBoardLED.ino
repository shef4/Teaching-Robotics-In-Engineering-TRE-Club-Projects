int LED=13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//sets up serial monitor baud rate(9600 is the baud rate we are using)
  Serial.println("Whats good fam");
  pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED,HIGH);
  delay(50);//50 milliseconds
  digitalWrite(LED,LOW);
  delay(50);
}
