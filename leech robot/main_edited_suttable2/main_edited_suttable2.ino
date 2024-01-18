#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;

int x=0;
int i=90;
void setup() {

Serial.begin(9600);
  
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


void forward(){
if(x==0)
{servo1.write(90);
delay(50);
servo2.write(0);
delay(50);
servo3.write(60);
delay(50);


servo2.write(50);
delay(100);
servo3.write(0);
delay(100);
servo3.write(0);
delay(100);
servo2.write(120);
delay(100);
servo3.write(50);
delay(100);
servo2.write(130);
delay(100);
servo3.write(70);
delay(100);
servo2.write(140);
delay(100);
servo3.write(90);
delay(100);
servo2.write(100);
delay(100);
servo3.write(150);
delay(100);
servo2.write(50);
delay(100);
servo3.write(0);                                     
delay(100);
servo2.write(50);
delay(100);
servo3.write(0);
delay(100);
Serial.println(x);
(10);
x=x+1;
loop();}

if(x==1)
{servo1.write(90);
delay(50);
servo2.write(0);
delay(50);
servo3.write(60);
delay(50);
Serial.println(x);
delay(10);
loop();
}}
void finish (){
  
  
servo1.write(90);
delay(50);
servo2.write(0);
delay(50);
servo3.write(180);
delay(50); 

  
  }


void linefollower(){
  


servo2.write(0);
delay(500);
servo3.write(0);
delay(500);
servo1.write(90);
delay(500);

servo2.write(20);
delay(500);
servo2.write(40);
delay(500);
servo2.write(80);
delay(500);
servo2.write(80);
delay(500);
servo3.write(80);
delay(500);
servo2.write(120);
delay(500);

servo1.write(i);///////////
delay(500);
servo2.write(80);
delay(100);
servo3.write(40);
delay(500);
servo2.write(40);
delay(100);
servo2.write(20);
delay(100);
servo2.write(0);
delay(100);
servo3.write(0);
delay(100);
servo1.write(90);
delay(100);

pull();



 Serial.print(i); 
  }

void pull2(){

servo2.write(50);//50
delay(100);
servo3.write(0);
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

//llll
while((ir1==0)&&(ir2==0)&&(ir3==1)&&(ir4==1)&&(ir5==1)&&(ir6==1)&&(ir7==1)&&(ir8==1)&&(ir9==1)&&(ir10==1)&&(ir11==1)&&(ir12==1)){

i=30;
linefollower();  
delay(100); 
}

while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==1)&&(ir5==1)&&(ir6==1)&&(ir7==1)&&(ir8==1)&&(ir9==1)&&(ir10==1)&&(ir11==0)&&(ir12==0)){
  
i=150;
linefollower();  
delay(100);  
}
/////rrrrr
  ///////////////////1/////////////////////////////
while((ir1==0)&&(ir2==1)&&(ir3==1)&&(ir4==1)&&(ir5==1)&&(ir6==1)&&(ir7==1)&&(ir8==1)&&(ir9==1)&&(ir10==1)&&(ir11==1)&&(ir12==1)){
  
i=20;
linefollower(); 
delay(100);  
}
while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==1)&&(ir5==1)&&(ir6==1)&&(ir7==1)&&(ir8==1)&&(ir9==1)&&(ir10==1)&&(ir11==1)&&(ir12==0)){
  
i=160;
linefollower();
delay(100);    
}


  ////3//////////////////////////////////////////////
  
  
  ////turn left/////
while((ir1==0)&&(ir2==0)&&(ir3==0)&&(ir4==1)&&(ir5==1)&&(ir6==1)&&(ir7==1)&&(ir8==1)&&(ir9==1)&&(ir10==1)&&(ir11==1)&&(ir12==1)){
  
i=30;
linefollower();
delay(100);   
}
while((ir1==1)&&(ir2==0)&&(ir3==0)&&(ir4==0)&&(ir5==1)&&(ir6==1)&&(ir7==1)&&(ir8==1)&&(ir9==1)&&(ir10==1)&&(ir11==1)&&(ir12==1)){
  
i=30;
linefollower();
delay(100);   
}
while((ir1==1)&&(ir2==1)&&(ir3==0)&&(ir4==0)&&(ir5==0)&&(ir6==1)&&(ir7==1)&&(ir8==1)&&(ir9==1)&&(ir10==1)&&(ir11==1)&&(ir12==1)){
  
i=60;
linefollower(); 
delay(100);  
}
while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==0)&&(ir5==0)&&(ir6==0)&&(ir7==1)&&(ir8==1)&&(ir9==1)&&(ir10==1)&&(ir11==1)&&(ir12==1)){
  
i=80;
linefollower(); 
delay(100);   
}
while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==1)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==1)&&(ir9==1)&&(ir10==1)&&(ir11==1)&&(ir12==1)){

pull();
delay(100); 
}
   /////////turn right//////
while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==1)&&(ir5==1)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==1)&&(ir10==1)&&(ir11==1)&&(ir12==1)){
  
pull();
delay(100); 
}
while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==1)&&(ir5==1)&&(ir6==1)&&(ir7==0)&&(ir8==0)&&(ir9==0)&&(ir10==1)&&(ir11==1)&&(ir12==1)){
  
i=120;
linefollower(); 
delay(100);  
}
while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==1)&&(ir5==1)&&(ir6==1)&&(ir7==1)&&(ir8==0)&&(ir9==0)&&(ir10==0)&&(ir11==1)&&(ir12==1)){
  
i=130;
linefollower();  
delay(100); 
}
 while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==1)&&(ir5==1)&&(ir6==1)&&(ir7==1)&&(ir8==1)&&(ir9==0)&&(ir10==0)&&(ir11==0)&&(ir12==1)){

i=150;
linefollower(); 
delay(100);  
}
while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==1)&&(ir5==1)&&(ir6==1)&&(ir7==1)&&(ir8==1)&&(ir9==1)&&(ir10==0)&&(ir11==0)&&(ir12==0)){
  
i=160;
linefollower();  
} 
//  //4////////////////////////////////////////////////////////////
//  //////////////////////////turn left /////////////////////////////////////////////
//  
while((ir1==0)&&(ir2==0)&&(ir3==0)&&(ir4==0)&&(ir5==1)&&(ir6==1)&&(ir7==1)&&(ir8==1)&&(ir9==1)&&(ir10==1)&&(ir11==1)&&(ir12==1)){
  
i=30;
linefollower(); 
delay(100);   
}
while((ir1==1)&&(ir2==0)&&(ir3==0)&&(ir4==0)&&(ir5==0)&&(ir6==1)&&(ir7==1)&&(ir8==1)&&(ir9==1)&&(ir10==1)&&(ir11==1)&&(ir12==1)){
  
i=40;
linefollower(); 
delay(100);   
}
while((ir1==1)&&(ir2==1)&&(ir3==0)&&(ir4==0)&&(ir5==0)&&(ir6==0)&&(ir7==1)&&(ir8==1)&&(ir9==1)&&(ir10==1)&&(ir11==1)&&(ir12==1)){
  
i=50;
linefollower();  
delay(100);  
}
while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==0)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==1)&&(ir9==1)&&(ir10==1)&&(ir11==1)&&(ir12==1)){
  
i=70;
linefollower();  
delay(100);  
}
while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==1)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==1)&&(ir10==1)&&(ir11==1)&&(ir12==1)){
  
pull();
delay(100); 
}
////////////////////////////////turn right////////////////////////////////////
while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==1)&&(ir5==1)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==0)&&(ir10==1)&&(ir11==1)&&(ir12==1)){
  
i=110;
linefollower();   
delay(100); 
}
while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==1)&&(ir5==1)&&(ir6==1)&&(ir7==0)&&(ir8==0)&&(ir9==0)&&(ir10==0)&&(ir11==1)&&(ir12==1)){
  
i=130;
linefollower(); 
delay(100);   
}
while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==1)&&(ir5==1)&&(ir6==1)&&(ir7==1)&&(ir8==0)&&(ir9==0)&&(ir10==0)&&(ir11==0)&&(ir12==1)){
  
i=150;
linefollower(); 
delay(100);   
}
while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==1)&&(ir5==1)&&(ir6==1)&&(ir7==1)&&(ir8==1)&&(ir9==0)&&(ir10==0)&&(ir11==0)&&(ir12==0)){
  
i=170;
linefollower();   
delay(100); 
}


//////////////////////////////5////////////////////////////////////////////////////////////////


///////////////////turn left///////////////////////////////
while((ir1==0)&&(ir2==0)&&(ir3==0)&&(ir4==0)&&(ir5==0)&&(ir6==1)&&(ir7==1)&&(ir8==1)&&(ir9==1)&&(ir10==1)&&(ir11==1)&&(ir12==1)){
  
i=20;
linefollower(); 
delay(100);   
}
while((ir1==1)&&(ir2==0)&&(ir3==0)&&(ir4==0)&&(ir5==0)&&(ir6==0)&&(ir7==1)&&(ir8==1)&&(ir9==1)&&(ir10==1)&&(ir11==1)&&(ir12==1)){
  
i=60;
linefollower(); 
delay(100);   
}  
while((ir1==1)&&(ir2==1)&&(ir3==0)&&(ir4==0)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==1)&&(ir9==1)&&(ir10==1)&&(ir11==1)&&(ir12==1)){
  
i=65;
linefollower();  
delay(100);  
}  
while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==0)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==1)&&(ir10==1)&&(ir11==1)&&(ir12==1)){
  
i=90;
linefollower();  
delay(100);  
}  
//////////////////////////////////turn right////////////////////////

while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==1)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==0)&&(ir10==1)&&(ir11==1)&&(ir12==1)){
  
i=90;
linefollower();  
delay(100);  
}  
while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==1)&&(ir5==1)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==0)&&(ir10==0)&&(ir11==1)&&(ir12==1)){
  
i=120;
linefollower();  
delay(100);  
}
while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==1)&&(ir5==1)&&(ir6==1)&&(ir7==0)&&(ir8==0)&&(ir9==0)&&(ir10==0)&&(ir11==0)&&(ir12==1)){
  
i=130;
linefollower();  
delay(100);  
}  
while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==1)&&(ir5==1)&&(ir6==1)&&(ir7==1)&&(ir8==0)&&(ir9==0)&&(ir10==0)&&(ir11==0)&&(ir12==0)){
  
i=130;
linefollower();  
delay(100);  
}
///////////////////////////////////////////////6///////////////////////////


/////////////////////////////////turn left///////////////////////////////////////////////////
while((ir1==0)&&(ir2==0)&&(ir3==0)&&(ir4==0)&&(ir5==0)&&(ir6==0)&&(ir7==1)&&(ir8==1)&&(ir9==1)&&(ir10==1)&&(ir11==1)&&(ir12==1)){
  
i=30;
linefollower(); 
delay(100);   
}  
while((ir1==1)&&(ir2==0)&&(ir3==0)&&(ir4==0)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==1)&&(ir9==1)&&(ir10==1)&&(ir11==1)&&(ir12==1)){
  
i=50;
linefollower(); 
delay(100);   
}
while((ir1==1)&&(ir2==1)&&(ir3==0)&&(ir4==0)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==1)&&(ir10==1)&&(ir11==1)&&(ir12==1)){
  
i=50;
linefollower(); 
delay(100);   
}
while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==0)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==0)&&(ir10==1)&&(ir11==1)&&(ir12==1)){
  
pull();
delay(100); 
}
////////////////////////turn right////////////////////////////////////

while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==1)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==0)&&(ir10==0)&&(ir11==1)&&(ir12==1)){
  
i=150;
linefollower(); 
delay(100);   
}
while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==1)&&(ir5==1)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==0)&&(ir10==0)&&(ir11==0)&&(ir12==1)){
  
i=160;
linefollower(); 
delay(100);   
}
while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==1)&&(ir5==1)&&(ir6==1)&&(ir7==0)&&(ir8==0)&&(ir9==0)&&(ir10==0)&&(ir11==0)&&(ir12==0)){
  
i=170;
linefollower(); 
delay(100);   
}

while((ir1==0)&&(ir2==0)&&(ir3==0)&&(ir4==0)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==0)&&(ir10==0)&&(ir11==0)&&(ir12==0)){
  

+
forward();
}


//////////////////////7/////////////////////////////////////////////
/////////////////////////////left/////////////////////////////////
while((ir1==0)&&(ir2==0)&&(ir3==0)&&(ir4==0)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==1)&&(ir9==1)&&(ir10==1)&&(ir11==1)&&(ir12==1)){
  
i=30;
linefollower();   
delay(100); 
}
while((ir1==1)&&(ir2==0)&&(ir3==0)&&(ir4==0)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==1)&&(ir10==1)&&(ir11==1)&&(ir12==1)){
  
i=40;
linefollower();  
delay(100); 
}


while((ir1==1)&&(ir2==1)&&(ir3==0)&&(ir4==0)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==0)&&(ir10==1)&&(ir11==1)&&(ir12==1)){
  
i=60;
linefollower();  
delay(100);  
}
/////////////////////////////right///////////////////////////
while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==0)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==0)&&(ir10==0)&&(ir11==1)&&(ir12==1)){
  
i=150;
linefollower();  
delay(100);  
}
while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==1)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==0)&&(ir10==0)&&(ir11==0)&&(ir12==1)){
  
i=160;
linefollower();   
delay(100); 
  
  
}
while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==1)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==0)&&(ir10==0)&&(ir11==0)&&(ir12==0)){
  
i=170;
linefollower(); 
delay(100);   
}
/////////////////////////////////8///////////////////////////////////////////////////////////////////////////////
//////////////////left////////
while((ir1==0)&&(ir2==0)&&(ir3==0)&&(ir4==0)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==1)&&(ir10==1)&&(ir11==1)&&(ir12==1)){
  
i=30;
linefollower(); 
delay(100);   
}
while((ir1==1)&&(ir2==0)&&(ir3==0)&&(ir4==0)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==0)&&(ir10==1)&&(ir11==1)&&(ir12==1)){
  
i=40;
linefollower();  
delay(100);  
}
while((ir1==1)&&(ir2==1)&&(ir3==0)&&(ir4==0)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==0)&&(ir10==0)&&(ir11==1)&&(ir12==1)){
  
pull();
delay(100); 
}
////////////////right/////////////

while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==0)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==0)&&(ir10==0)&&(ir11==0)&&(ir12==1)){
  
i=150;
linefollower();
delay(100);    
}
while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==1)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==0)&&(ir10==0)&&(ir11==0)&&(ir12==0)){
  
i=160;
linefollower();  
delay(100);  
}
////////////////////////9///////////////////////////////////
/////////////////////////left/////////////////////////

while((ir1==0)&&(ir2=0)&&(ir3==0)&&(ir4==0)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==0)&&(ir10==1)&&(ir11==1)&&(ir12==1)){
  
i=60;
linefollower();  
delay(100);  
}
while((ir1==1)&&(ir2==0)&&(ir3==0)&&(ir4==0)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==0)&&(ir10==0)&&(ir11==1)&&(ir12==1)){
  
i=65;
linefollower();
delay(100);    
}
////////////////////right////////////////////
while((ir1==1)&&(ir2==1)&&(ir3==0)&&(ir4==0)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==0)&&(ir10==0)&&(ir11==0)&&(ir12==1)){
  
i=150;
linefollower();   
delay(100); 
}
while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==0)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==0)&&(ir10==0)&&(ir11==0)&&(ir12==0)){
  
i=170;
linefollower(); 
delay(100);   
}
////////////////////////10///////////////////////////////////////////////
/////////////////////left////////////////////////////////////////////////


while((ir1==0)&&(ir2==0)&&(ir3==0)&&(ir4==0)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==0)&&(ir10==0)&&(ir11==1)&&(ir12==1)){
  
i=30;
linefollower();  
delay(100);  
}
while((ir1==1)&&(ir2==0)&&(ir3==0)&&(ir4==0)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==0)&&(ir10==0)&&(ir11==0)&&(ir12==1)){
  
pull();
}
while((ir1==1)&&(ir2==1)&&(ir3==0)&&(ir4==0)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==0)&&(ir10==0)&&(ir11==0)&&(ir12==0)){
  
i=170;
linefollower(); 
delay(100);   
}

////////////////////11//////////////////////////
while((ir1==0)&&(ir2==0)&&(ir3==0)&&(ir4==0)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==0)&&(ir10==0)&&(ir11==0)&&(ir12==1)){
  
i=0;
linefollower(); 
delay(100);   
}
while((ir1==1)&&(ir2==0)&&(ir3==0)&&(ir4==0)&&(ir5==0)&&(ir6==0)&&(ir7==0)&&(ir8==0)&&(ir9==0)&&(ir10==0)&&(ir11==0)&&(ir12==0)){
  
i=170;
linefollower();  
delay(100);  
}

//////////////////////////////magic//////////////////////////////////////
while((ir1==1)&&(ir2==1)&&(ir3==1)&&(ir4==1)&&(ir5==1)&&(ir6==1)&&(ir7==1)&&(ir8==1)&&(ir9==1)&&(ir10==1)&&(ir11==1)&&(ir12==1)){
  
i=170;
linefollower();  
delay(100);  
}





}
/////////////////////////////////////////////////////////////////////////////////////the end///////////////////////////////////////////////////////////////////////////////////////////////////
