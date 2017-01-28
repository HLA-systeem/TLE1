const int tempPin = A5;



 void tempSetup() { 
  
  pinMode(tempPin, INPUT);

 }

float readTemp(float temp){
  int output = analogRead(tempPin); //151
  temp = output - 151;
  temp += 14.9; //5 afgehaald omdat temp aan binnekant zit
 
 
  //Serial.println(celsius);
  return temp;
  }


//Formula you should be using might be T(C)=(vout(mv)-500)/10, as done in the arduino screen: a voltage of 0.61V corresponds to 11.C, but what was your temperature reference showing? did you measure the voltage with your multimeter?
