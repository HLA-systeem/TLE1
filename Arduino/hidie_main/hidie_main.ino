float celsius = 0;


void setup(){
   Serial.begin(9600);
}

void loop(){
  celsius = readTemp();
  //Serial.println(celsius);
  //Serial.print(' Celsius');
  delay(1000);
}