const int tempPin = 7;



 void tempSetup() { 
  
  pinMode(tempPin, INPUT);

 }

float readTemp(){
  int output = analogRead(tempPin);
  float celsius = (output - 500) / 10; 

  Serial.println(celsius);
  return celsius;
  }


//Formula you should be using might be T(C)=(vout(mv)-500)/10, as done in the arduino screen: a voltage of 0.61V corresponds to 11.C, but what was your temperature reference showing? did you measure the voltage with your multimeter?
