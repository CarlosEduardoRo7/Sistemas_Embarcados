#define pin_led1 8 // definindo o pino 8 como pin_led1
#define pin_led2 9 // definindo o pino 9 como pin_led2
#define pin_led3 10 // definindo o pino 10 como pin_led3
#define pin_led4 11 // definindo o pino 11 como pin_led4

void setup() {
  Serial.begin(9600); // comunicação com o Arduino
  pinMode(pin_led1, OUTPUT); // definindo a a saida do pin_led1
  pinMode(pin_led2, OUTPUT); // definindo a a saida do pin_led2
  pinMode(pin_led3, OUTPUT); // definindo a a saida do pin_led3
  pinMode(pin_led4, OUTPUT); // definindo a a saida do pin_led4

  

}

void loop() {
  if (Serial.available() == 1 ) {
    char i = Serial.read();
    Serial.println(i);
  }
  Serial.println("Liga LED"); // recebe comunicação do Arduino (pulando de linha)
  digitalWrite(pin_led1, HIGH); // define pin_led1 como Alto (ligado)
  digitalWrite(pin_led2, HIGH); // define pin_led2 como Alto (ligado)
  digitalWrite(pin_led3, HIGH); // define pin_led3 como Alto (ligado)
  digitalWrite(pin_led4, HIGH); // define pin_led4 como Alto (ligado)
  delay(1000);
  Serial.println("Desliga LED"); // recebe comunicação do Arduino (pulando de linha)
  digitalWrite(pin_led1, LOW); // define pin_led1 como Baixo (desligado)
  digitalWrite(pin_led2, LOW); // define pin_led2 como Baixo (desligado)
  digitalWrite(pin_led3, LOW); // define pin_led3 como Baixo (desligado)
  digitalWrite(pin_led4, LOW); // define pin_led4 como Baixo (desligado)
  delay(1000); 

}
