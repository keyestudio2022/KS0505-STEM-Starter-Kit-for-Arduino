/*
 keyestudio STEM Starter Kit
 Project 10
 Small desktop lamp
 http//www.keyestudio.com
*/
int ledpin=12;// initialize pin 12
int inpin=5;// initialize pin 5
int val;// define val
void setup()
{
pinMode(ledpin,OUTPUT);// set LED pin as “output”
pinMode(inpin,INPUT);// set button pin as “input”
}
void loop()
{
val=digitalRead(inpin);// read the level value of pin 7 and assign if to val
if(val==LOW)// check if the button is pressed, if yes, turn on the LED
{ digitalWrite(ledpin,LOW);}
else
{ digitalWrite(ledpin,HIGH);}
}
//////////////////////////////////////////////////////////////////
