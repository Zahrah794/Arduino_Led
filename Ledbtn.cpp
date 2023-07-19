// Determine the pin numbers for the LED and button
#define LED_PIN 3
#define BUTTON_PIN 6

void setup() {
  // Put a pull-up resistor on the LED pin and the button pin to make the LED pin an output and the button pin an input
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  // You can check if the button is being pressed by checking if the pin is low on the button
  if (digitalRead(BUTTON_PIN) == LOW) {
    // Using the not operator, toggle the led pin between high and low
    digitalWrite(LED_PIN, !digitalRead(LED_PIN));

    // To debounce the button, add a short delay
    delay(200);
  }
}
