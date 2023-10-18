const int btnRed = 8;
const int btnYlw = 9;
const int btnGrn = 10;

const int btnRst = 13;

const int ledSignal = 12;
const int ledBlu = 3;
const int ledRed = 4;
const int ledGrn = 5;

String data;

void setup() {
  Serial.begin(9600);
  pinMode(btnRed, INPUT);
  pinMode(btnYlw, INPUT);
  pinMode(btnGrn, INPUT);
  pinMode(btnRst, INPUT);

  pinMode(ledBlu, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(ledGrn, OUTPUT);
  pinMode(ledSignal, OUTPUT);
}


void loop() {
  int red = digitalRead(btnRed);
  int yellow = digitalRead(btnYlw);
  int green = digitalRead(btnGrn);
  int rst = digitalRead(btnRst);

  if (red == 0) {
    Serial.println("scissor");
    // delay(3000);
  }

  if (yellow == 0) {
    Serial.println("paper");    
    // delay(3000);
  } 

  if (green == 0) {
    Serial.println("rock");
    // delay(3000);
  } 

  if (rst == 0) {
    Serial.println("done");
  }

  if (Serial.available() > 0) {
    digitalWrite(ledSignal, HIGH);
    data = Serial.readString();
    // Serial.println(data);
    
    // if (serialData == '0') {
    //   digitalWrite(ledBlu, HIGH);
    //   digitalWrite(ledRed, LOW);
    //   digitalWrite(ledGrn, LOW);
    //   delay(1000);
    // }
    if (data == "0") {
      digitalWrite(ledSignal, HIGH);
      digitalWrite(ledBlu, LOW);
      digitalWrite(ledRed, HIGH);
      digitalWrite(ledGrn, LOW);
      delay(2000);
      digitalWrite(ledSignal, LOW);
    }
    else if (data == "1") {
      digitalWrite(ledSignal, HIGH);
      digitalWrite(ledBlu, LOW);
      digitalWrite(ledRed, LOW);
      digitalWrite(ledGrn, HIGH);
      delay(2000);
      digitalWrite(ledSignal, LOW);
    }
    else if (data == "2") {
      digitalWrite(ledSignal, HIGH);
      digitalWrite(ledBlu, HIGH);
      digitalWrite(ledRed, LOW);
      digitalWrite(ledGrn, LOW);
      delay(2000);
      digitalWrite(ledSignal, LOW);
    }    
    else if (data == "3") {
      digitalWrite(ledSignal, HIGH);
      digitalWrite(ledBlu, LOW);
      digitalWrite(ledRed, LOW);
      digitalWrite(ledGrn, LOW);
      delay(2000);
      digitalWrite(ledSignal, LOW);
    }
    else {
      digitalWrite(ledSignal, HIGH);
      digitalWrite(ledBlu, LOW);
      digitalWrite(ledRed, LOW);
      digitalWrite(ledGrn, LOW);
      delay(2000);
      digitalWrite(ledSignal, LOW);
    }
  }
}