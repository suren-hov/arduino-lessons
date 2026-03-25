struct Speaker {
  int pin;
};

struct Button {
  int pin;
};

Speaker speaker = {4};
Button button = {10};

bool lastButtonState = HIGH;

void setup() {
  pinMode(speaker.pin, OUTPUT);
  pinMode(button.pin, INPUT);
}

void loop() {
  bool currentState = digitalRead(button.pin);

  // Detect button press (HIGH -> LOW)
  if (lastButtonState == HIGH && currentState == LOW) {
    tone(speaker.pin, 500, 200); // beep 200ms
  }

  lastButtonState = currentState;
}