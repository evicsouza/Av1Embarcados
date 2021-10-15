const int azul = 9;
const int verde = 10;
const int vermelho = 11;
String cor;
void setup(){
  Serial.begin(9600);

  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(vermelho, OUTPUT);
}
void vermelhoFuncao() {
  digitalWrite(vermelho, HIGH);
  delay(1000);
  digitalWrite(vermelho, LOW);
  delay(1000);
}
void azulFuncao() {
  digitalWrite(azul, HIGH);
  delay(1000);
  digitalWrite(azul, LOW);
  delay(1000);
}
void verdeFuncao() {
  digitalWrite(verde, HIGH);
  delay(1000);
  digitalWrite(verde, LOW);
  delay(100
}
void amareloFuncao() {
  analogWrite(azul, 0);
  analogWrite(verde, 50);
  analogWrite(vermelho, 255);
}
void roxoFuncao() {
  analogWrite(azul, 207);
  analogWrite(verde, 0);
  analogWrite(vermelho, 255);
}
void brancoFuncao() {
  digitalWrite(azul, HIGH);
  digitalWrite(verde, HIGH);
  digitalWrite(vermelho, HIGH);
}
void loop(){
  if (Serial.available()) {
    cor = Serial.readString();
    Serial.println(cor);
  }
  if (cor == "Vermelho") {
    vermelhoFuncao();
  }
  if (cor == "Azul") {
    azulFuncao();
  }
  if (cor == "Verde") {
    verdeFuncao();
  }
  if (cor == "Amarelo") {
    amareloFuncao();
  }
  if (cor == "Roxo") {
    roxoFuncao();
  }
  if (cor == "Branco") {
    brancoFuncao();
  }
}
