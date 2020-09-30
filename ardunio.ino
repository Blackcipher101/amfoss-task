int x = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  x = 0.01723 * readUltrasonicDistance(5, 5);
  if (x < 100) {
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
  } else {
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
