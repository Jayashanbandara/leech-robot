#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;


void setup() {
  // put your setup code here, to run once:
servo1.attach(14);
servo2.attach(15);
servo3.attach(16);


servo2.write(100);
delay(500);
servo3.write(50);
delay(500);

servo2.write(0);
delay(500);
servo3.write(0);
delay(500);

servo1.write(90);
delay(500);
servo2.write(40);
delay(500);

servo2.write(80);
delay(500);

servo3.write(80);
delay(500);
servo2.write(120);
delay(500);

servo1.write(0);///////////
delay(500);
servo2.write(80);
delay(500);
servo2.write(40);
delay(500);
servo2.write(0);
delay(500);
servo3.write(0);
delay(500);
servo1.write(90);
delay(500);

pull();
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
delay(150);
servo3.write(0);
delay(150);

servo3.write(0);
delay(150);
servo2.write(100);//120
delay(150);

servo3.write(50);
delay(150);
servo2.write(120);//130
delay(150);

servo3.write(70);
delay(150);
servo2.write(130);//140
delay(150);

servo3.write(90);
delay(150);
servo2.write(140);//150
delay(150);

servo3.write(150);
delay(150);
servo2.write(150);
delay(150);


servo2.write(50);
delay(150);
servo3.write(0);                                     
delay(150);

servo2.write(50);
delay(150);
servo3.write(0);
delay(150);

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

}  
  
  
  // put your main code here, to run repeatedly:


