const int led1 = 3;
const int led2 = 5;
const int led3 = 6;
const int botao1 = 11;
const int botao2 = 12;

int estadoBotao1 = 0;
int estadoBotao2 = 0;

int contador = 0;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);

}

void loop() {
  estadoBotao1 = digitalRead(botao1);
  estadoBotao2 = digitalRead(botao2);
  while (estadoBotao2 == LOW){
    if (estadoBotao1 == HIGH) {
      contador++;
    }
    if (contador == 3) {
      digitalWrite(led1, HIGH);
    } else {
      if (contador == 6) {
        digitalWrite(led2, HIGH);
      }
    }
    if (contador == 10) {
      digitalWrite(led3, HIGH);
    }
  }
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
}
