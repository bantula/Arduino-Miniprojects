const int trigPin = 9;
const int echoPin = 10;
const int trigPin2 = 6;
const int echoPin2 = 11;
// defines variables
long duration;
long duration2;
int distance;
int distance2;
void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  Serial.begin(9600); // Starts the serial communication
}
void loop() {
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  digitalWrite(trigPin2, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  duration2 = pulseIn(echoPin2, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
  distance2 = duration2 * 0.034 / 2;
  // Prints the distance on the Serial Monitor
  Serial.println("Distance: ");
  Serial.println(distance);
  Serial.println("Distance2: ");
  Serial.println(distance2);
}
