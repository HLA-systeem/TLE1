const int tempPin = A5;



 void tempSetup() { 
  
  pinMode(tempPin, INPUT);

 }

float readTemp(float temp){
  int output = analogRead(tempPin); //151
  //Serial.println(output); 
  temp = output - 151;
  temp += 21.9;
 
//  float celsius = (output - 0.5) / 100;
//  celsius += 21.8;
 
  //Serial.println(celsius);
  return temp;
  }


//Formula you should be using might be T(C)=(vout(mv)-500)/10, as done in the arduino screen: a voltage of 0.61V corresponds to 11.C, but what was your temperature reference showing? did you measure the voltage with your multimeter?
