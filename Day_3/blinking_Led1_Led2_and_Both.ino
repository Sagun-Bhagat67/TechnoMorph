int ledPin1 = 12;
int ledPin2 = 11;

String mode, command, led;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  Serial.println("Usage: {mode},{led1/led2/both}");
}

void loop() {
  if (Serial.available()) {
    command = Serial.readStringUntil('\n');
    command.trim();
    command.toLowerCase();

    int comma = command.indexOf(',');
    if (comma != -1) {
      mode = command.substring(0, comma);
      mode.trim();
      led = command.substring(comma + 1);
      led.trim();
    }
  }

  if (mode == "blink") {
    if (led == "both") {
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
      delay(300);
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);
      delay(300);
      Serial.println("Blinking LED");
    } 
    else if (led == "led1") {
      digitalWrite(ledPin1, HIGH);
      delay(300);
      digitalWrite(ledPin1, LOW);
      delay(300);
      Serial.println("Led1 Blinking");
    }
  }
}


// int potPin = A0;
// int potValue = 0;
// void setup()
// {
//   Serial.begin(9600);
// }
// void loop()
// {
//   potValue = analogRead(potPin);
//   Serial.println(potValue);
// }
