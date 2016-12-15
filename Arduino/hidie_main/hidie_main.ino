float celsius = 0;
int waterlevel = 0;

void setup(){
   Serial.begin(9600);// 9600
   lcdSetup();
   floatSetup(); 
   tempSetup();
   
    
}

void loop(){
  celsius = readTemp();
//  Serial.println(celsius);
//  Serial.print(' Celsius');
 waterlevel = readWaterLevel(waterlevel); 
  displayData(celsius, waterlevel);
 

}
