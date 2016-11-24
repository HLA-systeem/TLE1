const int tempPin = 0;

float readTemp(){
  float output = analogRead(tempPin);
  Serial.println(output);
  float voltage = output * 0.004882814;
  float celsius = (voltage - 0.5) * 100; 
  return celsius;
  }

