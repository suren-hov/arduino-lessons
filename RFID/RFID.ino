#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 53
#define RST_PIN 9

MFRC522 mfrc522(SS_PIN, RST_PIN);

void setup() {
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();
  Serial.println("RFID started..");
}

void loop() {

  // checking
  if (!mfrc522.PICC_IsNewCardPresent()) {
    return;
  }

  // Reading
  if (!mfrc522.PICC_ReadCardSerial()) {
    return;
  }

  Serial.print("card ID: ");
  String code = "";

  for (byte i = 0; i < mfrc522.uid.size; i++) {
    code += mfrc522.uid.uidByte[i];
  }

  Serial.print(code);
  Serial.println();
  mfrc522.PICC_HaltA();
}