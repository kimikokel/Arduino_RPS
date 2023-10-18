const int btnRed = 8;
const int btnYlw = 9;
const int btnGrn = 10;

const int btnRst = 13;

const int ledSignal = 12;
const int ledBlu = 3;
const int ledRed = 4;
const int ledGrn = 5;

String serialData;

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
    // digitalWrite(ledBlu, HIGH);
    Serial.println("scissor");
  } 
  else if (red == 1) {
    // digitalWrite(ledBlu, LOW);
  }

  if (yellow == 0) {
    // digitalWrite(ledRed, HIGH);
    Serial.println("paper");
  } 
  else if (yellow == 1) {
    // digitalWrite(ledRed, LOW);
  }

  if (green == 0) {
    // Serial.println(rst);
    // digitalWrite(ledGrn, HIGH);
    Serial.println("rock");
  } 
  else if (green == 1) {
    // digitalWrite(ledGrn, LOW);
  }

  if (rst == 0) {
    // digitalWrite(ledSignal, HIGH);
    // Serial.println(rst);
    Serial.println("done");
  }
  else if (rst == 1) {
    // digitalWrite(ledSignal, LOW);
  }

  if (Serial.available() > 0) {
    digitalWrite(ledSignal, HIGH);
    serialData = Serial.readString();
    Serial.println(serialData);
    
    // if (serialData == '0') {
    //   digitalWrite(ledBlu, HIGH);
    //   digitalWrite(ledRed, LOW);
    //   digitalWrite(ledGrn, LOW);
    //   delay(1000);
    // }
    if (serialData == "0") {
      // digitalWrite(ledSignal, HIGH);
      digitalWrite(ledBlu, LOW);
      digitalWrite(ledRed, HIGH);
      digitalWrite(ledGrn, LOW);
      delay(2000);
      digitalWrite(ledSignal, LOW);
    }
    else if (serialData == "1") {
      // digitalWrite(ledSignal, HIGH);
      digitalWrite(ledBlu, LOW);
      digitalWrite(ledRed, LOW);
      digitalWrite(ledGrn, HIGH);
      delay(2000);
      digitalWrite(ledSignal, LOW);
    }
    else if (serialData == "2") {
      digitalWrite(ledSignal, HIGH);
      // digitalWrite(ledBlu, HIGH);
      digitalWrite(ledRed, LOW);
      digitalWrite(ledGrn, LOW);
      delay(2000);
      digitalWrite(ledSignal, LOW);
    }    
    else if (serialData == "3") {
      // digitalWrite(ledSignal, HIGH);
      digitalWrite(ledBlu, LOW);
      digitalWrite(ledRed, LOW);
      digitalWrite(ledGrn, LOW);
      delay(2000);
      digitalWrite(ledSignal, LOW);
    }
    else {
      // digitalWrite(ledSignal, HIGH);
      digitalWrite(ledBlu, LOW);
      digitalWrite(ledRed, LOW);
      digitalWrite(ledGrn, LOW);
      delay(2000);
      digitalWrite(ledSignal, LOW);
    }
  }

}