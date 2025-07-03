// Define pins
const int trigPin = 9;
const int echoPin = 10;

void setup() {
  Serial.begin(9600);        // Start serial communication
  pinMode(trigPin, OUTPUT);  // Set trig pin as output
  pinMode(echoPin, INPUT);   // Set echo pin as input
}

void loop() {
  long duration;
  float distance;

  // Clear the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Send a 10µs pulse to trigger
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read echo time
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance in cm (Speed of sound: 34300 cm/s)
  distance = duration * 0.0343 / 2;

  // Print to Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500); // Delay between measurements
}
