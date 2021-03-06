int chev1 = 13;
int extra1 = 12;
int extra2 = 11;
int chev2 = 10;
int extra3 = 9;
int chev3 = 8;

int incomingKeypress;

int slow = 1800;

// counter variables
int counter1 = 0;
int counter2 = 0;
int counter3 = 0;
int counter4 = 0;
int counter5 = 0;
int counter6 = 0;

void setup() {
  Serial.begin(9600);
  pinMode(chev1, OUTPUT);
  pinMode(extra1, OUTPUT);
  pinMode(extra2, OUTPUT);
  pinMode(chev2, OUTPUT);
  pinMode(extra3, OUTPUT);
  pinMode(chev3, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    incomingKeypress = Serial.read();
    
    if (incomingKeypress == 'o') {
      digitalWrite(chev1,HIGH);
      digitalWrite(chev2,HIGH);
      digitalWrite(chev3,HIGH);
      delay(100);
      counter1 = 0;
      counter2 = 0;
      counter3 = 0;
      counter4 = 0;
      counter5 = 0;
      counter6 = 0;
      digitalWrite(chev1,LOW);
      digitalWrite(chev2,LOW);
      digitalWrite(chev3,LOW);
    }
    
    if (incomingKeypress == 'g') {
      delay(42000);
      counter1 = 9;
      while (counter1 > 0) {
        digitalWrite(chev1,HIGH);
        delay(100);
        digitalWrite(chev2,HIGH);
        delay(100);
        digitalWrite(chev3,HIGH);
        delay(750);
        digitalWrite(chev1,LOW);
        digitalWrite(chev2,LOW);
        digitalWrite(chev3,LOW);
        delay(100);
        digitalWrite(chev1,HIGH);
        digitalWrite(chev2,HIGH);
        digitalWrite(chev3,HIGH);
        delay(100);
        digitalWrite(chev1,LOW);
        digitalWrite(chev2,LOW);
        digitalWrite(chev3,LOW);
        delay(100);
        digitalWrite(chev1,HIGH);
        digitalWrite(chev2,HIGH);
        digitalWrite(chev3,HIGH);
        delay(300);
        digitalWrite(chev1,LOW);
        digitalWrite(chev2,LOW);
        digitalWrite(chev3,LOW);
        counter1 -= 1;
        delay(125);
      }// 78 seconds left
      counter2 = 15;
      while (counter2 > 0) {
        digitalWrite(chev1,HIGH);
        delay(150);
        digitalWrite(chev2,HIGH);
        delay(150);
        digitalWrite(chev3,HIGH);
        delay(150);
        digitalWrite(chev1,LOW);
        delay(150);
        digitalWrite(chev2,LOW);
        delay(150);
        digitalWrite(chev3,LOW);
        counter2 -= 1;
        delay(150);
      }//69 seconds left
      counter3 = 3;
      while (counter3 > 0) {
        digitalWrite(chev1,HIGH);
        delay(150);
        digitalWrite(chev2,HIGH);
        delay(150);
        digitalWrite(chev3,HIGH);
        delay(1500);
        digitalWrite(chev1,LOW);
        digitalWrite(chev2,LOW);
        digitalWrite(chev3,LOW);
        counter3 -= 1;
        delay(200);
      }//61 seconds left
      counter4 = 3;
      while (counter4 > 0) {
        digitalWrite(chev1,HIGH);
        delay(150);
        digitalWrite(chev2,HIGH);
        delay(150);
        digitalWrite(chev3,HIGH);
        delay(700);
        digitalWrite(chev3,LOW);
        delay(300);
        digitalWrite(chev3,HIGH);
        delay(700);
        digitalWrite(chev3,LOW);
        delay(300);
        digitalWrite(chev3,HIGH);
        delay(600);
        digitalWrite(chev1,LOW);
        digitalWrite(chev2,LOW);
        digitalWrite(chev3,LOW);
        delay(100);
        counter4 -= 1;
      }//40 seconds left
      digitalWrite(chev1,HIGH);
      delay(150);
      digitalWrite(chev2,HIGH);
      counter5 = 12;
      while (counter5 > 0) {
        delay(slow);
        slow -= 50;
        digitalWrite(chev3,HIGH);
        digitalWrite(chev1,LOW);
        delay(slow);
        slow -= 50;
        digitalWrite(chev1,HIGH);
        digitalWrite(chev2,LOW);
        delay(slow);
        slow -= 50;
        digitalWrite(chev2,HIGH);
        digitalWrite(chev3,LOW);
        counter5 -= 1;
      }
      digitalWrite(chev3,HIGH);
      counter6 = 55;
      while (counter6 > 0) {
        delay(60);
        digitalWrite(chev1,LOW);
        digitalWrite(chev2,LOW);
        digitalWrite(chev3,LOW);
        delay(60);
        digitalWrite(chev1,HIGH);
        digitalWrite(chev2,HIGH);
        digitalWrite(chev3,HIGH);
        counter6 -= 1;
      }
      counter1 = 0;
      counter2 = 0;
      counter3 = 0;
      counter4 = 0;
      counter5 = 0;
      counter6 = 0;
      slow = 1800;
      delay(3000);
      digitalWrite(chev1,LOW);
      digitalWrite(chev2,LOW);
      digitalWrite(chev3,LOW);
    }
  }
}
