///////MIDDLE ir line pin///////



void setup(){
////////////////////////////////////////////////////////////////////////////////////////////////
Serial.begin (9600); 

//digitalWrite(23,HIGH);
////////////////////////////////////////////////////////////////////////////////////////////////
//////////ir  line follow main pin mode////////


}
void loop() {

   
   Serial.print(digitalRead(47)) ;
    Serial.print("\t");
Serial.print(digitalRead(45)) ;
     Serial.print("\t");
     Serial.print (digitalRead(43)) ;
     Serial.print("\t");
      Serial.print(digitalRead(41)) ;
      Serial.print("\t");
   Serial.print(digitalRead(39)) ;
       Serial.print("\t");
      Serial.print(digitalRead(37)) ;
       Serial.print("\t");
        Serial.print(digitalRead(35)) ;
        Serial.print("\t");
    Serial.print(digitalRead(33)) ;
        Serial.print("\t");
        Serial.print(digitalRead(31)) ;
        Serial.print("\t");
       Serial.print(digitalRead(29)) ;
        Serial.print("\t");
        Serial.print(digitalRead(27)) ;
        Serial.print("\t");
      Serial.print(digitalRead(25)) ;
       Serial.print("\t");
        
        
         Serial.print("\n\nSerial.print\n");
        Serial.println("end") ;
         delay(200);

}
