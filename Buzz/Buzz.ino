 int wire = 2;
int led = 4;
int buzzer = 3;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(wire, INPUT);
  digitalWrite(led,LOW);
  digitalWrite(buzzer,LOW);
}

void loop() {

  int buttonState = digitalRead(wire);
  if(buttonState==1)
  {
    digitalWrite(led,HIGH);
    digitalWrite(buzzer,HIGH);
    delay(1000);
    digitalWrite(led,LOW);
    digitalWrite(buzzer,LOW);
  }

  Serial.println(buttonState);
         
}
