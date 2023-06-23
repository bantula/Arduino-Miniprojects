int ledPin1 = 12;
int ledPin2 = 8;
int buttonPin = 2;
int buttonState = 0;

void setup()
{
  pinMode(ledPin1, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH){
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin1, LOW);
  }else{
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin1, HIGH);
  }
}
