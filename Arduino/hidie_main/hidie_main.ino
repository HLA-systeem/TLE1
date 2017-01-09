float celsius = 0;
int waterlevel = 0;
char light= 'auto';

void setup(){
   Serial.begin(9600);// 9600
   floatSetup(); 
   lightSetup();
   tempSetup();   
   lcdSetup();
   
}

void loop(){
  celsius = readTemp(celsius);
//  Serial.println(celsius);
//  Serial.print(' Celsius');
  waterlevel = readWaterLevel(waterlevel); 
  displayData(celsius, waterlevel);

}
