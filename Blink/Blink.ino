int led1 = 9;
int led2 = 10;
int led3 = 11;
int pin = 3;
int brightness1 = 0;
int brightness2 = 0;
int brightness3 = 0;
int fadeAmount = 1;


void setup() {
  // declare pin 9 to be an output:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}



void loop() {
  digitalRead(pin);

  if (pin == HIGH) {
      analogWrite(led1, brightness1);
      analogWrite(led2, brightness2);
      analogWrite(led3, brightness3);
      
    
      
      
      if (brightness1 < 254){
      brightness1 += fadeAmount;
      }
      if (brightness1 >= 100 && brightness2 <254) {
        brightness2 += fadeAmount;
      }
      if ((brightness1 >= 200) and (brightness3 < 254) ){
        brightness3 += fadeAmount;
      }
    
      if (brightness3 >= 253) {
         brightness1 = 0;
         brightness2 = 0;
         brightness3 = 0;
      }
  }
  delay(20);
}
