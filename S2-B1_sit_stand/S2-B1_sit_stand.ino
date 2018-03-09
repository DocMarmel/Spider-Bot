#include <Servo.h>
#include <Wire.h>

//déclaration des servo
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
Servo servo7;
Servo servo8;
Servo servo9;
Servo servo10;
Servo servo11;
Servo servo12;


//----------------------------------------------------------------------

 void setup(){

  Serial.begin(9600);
  
//attachement des servo sur les pin
 servo1.attach(2); //avant droite 1ère partie
 servo2.attach(3); //avant droite 2ème partie
 servo3.attach(4); //avant droite 3ème partie
 servo4.attach(5); //arrière droite 1ère partie
 servo5.attach(6); //arrière droite 2ème partie
 servo6.attach(7); //arrière droite 3ème partie
 servo7.attach(8); //avant gauche 1ère partie
 servo8.attach(9); //avant gauche 2ème partie
 servo9.attach(10); //avant gauche 3ème partie
 servo10.attach(11); //arrière gauche 1ère partie
 servo11.attach(12); //arrière gauche 2ème partie
 servo12.attach(13); //arrière gauche 3ème partie

  servo1.write(90);
  servo2.write(90);
  servo3.write(150);
  servo4.write(100);
  servo5.write(105);
  servo6.write(55);
  servo7.write(90);
  servo8.write(95);
  servo9.write(55);
  servo10.write(90);
  servo11.write(105);
  servo12.write(135);
 delay(2000);

      //Sit
    //AvD
 
  for(int AvD2=90; AvD2<150; AvD2++){
    servo2.write(AvD2);
    delay(20);
  }
  for(int AvD1=90; AvD1>0; AvD1--){
    servo1.write(AvD1);
    delay(10);
  }
  for(int AvD2=150; AvD2>85; AvD2--){
    servo2.write(AvD2);
    delay(20);
  }
  
    //Fin AvD
    //------------------------------------------
    //ArD
    
  for(int ArD2=105; ArD2<165; ArD2++){
    servo5.write(ArD2);
    delay(20);
  }
  for(int ArD1=100; ArD1>10; ArD1--){
    servo4.write(ArD1);
    delay(10);
  }
  for(int ArD2=165; ArD2>100; ArD2--){
    servo5.write(ArD2);
    delay(20);
  }

    //Fin ArD
    //-------------------------------------------
    //AvG
    
   for(int AvG2=95; AvG2>40; AvG2--){
    servo8.write(AvG2);
    delay(20);
   }
   for(int AvG1=90; AvG1<179; AvG1++){
    servo7.write(AvG1);
    delay(10);
   }
   for(int AvG2=40; AvG2<95; AvG2++){
    servo8.write(AvG2);
    delay(20);
   }

    //Fin AvG
    //-------------------------------------------
    //ArG

  for(int ArG2=105; ArG2>45; ArG2--){
    servo11.write(ArG2);
    delay(20);
  }
  for(int ArG1=90; ArG1<179; ArG1++){
    servo10.write(ArG1);
    delay(10);
  }
  for(int ArG2=45; ArG2<105; ArG2++){
    servo11.write(ArG2);
    delay(20);
  }
    //Fin ArG
      //Fin sit
      //-------------------------------------------------------------------
      //Stand
    //AvD
  
 }

 void loop(){
  
 }
    


