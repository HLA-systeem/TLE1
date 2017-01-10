//Potentiometer moet ANALOGE aangesloten worden.
const int greenPot = A0;
const int yellowPot = A1; 
const int redPot = A2; 
const int bluePot = A3; 

int greenOutput = 0; 
int yellowOutput = 0; 
int redOutput = 0; 
int blueOutput = 0; 


void lghtControl(){
  greenOutput = analogRead(greenPot);
  yellowOutput = analogRead(yellowPot);
  redOutput = analogRead(redPot);
  blueOutput = analogRead(bluePot);

/*
  switch () {
    case output:
      //do something when var equals 1
      break;
    case 2:
      break;
    case 3:
    default: 
       
    break;
  }
 */ 
 }
