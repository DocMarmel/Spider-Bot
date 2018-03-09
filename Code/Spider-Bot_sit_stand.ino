#include <Servo.h>
#include <Wire.h>

//servo's declaration
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
  
//servo's attachment on the pin 
 servo1.attach(2); //forward right 1st part
 servo2.attach(3); //forward right 2nd part
 servo3.attach(4); //forward right 3rd part
 servo4.attach(5); //back right 1st part
 servo5.attach(6); //back right 2nd part
 servo6.attach(7); //back right 3rd part
 servo7.attach(8); //forward left 1st part
 servo8.attach(9); //forward left 2nd part
 servo9.attach(10); //forward left 3rd part
 servo10.attach(11); //back left 1st part
 servo11.attach(12); //back left 2nd part
 servo12.attach(13); //back left 3rd part

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
    //fr (forward right)
 
  for(int fr2=90; fr2<150; fr2++){ //forward right 2nd part
    servo2.write(fr2);
    delay(20);
  }
  for(int fr1=90; fr1>0; fr1--){ 
    servo1.write(fr1);
    delay(10);
  }
  for(int fr2=150; fr2>85; fr2--){
    servo2.write(fr2);
    delay(20);
  }
  
    //End fr
    //------------------------------------------
    //br (back right)
    
  for(int br2=105; br2<165; br2++){ //back right 2nd part
    servo5.write(br2);
    delay(20);
  }
  for(int br1=100; br1>10; br1--){
    servo4.write(br1);
    delay(10);
  }
  for(int br2=165; br2>100; br2--){
    servo5.write(br2);
    delay(20);
  }

    //End br
    //-------------------------------------------
    //fl (forward left)
    
   for(int fl2=95; fl2>40; fl2--){ //forward left 2nd part
    servo8.write(fl2);
    delay(20);
   }
   for(int fl1=90; fl1<179; fl1++){
    servo7.write(fl1);
    delay(10);
   }
   for(int fl2=40; fl2<95; fl2++){
    servo8.write(fl2);
    delay(20);
   }

    //End fl
    //-------------------------------------------
    //bl (back left)

  for(int bl2=105; bl2>45; bl2--){ //back left 2nd part
    servo11.write(bl2);
    delay(20);
  }
  for(int bl1=90; bl1<179; bl1++){
    servo10.write(bl1);
    delay(10);
  }
  for(int bl2=45; bl2<105; bl2++){
    servo11.write(bl2);
    delay(20);
  }
    //End bl
      //End sit
      //-------------------------------------------------------------------
      //Stand
    //fr
  
 }

 void loop(){
  
 }
    


