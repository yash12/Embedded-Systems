#include <Servo.h>
int led=8,z,y,x,w,v;
int a=A0,b=A1,c=A2,d=A3;
int count5=0;
int count1,count2,count3,count4;
Servo servo1; 
Servo servo2; 
void setup() {
  pinMode(led,OUTPUT);
  servo1.attach(10);
  servo2.attach(11);  
  pinMode(a,INPUT);
  pinMode(b,INPUT);
  pinMode(c,INPUT);
  pinMode(d,INPUT);
Serial.begin(9600);
}

void loop() {
  z=analogRead(a); 
    
if (z>720)
{
  count1=1;
}
else count1=0;
  y=analogRead(b); 
  
if (y>830)
{
  count2=1;
}
else count2=0;
  x=analogRead(c); 
if (x>680)
{
  count3=1;
}
else count3=0;
  w=analogRead(d); 
if (w>950)
{
  count4=1;
}
else count4=0;


if (count1==1 && count2==1 && count3==1 && count4==1)
{
   servo1.write(90);
   servo2.write(90);
   delay(5000);
   servo1.write(0);
   servo2.write(180);
   delay(5000);
   
   }
   else
   {
     servo1.write(90);
     servo2.write(90);
   }
   }

