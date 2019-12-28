//direction pins
int IN1=6;//ENB
int IN2=7;//ENB
int IN3=3;//ENA
int IN4=4;//ENA


//pin assignment for tge ena pins (amount of power to wheel)
int ENA= A5;//right motor
int ENB= A0;//left motor

int delaying = 4000; //4sec
void setup() {
  // put your setup code here, to run once:
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);

//supply "power" to the motor at a certain value
  analogWrite(ENA,205); //0-255
  analogWrite(ENB,145);
}

void Forward(int delaying)
{ //move the robot forward
  // 1 0 = HIGH LOW = forward
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);

  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);

  delay(delaying);
}

void Backward(int delaying)
{ //move the robot forward
  // 0 1 = LOW HIGH = backward
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);

  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);

  delay(delaying);
}

void Stop(int delaying)
{ //move the robot forward
  // 0 0 = LOW LOW = 1 1 = HIGH HIGH = Stop
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);

  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);

  delay(delaying);
}

void loop() 
{
  // put your main code here, to run repeatedly:
}
