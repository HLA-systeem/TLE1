//De lcd moet compatible zijn met de  Hitachi HD44780 driver 
//1x16 LCD display will have one row of sixteen characters
//4x20 LCD display will have four rows with twenty characters in each. 
//gnd (first pin from left to right)
//VCC = powerPin (second pin is 5 V)
//Vo = contrastPin (3e)
//RS = commandOrCharacterspin (4e)
//R/W = readOrWritePin (5e)
//enablePin(6e)
//DO-D7(7e tot 14e)
//anode = lightPin (15e)
//cathode = lightPin (16e)

#include <LiquidCrystal.h>

const rsPin = 1; 
const enablePin = 2;
const d4 = 4;
const d5 = 5;
const d6 = 6;
const d7 = 7;

LiguidCrystal lcd(rsPin,enablePin,d4,d5,d6,d7);

void lcdSetup(){
  lcd.begin(16,2);//dimesies van de lcd
  }

void displayData(float celius,float weight,float waterlevel){
  
  }
