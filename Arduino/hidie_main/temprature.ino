int tempPin = 0;

int readTemp(){
  int output = analogRead(tempPin);
  float voltage = (output * 5.0)/ 1024.0;
  float celsius = (voltage - 0.5) * 100; 
  return celsius;
  }

