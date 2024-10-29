const int red = 23;
const int yellow = 22;
const int green = 32;
const int buzzer = 5;

void setup() {
  // inicializa os pins 23, 22 e 32 como output
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  digitalWrite(red, HIGH);  // liga a luz vermelha
  delay(6000);                      // espera 6 segundos
  digitalWrite(red, LOW);   // desliga a LED mudando o estado para LOW
  digitalWrite(yellow, HIGH);  // liga a luz amarela
  delay(2000);                      // espera 2 segundos
  digitalWrite(yellow, LOW);   // desliga a LED mudando o estado para LOW
  tone(buzzer, 1000);
  digitalWrite(green, HIGH);  // liga a luz verde
  delay(4000);                      // espera 4 segundos
  digitalWrite(green, LOW);   // desliga a LED mudando o estado para LOW
  noTone(buzzer);
  digitalWrite(yellow, HIGH);  // liga a luz amarela de novo
  delay(2000);                      // espera 2 segundos
  digitalWrite(yellow, LOW);   // desliga a LED mudando o estado para LOW
}

