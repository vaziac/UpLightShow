int chev1 = 13;
int chev2 = 12;
int chev3 = 11;
int chev4 = 10;
int extra1 = 9;
int extra2 = 8;

int incomingByte;      // a variable to read incoming serial data into

void setup() {
  // initialize serial communication:
  Serial.begin(9600);
  // initialize the LED pin as an output:
  pinMode(chev1, OUTPUT);
  pinMode(chev2, OUTPUT);
  pinMode(chev3, OUTPUT);
  pinMode(chev4, OUTPUT);
  pinMode(extra1, OUTPUT);
  pinMode(extra2, OUTPUT);
}

void loop() {
  // see if there's incoming serial data:
  if (Serial.available() > 0) {
    // read the oldest byte in the serial buffer:
    incomingByte = Serial.read();

    if (incomingByte == 'h') {
       delay(0);
       digitalWrite(chev1,HIGH);
       digitalWrite(chev2,HIGH);
       digitalWrite(chev3,HIGH);
       digitalWrite(chev4,HIGH);
       delay(0);
       digitalWrite(chev1,LOW);
       digitalWrite(chev2,LOW);
       digitalWrite(chev3,LOW);
       digitalWrite(chev4,LOW);
       delay(0);
       digitalWrite(chev1,HIGH);
       delay(0);
       digitalWrite(chev2,HIGH);
       delay(0);
       digitalWrite(chev3,HIGH);
       delay(0);
       digitalWrite(chev4,HIGH);
       digitalWrite(chev1,LOW);
       delay(0);
       digitalWrite(chev2,LOW);
       delay(0);
       digitalWrite(chev3,LOW);
       delay(0);
       digitalWrite(chev4,LOW);
       digitalWrite(chev1,HIGH);
       delay(0);
       digitalWrite(chev2,HIGH);
       delay(0);
       digitalWrite(chev3,HIGH);
       delay(0);
       digitalWrite(chev4,HIGH);
       digitalWrite(chev1,LOW);
       delay(0);
       digitalWrite(chev2,LOW);
       delay(0);
       digitalWrite(chev3,LOW);
       delay(0);
       digitalWrite(chev4,LOW);
       digitalWrite(chev1,HIGH);
       delay(0);
       digitalWrite(chev2,HIGH);
       delay(0);
       digitalWrite(chev3,HIGH);
       delay(0);
       digitalWrite(chev4,HIGH);
       delay(0);
       digitalWrite(chev1,LOW);
       digitalWrite(chev2,LOW);
       digitalWrite(chev3,LOW);
       digitalWrite(chev4,LOW);
       delay(0);
       digitalWrite(chev1,HIGH);
       digitalWrite(chev2,HIGH);
       digitalWrite(chev3,HIGH);
       digitalWrite(chev4,HIGH);
       delay(0);
       digitalWrite(chev1,LOW);
       digitalWrite(chev2,LOW);
       digitalWrite(chev3,LOW);
       digitalWrite(chev4,LOW);
    }
    if (incomingByte == 'g') {
       delay(950);
       digitalWrite(chev1,HIGH);
       delay(200);
       digitalWrite(chev2,HIGH);
       delay(200);
       digitalWrite(chev3,HIGH);
       delay(200);
       digitalWrite(chev4,HIGH);
       delay(200);
       digitalWrite(chev1,LOW);
       digitalWrite(chev2,LOW);
       digitalWrite(chev3,LOW);
       digitalWrite(chev4,LOW);
       delay(200);
       digitalWrite(chev1,HIGH);
       digitalWrite(chev2,HIGH);
       digitalWrite(chev3,HIGH);
       digitalWrite(chev4,HIGH);
       delay(600);
       digitalWrite(chev1,LOW);
       digitalWrite(chev2,LOW);
       digitalWrite(chev3,LOW);
       digitalWrite(chev4,LOW);
       delay(200);
       digitalWrite(chev1,HIGH);
       delay(200);
       digitalWrite(chev2,HIGH);
       delay(200);
       digitalWrite(chev3,HIGH);
       delay(200);
       digitalWrite(chev1,LOW);
       digitalWrite(chev2,LOW);
       digitalWrite(chev3,LOW);
       delay(200);
       digitalWrite(chev1,HIGH);
       digitalWrite(chev2,HIGH);
       digitalWrite(chev3,HIGH);
       digitalWrite(chev4,HIGH);
       delay(600);
       digitalWrite(chev1,LOW);
       digitalWrite(chev2,LOW);
       digitalWrite(chev3,LOW);
       digitalWrite(chev4,LOW);
       delay(200);
       digitalWrite(chev1,HIGH);
       delay(200);
       digitalWrite(chev2,HIGH);
       delay(100);
       digitalWrite(chev1,LOW);
       digitalWrite(chev2,LOW);
       delay(100);
       digitalWrite(chev1,HIGH);
       digitalWrite(chev2,HIGH);
       digitalWrite(chev3,HIGH);
       digitalWrite(chev4,HIGH);
       delay(200);
       digitalWrite(chev1,LOW);
       digitalWrite(chev2,LOW);
       digitalWrite(chev3,LOW);
       digitalWrite(chev4,LOW);
       delay(600);
       digitalWrite(chev1,HIGH);
       delay(200);
       digitalWrite(chev2,HIGH);
       delay(200);
       digitalWrite(chev3,HIGH);
       delay(200);
       digitalWrite(chev4,HIGH);
       delay(1600);
    }
  }
}  
