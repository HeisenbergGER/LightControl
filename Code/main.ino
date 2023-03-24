int BTN_1 = 8;
int BTN_2 = 9;
int BTN_3 = 10;

int GATE_1 = 5;
int GATE_2 = 6;
int GATE_3 = 7;

void setup() {
  pinMode(BTN_1,INPUT); //Brake Light
  pinMode(BTN_2,INPUT); //Light
  pinMode(BTN_3,INPUT); //Indicator

  digitalWrite(GATE_1,LOW); //Brake Light
  digitalWrite(GATE_2,LOW); //Light
  digitalWrite(GATE_3,LOW); //Indicator

  pinMode(GATE_1,OUTPUT);
  pinMode(GATE_2,OUTPUT);
  pinMode(GATE_3,OUTPUT);

}

void loop() {
  if(digitalRead(BTN_1) == true){
    digitalWrite(GATE_1,HIGH);
  }
  else{
    digitalWrite(GATE_1,LOW);
  }

  if(digitalRead(BTN_2 == true)){
    digitalWrite(GATE_2,HIGH);
  }
  else{
    digitalWrite(GATE_2,LOW);
  }

  if((digitalRead(BTN_3) == true) && (millis() % 1500 < 750) ){
    digitalWrite(GATE_3,HIGH);
  }
  else{
    digitalWrite(GATE_3,LOW);
  }

}
