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

const int rsPin = 12; 
const int enablePin = 11;
const int d4 = 5;
const int d5 = 4;
const int d6 = 3;
const int d7 = 2;

LiquidCrystal lcd(rsPin,enablePin,d4,d5,d6,d7);

void lcdSetup(){
  lcd.begin(16,2);//dimesies van de lcd
  lcd.clear();
  }

void displayData(float temp,int waterlevel, char light){
  lcd.print("Celsius: ");
  lcd.print(temp);
  delay(4000); //how to delay the lcd only
  lcd.clear();

  if(waterlevel == 1){
    lcd.print("Er is        ");
    lcd.setCursor(0,1); 
    lcd.print("genoeg water");
    }
  else{
    lcd.print("Er is NIET ");
    lcd.setCursor(0,1);
    lcd.println("genoeg water    ");
    }     
  delay(4000);
  lcd.clear();

  lcd.print("Light is on ");
  lcd.setCursor(0,1);
  if(light == 'o'){
    lcd.print("AUTO mode");
    }
  else{
    lcd.print("MANUAL mode");
    }
  delay(4000);
  lcd.clear();
  }

  
