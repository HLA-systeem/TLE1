
// IMPORTANT replace all brackets to left or right brackets to get code to work 

const int floatsensor = 6; 


void floatSetup() 
{ 
  
  pinMode(floatsensor, INPUT);

}

int readWaterLevel(int water){ 
  water = digitalRead(floatsensor);
  return water; 
  }

