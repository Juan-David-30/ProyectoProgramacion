#include <SoftwareSerial.h>

int pinTX = 2;
int pinRX = 3; 

SoftwareSerial bluetooth(pinTX, pinRX);


void setup() {

  // Iniciando comunicación con el módulo
  bluetooth.begin(9600);

  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
  delay(2000);

  digitalWrite(13, LOW);

  bluetooth.print("AT");
  delay(1000);

  bluetooth.print("AT+NAME");
  bluetooth.print("PENDU");
  delay(1000);

  bluetooth.print("AT+BAUD");
  bluetooth.print('4');
  delay(1000);

  bluetooth.print("AT+PIN");
  bluetooth.print("2023");
  
  // Avisando qu
  digitalWrite(13, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
}
