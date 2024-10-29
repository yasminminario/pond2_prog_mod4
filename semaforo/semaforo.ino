const int red = 23;
const int yellow = 22;
const int green = 32;
const int buzzer = 5;
int* ponteiro_r;
int* ponteiro_y;
int* ponteiro_g;

void setup() {
  // inicializa os pins 23, 22 e 32 como output
  ponteiro_r = (int*)&red;
  ponteiro_y = (int*)&yellow;
  ponteiro_g = (int*)&green;

  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  digitalWrite(*ponteiro_r, HIGH);  // liga a luz vermelha
  delay(6000);                      // espera 6 segundos
  digitalWrite(*ponteiro_r, LOW);   // desliga a LED mudando o estado para LOW
  digitalWrite(*ponteiro_y, HIGH);  // liga a luz amarela
  delay(2000);                      // espera 2 segundos
  digitalWrite(*ponteiro_y, LOW);   // desliga a LED mudando o estado para LOW
  tone(buzzer, 1000);
  digitalWrite(*ponteiro_g, HIGH);  // liga a luz verde
  delay(4000);                      // espera 4 segundos
  digitalWrite(*ponteiro_g, LOW);   // desliga a LED mudando o estado para LOW
  noTone(buzzer);
  digitalWrite(*ponteiro_y, HIGH);  // liga a luz amarela de novo
  delay(2000);                      // espera 2 segundos
  digitalWrite(*ponteiro_y, LOW);   // desliga a LED mudando o estado para LOW
}

