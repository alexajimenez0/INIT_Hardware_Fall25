// Define LED pins
const int redLed = 11;     // Red LED pin
const int yellowLed = 9; // Yellow LED pin (PWM capable)
const int greenLed = 10;  // Green LED pin

void setup() {
  // TODO: Set all LED pins as OUTPUT
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop() {
  // TODO: Turn Green LED ON for 4 seconds (ensure Red and Yellow are OFF)
  digitalWrite(greenLed, HIGH);
  digitalWrite(yellowLed, LOW);
  digitalWrite(redLed, LOW);
  delay(4000);  // Example: Wait for 4 seconds

  // TODO: Blink Green LED for 1 second (e.g., 5 cycles of 200ms each)
  for (int i = 0; i < 5; i++) {
  //   // Turn off Green LED for 100ms
  //   // Turn on Green LED for 100ms
  digitalWrite(greenLed, LOW);
  delay(100);
  digitalWrite(greenLed, HIGH);
  delay(100);    
   }


  // TODO: Transition: Fade Yellow LED IN using PWM
  for (int brightness = 0; brightness <= 255; brightness++) {
  //   
  //   // delay for smooth transition (e.g., delay(10));
  analogWrite(yellowLed,brightness);
  delay(10);
  }
  
  // TODO: Transition: Fade Yellow LED OUT using PWM
  for (int brightness = 255; brightness >= 0; brightness--) {
  analogWrite(yellowLed,brightness);
  delay(10);
  //   // delay for smooth transition (e.g., delay(10));
  }

  // TODO: Turn Red LED ON for 5 seconds (ensure Green and Yellow are OFF)
  digitalWrite(redLed,HIGH);
  digitalWrite(greenLed, LOW);
  digitalWrite(yellowLed,LOW);
  delay(5000);  // Example: Wait for 5 seconds

  // TODO: Intermediate state: Turn Red and Yellow ON together for 2 seconds
  digitalWrite(yellowLed, HIGH);
  delay(2000);  // Example: Wait for 2 seconds

  // TODO: Repeat the cycle
}

