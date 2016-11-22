float celsius = 0;

void setup(){
   Serial.begin(9600);
}

void loop(){
  celsius = readTemp();
  delay(1000);
}
