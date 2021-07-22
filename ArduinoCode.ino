const int botaoesq = 3;
const int botaodir = 4;
const int botaopoder = 2;
const int botaopulo = 5;
const int botaoligar = 6;

int estadoesq = 0;
int estadodir = 0;
int estadopoder = 0;
int estadopulo = 0;
int estadoligar = 0;

void setup() {
  Serial.begin(9600);

  pinMode(botaoesq, INPUT_PULLUP);
  pinMode(botaodir, INPUT_PULLUP);
  pinMode(botaopoder, INPUT_PULLUP);
  pinMode(botaopulo, INPUT_PULLUP);
  pinMode(botaoligar, INPUT_PULLUP);
}

void loop() {
  estadoesq = digitalRead(botaoesq);
  estadodir = digitalRead(botaodir);
  estadopoder = digitalRead(botaopoder);
  estadopulo = digitalRead(botaopulo);
  estadoligar = digitalRead(botaoligar);
  
  if(estadoesq == LOW){
    Serial.println('e');
  }
  if(estadodir == LOW){
    Serial.println('d');
  }
  if(estadopoder == LOW){
    Serial.println('o');
  }
  if(estadopulo == LOW){
    Serial.println('u');
  }
  if(estadoligar == LOW){
    Serial.println('t');
  }
  delay(250);
}
