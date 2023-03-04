// variaveis

int ledVerde 	  = 2;
int ledAmarelo 	= 3;
int ledVermelho = 4;

void setup() {
  // put your setup code here, to run once:

  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  
  // Garante que todos os Leds estarao apagados quando o Arduino ligar
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:

  // Acende e apaga o LEd Verde
  digitalWrite(ledVerde, HIGH);
  delay(1000);
  digitalWrite(ledVerde, LOW);
  
  // Acende e apaga o Led Amarelo
  digitalWrite(ledAmarelo, HIGH);
  delay(1000);
  digitalWrite(ledAmarelo, LOW);
  
  // Acende e apaga o Led Vermelho
  digitalWrite(ledVermelho, HIGH);
  delay(1000);
  digitalWrite(ledVermelho, LOW);

}
