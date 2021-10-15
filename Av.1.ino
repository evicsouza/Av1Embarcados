const int led = 8;  
const int botao = 2; 
 
int estadoBotao = 0;
 
void setup() {
  pinMode(led,OUTPUT);  
  pinMode(botao,INPUT); 
}
 
void loop() {  
  estadoBotao = digitalRead(botao);          
  if (estadoBotao == HIGH) {
    digitalWrite(led,HIGH); 
  } else {
    digitalWrite(led,LOW);   
  }       
}
