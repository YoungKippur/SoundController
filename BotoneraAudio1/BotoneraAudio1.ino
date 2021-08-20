#define PUL_PIN1 8
#define PUL_PIN2 9
#define PUL_PIN3 10
int valorPul1, valorPul2, valorPul3;

void setup() {
  Serial.begin(9600);
  pinMode(PUL_PIN1, INPUT_PULLUP);
  pinMode(PUL_PIN2, INPUT_PULLUP);
  pinMode(PUL_PIN3, INPUT_PULLUP);
}

void loop() {
  valorPul1 = digitalRead(PUL_PIN1);
  valorPul2 = digitalRead(PUL_PIN2);
  valorPul3 = digitalRead(PUL_PIN3);

  if (valorPul1 == 0) {
    Serial.println('1');
    delay(100);
  }

  else if (valorPul2 == 0) {
    Serial.println('2');
    delay(100);
  }

  else if (valorPul3 == 0) {
    Serial.println('3');
    delay(100);
  }

  else if (valorPul1 == 1 && valorPul2 == 1 && valorPul3 == 1) {
    Serial.println('0');
    delay(100);
  }
}
