#include <MQUnifiedsensor.h>

int MQ2;

void setup()
{
  Serial.begin(9600);

}


void loop()
{
  MQ2 = (int)analogRead(A0);
  Serial.println(MQ2);

}