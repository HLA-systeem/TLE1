float celsius = 0;
int waterlevel = 0;
char light = 'auto';

void setup(){
   Serial.begin(9600);// 9600
   floatSetup(); 
   lightSetup();
   tempSetup();   
   lcdSetup();
   
}

void loop(){
  light = 'manual';
  if(light == 'l'){
    lightControl();
    }
  
  celsius = readTemp(celsius);
  waterlevel = readWaterLevel(waterlevel); 
  displayData(celsius, waterlevel, light);

}

//Print op de LCD of die op auto of manual staat.
