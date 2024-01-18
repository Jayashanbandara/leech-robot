#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;


void setup() {
  // put your setup code here, to run once:
servo1.attach(14);
servo2.attach(15);
servo3.attach(16);

}
void set_pins()
{
 pinMode(25,INPUT);
 pinMode(27,INPUT); 
 pinMode(29,INPUT); 
 pinMode(31,INPUT); 
 pinMode(33,INPUT); 
 pinMode(35,INPUT); 
 pinMode(37,INPUT);  
 pinMode(39,INPUT);
 pinMode(41,INPUT);
 pinMode(43,INPUT);
 pinMode(45,INPUT);  
 pinMode(47,INPUT);
 }
 void pull(){

servo2.write(50);//50
delay(100);
servo3.write(0);
delay(100);

servo3.write(0);
delay(100);
servo2.write(100);//120
delay(100);

servo3.write(50);
delay(100);
servo2.write(120);//130
delay(100);

servo3.write(70);
delay(100);
servo2.write(130);//140
delay(100);

servo3.write(90);
delay(100);
servo2.write(140);//150
delay(100);

servo3.write(150);
delay(100);
servo2.write(150);
delay(100);


servo2.write(50);
delay(100);
servo3.write(0);                                     
delay(100);

servo2.write(50);
delay(100);
servo3.write(0);
delay(100);

loop();
}
void pull2(){

servo2.write(50);//50
delay(100);
servo3.write(0);
delay(100);

servo3.write(60);
delay(100);
servo2.write(120);//130
delay(100);



servo3.write(50);
delay(100);
servo2.write(120);//130
delay(100);

servo3.write(70);
delay(100);
servo2.write(130);//140
delay(100);

servo3.write(90);
delay(100);
servo2.write(140);//150
delay(100);

servo3.write(150);
delay(100);
servo2.write(150);
delay(100);


servo2.write(50);
delay(100);
servo3.write(0);                                     
delay(100);

servo2.write(50);
delay(100);
servo3.write(0);
delay(100);

loop();
}
void loop() {
 boolean ir1 = digitalRead(47);
boolean ir2 = digitalRead(45);
boolean ir3 = digitalRead(43);
boolean ir4 = digitalRead(41);
boolean ir5 = digitalRead(39);
boolean ir6 = digitalRead(37);
boolean ir7 = digitalRead(35);
boolean ir8 = digitalRead(33);
boolean ir9 = digitalRead(31);
boolean ir10 =digitalRead(29);
boolean ir11 =digitalRead(27); 
boolean ir12 =digitalRead(25);

set_pins(); 
  

}  
  
  
  // put your main code here, to run repeatedly:


