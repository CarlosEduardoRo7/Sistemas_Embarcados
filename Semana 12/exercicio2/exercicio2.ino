#define pin_led1 8 // definindo o pino 8 como pin_led1
#define pin_led2 9 // definindo o pino 9 como pin_led2
#define pin_led3 10 // definindo o pino 10 como pin_led3
#define pin_led4 11 // definindo o pino 11 como pin_led4
#define pin_botao 2 // definindo o pino 2 como pin_botao

void setup() {
  pinMode(pin_led1, OUTPUT); // definindo a saida do pin_led1
  pinMode(pin_led2, OUTPUT); // definindo a saida do pin_led2
  pinMode(pin_led3, OUTPUT); // definindo a saida do pin_led3
  pinMode(pin_led4, OUTPUT); // definindo a saida do pin_led4
  pinMode(pin_botao, INPUT); // definindo a entrada do pin_led4
}

void loop() {
  bool estado = digitalRead(pin_botao); // lê a informação do pino 2
  if (estado == 1) {
    digitalWrite(pin_led1, HIGH); // caso o botão for precionado, pin_led1 será ativado
  } else {
    digitalWrite(pin_led1, LOW); // caso o botão não for precionado, pin_led1 será desativado
  }

}
