const int transistorPin = 4;

float time = 0;

void setup()
{
  pinMode(transistorPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  time = Serial.read();
  if(time > 0){
    digitalWrite(transistorPin, HIGH);
    delay(1000);
    digitalWrite(transistorPin, LOW);
    time = 0;
  }
}
