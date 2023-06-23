#include <Servo.h>
Servo Servo1;

const int servo1Pin = 3; 
    
void setup()
{
  Servo1.attach(servo1Pin);
}

void loop()
{
  Servo1.write(0);
  delay(1000);
  
  Servo1.write(90);
  delay(1000);
  
  Servo1.write(180);
  delay(1000);
  
  Servo1.write(90);
  delay(1000);
}
