<<<<<<< HEAD
//03/01/2022, button com if else.
=======
//03/01/2022, button com if else
>>>>>>> 676ae358f4b21f731668cab00fe24fc12be47a34

#define red 2
#define green 3 
 
void setup() {
  
 pinMode(red, OUTPUT);
 pinMode(green, OUTPUT);
 pinMode(7, INPUT_PULLUP);
}

void loop() {

 if (digitalRead(7) == 0){
  
  digitalWrite(green, HIGH);
  delay(1000);
  digitalWrite(green,LOW);  
  
  } else {
  
  digitalWrite(red, HIGH);
  delay(1000);
  digitalWrite(red, LOW);
  
  } 
  

}
