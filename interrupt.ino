  int led=13;
  int pin1=2;
  int pin2=3;
  int value=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(pin1, INPUT);
  digitalWrite(pin1, HIGH);
  pinMode(pin2, INPUT);
  digitalWrite(pin2, HIGH);
  attachInterrupt(0, ISR1, FALLING);  // interrupt number 0 is for DI2, IRS1 is the name of interrup service routine, LOW/CHANGE/RISING/FALLING/(HIGH)
  attachInterrupt(1, ISR2, FALLING);  // interrupt number 1 is for DI3, IRS2 is the name of interrup service routine, LOW/CHANGE/RISING/FALLING/(HIGH)
}

void loop() {
  // put your main code here, to run repeatedly:
  //value=!digitalRead(pin);
  //digitalWrite(led,value);
}

void ISR1()
{
  digitalWrite(led,1);
  //delay(1);
  //digitalWrite(led, !digitalRead(13)); 
  }

void ISR2()
{
  digitalWrite(led,0);
  //delay(1);
  //digitalWrite(led, !digitalRead(13)); 
  }


