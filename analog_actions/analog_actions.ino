struct Analog {
  int pin;
  int IO;
};

Analog analogX = {pin: A0, IO: INPUT};
Analog analogY = {pin: A1, IO: INPUT};

void setup() {
  pinMode(analogX.pin, analogX.IO);
  pinMode(analogY.pin, analogY.IO);
  Serial.begin(9600);
}

void loop() {
  int x = analogRead(analogX.pin);
  int y = analogRead(analogY.pin);
  Serial.print("x: "), Serial.print(x), Serial.print(", y: "), Serial.println(y);
  delay(100);
}
