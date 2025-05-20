#define pin_led1 8 // definindo o pino 8 como pin_led1
#define pin_led2 9 // definindo o pino 9 como pin_led2
#define pin_led3 10 // definindo o pino 10 como pin_led3
#define pin_led4 11 // definindo o pino 11 como pin_led4

void setup() {
  Serial.begin(9600); // comunicação com o Arduino
  pinMode(pin_led1, OUTPUT); // definindo a saida do pin_led1
  pinMode(pin_led2, OUTPUT); // definindo a saida do pin_led2
  pinMode(pin_led3, OUTPUT); // definindo a saida do pin_led3
  pinMode(pin_led4, OUTPUT); // definindo a saida do pin_led4

  

}

void loop() {
if (Serial.available() == 1 ) {
  char i = Serial.read();
  Serial.print(i);

  if (i == '1'){
    digitalWrite(pin_led1, HIGH);
  }

  // se a variável for igual a 1, então liga a saida pin_led1

  if (i == '2'){
    digitalWrite(pin_led2, HIGH);
  }

  // se a variável for igual a 2, então liga a saida pin_led2

  if (i == '3'){
    digitalWrite(pin_led3, HIGH);
  }

  // se a variável for igual a 3, então liga a saida pin_led3

  if (i == '4'){
    digitalWrite(pin_led4, HIGH);
  }

  // se a variável for igual a 4, então liga a saida pin_led4

  if (i == '5'){
    digitalWrite(pin_led1, LOW);
  }

  // se a variável for igual a 5, então desliga a saida pin_led1

  if (i == '6'){
    digitalWrite(pin_led2, LOW);
  }

  // se a variável for igual a 6, então desliga a saida pin_led2

  if (i == '7'){
    digitalWrite(pin_led3, LOW);
  }

  // se a variável for igual a 7, então desliga a saida pin_led3

  if (i == '8'){
    digitalWrite(pin_led4, LOW);
  }

  // se a variável for igual a 8, então desliga a saida pin_led4

  if (i == '9'){
    digitalWrite(pin_led1, HIGH);
    digitalWrite(pin_led2, HIGH);
    digitalWrite(pin_led3, HIGH);
    digitalWrite(pin_led4, HIGH);
  }

  // se a variável for igual a 9, então ativa todos os pin_mode

  if (i == '0'){
    digitalWrite(pin_led1, LOW);
    digitalWrite(pin_led2, LOW);
    digitalWrite(pin_led3, LOW);
    digitalWrite(pin_led4, LOW);
  }

  // se a variável for igual a 0, então desativa todos os pin_mode

}

}