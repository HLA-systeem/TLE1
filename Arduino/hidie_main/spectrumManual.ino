//Potentiometer moet ANALOGE aangesloten worden.
//notes only.
const int greenPot = A0;
const int yellowPot = A1; 
const int redPot = A2; 
const int bluePot = A3; 

int greenOutput = 0; 
int yellowOutput = 0; 
int redOutput = 0; 
int blueOutput = 0; 


void lightControl(){
  greenOutput = analogRead(greenPot);
  yellowOutput = analogRead(yellowPot);
  redOutput = analogRead(redPot);
  blueOutput = analogRead(bluePot);
 }
