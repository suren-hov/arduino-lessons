struct LED {
  int pin;
  int IO;
};

struct BUTTON {
  int pin;
  int IO;
};

LED blue = {pin: 13, IO: OUTPUT};
LED red = {pin: 8, IO: OUTPUT};
BUTTON button = {pin: 10, IO: INPUT};

void setup()
{
  pinMode(blue.pin, blue.IO);
  pinMode(red.pin, red.IO);
  pinMode(button.pin, button.IO);
  
  digitalWrite(blue.pin, LOW);
  digitalWrite(red.pin, HIGH);
};

void loop()
{
  if (digitalRead(button.pin) == HIGH) {
    delay(200);
    digitalWrite(blue.pin, !digitalRead(blue.pin));
    digitalWrite(red.pin, !digitalRead(red.pin));
  };
};