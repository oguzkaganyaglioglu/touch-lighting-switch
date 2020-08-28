// This code created by Oğuz Kağan Yağlıoğlu
#pragma message "Touch Button version: 0.01 by Oğuz Kağan Yağlıoğlu"

bool relay = false;

void readSignalProx()
{
  relay = !relay;
}

void readSignalTouch()
{
  relay = !relay;
}

void setup()
{
  
  attachInterrupt(digitalPinToInterrupt(2), readSignalTouch, FALLING);
  //attachInterrupt(digitalPinToInterrupt(3), readSignalProx, FALLING);
  pinMode(7, OUTPUT);
}
void loop()
{
  digitalWrite(7, relay);
  delay(50);
}
