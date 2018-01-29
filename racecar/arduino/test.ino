#include<Servo.h>  
  
Servo servo;  
Servo motor;  
  
void setup()  
{  
  motor.attach(3);  
  servo.attach(9); //attach it to pin 9//UP DOWN  
  motor.writeMicroseconds(1500);   
  servo.write(90);   
   delay(2000);  
}  
void loop()  
{  
servo.write(45);   
  motor.writeMicroseconds(1450);   
}  
