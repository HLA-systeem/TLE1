const int redPin = 7; // x4
const int greenPin = 8; // x4
const int bluePin = 9; // x4
const int yellowPin = 10; // x1

void lightSetup(){
    pinMode(redPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(yellowPin, OUTPUT);

    digitalWrite(redPin, LOW);
    digitalWrite(bluePin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(yellowPin, LOW);
    } 


void farRed(){
  digitalWrite(redPin, HIGH);
  digitalWrite(bluePin, LOW);
  }

void deepBlue(){
  digitalWrite(redPin, LOW);
  digitalWrite(bluePin, HIGH);
  }

void hyperRed(){
  digitalWrite(redPin, HIGH);
  }


