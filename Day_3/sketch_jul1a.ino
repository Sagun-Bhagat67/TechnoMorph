// int ledPin1 = 12;
// int ledPin2 = 11;

// String mode, command, led;

// void setup() {
//   Serial.begin(9600);
//   pinMode(ledPin1, OUTPUT);
//   pinMode(ledPin2, OUTPUT);
//   Serial.println("SAGUN");
// }

// void loop() {
//   if (Serial.available()) {
//     command = Serial.readStringUntil('\n');
//     command.trim();
//     command.toLowerCase();

//     int comma = command.indexOf(',');
//     if (comma != -1) {
//       mode = command.substring(0, comma);
//       mode.trim();
//       led = command.substring(comma + 1);
//       led.trim();
//     }
//   }

//   if (mode == "blink") {
//     if (led == "both") {
//       digitalWrite(ledPin1, HIGH);
//       delay(500);
//       digitalWrite(ledPin1, LOW);
//       delay(200);
//       digitalWrite(ledPin2, HIGH);
//       delay(800);
//       digitalWrite(ledPin2, LOW);
//       delay(1000);
//       Serial.println("Blinking LED");
//     } 
//     else if (led == "led1") {
//       digitalWrite(ledPin1, HIGH);
//       delay(300);
//       digitalWrite(ledPin1, LOW);
//       delay(300);
//       Serial.println("Led1 Blinking");
//     }
//      else if (led == "led2") {
//       digitalWrite(ledPin2, HIGH);
//       delay(300);
//       digitalWrite(ledPin2, LOW);
//       delay(300);
//       Serial.println("Led2 Blinking");
//     }
//   }
// }

int potPin = A0;
int potValue = 0;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  potValue = analogRead(potPin);
  Serial.println(potValue);
}
