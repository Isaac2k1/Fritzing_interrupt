/* This code demonstrates the use of the two pins (#2 & #3) which are available in the Arduino UNO as 
interrupt input pins. These pins are programmed for INPUT, pull-up resistor is enabled and finally they
are enabled for interrupt.
The code reads state of bouncing switches with absolutely no error, but using two interrupts. One for set and the other for reset.
*/  
  int led=LED_BUILTIN; // was 13;
  int pin1=2;
  int pin2=3;
  int value=0;
  int i=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("interrupt ON/OFF GND to Pin 2 & 3");
  Serial.println();

  pinMode(led, OUTPUT);
  pinMode(pin1, INPUT_PULLUP);
// digitalWrite(pin1, HIGH);
  pinMode(pin2, INPUT_PULLUP);
// digitalWrite(pin2, HIGH);
// command attachInterrupt( interrupt # , interrupt service routine name, type of slope of signal: [LOW/CHANGE/RISING/FALLING/(HIGH]
  attachInterrupt(0, ISR1, FALLING); 
  attachInterrupt(1, ISR2, FALLING); 
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  Serial.println(i);
}

void ISR1()
{
  digitalWrite(led,0);
  i++;
  }

void ISR2()
{
  digitalWrite(led,1);
  i++; 
  }


