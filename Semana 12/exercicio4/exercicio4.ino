#define pin_led1 8 // definindo o pino 8 como pin_led1
#define pin_led2 9 // definindo o pino 9 como pin_led2
#define pin_led3 10 // definindo o pino 10 como pin_led3
#define pin_led4 11 // definindo o pino 11 como pin_led4
#define pin_botao 2 // definindo o pino 2 como pin_botao
#define pin_botao2 3 // definindo o pino 2 como pin_botao

void setup() {
  pinMode(pin_led1, OUTPUT); // definindo a saida do pin_led1
  pinMode(pin_led2, OUTPUT); // definindo a saida do pin_led2
  pinMode(pin_led3, OUTPUT); // definindo a saida do pin_led3
  pinMode(pin_led4, OUTPUT); // definindo a saida do pin_led4
  pinMode(pin_botao, INPUT); // definindo a entrada do pin_botao
  pinMode(pin_botao2, INPUT); // definindo a entrada do pin_botao2
}

void loop() {
  bool estado = digitalRead(pin_botao); // lê a informação do pino 2
  bool estado2 = digitalRead(pin_botao2); // lê a informação do pino 3

  if (estado && estado2 == 1) {
    digitalWrite(pin_led1, HIGH);
    digitalWrite(pin_led2, HIGH);
  }
}
