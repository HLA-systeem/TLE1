float celsius = 0;
char waterlevel = '0 L'; //char = '' char * = " " not the same data type

void setup(){
   Serial.begin(228800);//228800
   lcdSetup();
}

void loop(){
  celsius = readTemp();
  Serial.println(celsius);
  Serial.print(' Celsius');
  //displayData(celsius, waterlevel);

}
