## Project 1: Hello World

![QQ截图20201202134638](media/991660564d5bace5a519255b6336e1ed.jpeg)

**1.Project Introduction**

For Arduino starters, we will begin with something simple. In this project, you
will only need a Plus development board and a USB cable to complete the "Hello
World!" project. It is not only a communication test of your Arduino board and
the PC, but also a primer project in the Arduino world!

**2.Project Hardware**

| ![](media/6763ebb770d395c055698027aa243d0e.png) | ![](media/51bae5ab9f402a181a081ac1ec81100a.png) | ![](media/6c6581147420f8160c8cd4a395032bf1.png) | ![](media/755ba492c38e44d91e8b2c120dc64904.png) | ![](media/1dfb3596b2de7e2e179534ada6f62a03.png) |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| Plus Board\*1                                   | Board Holder                                    | 400-Hole Breadboard                             | USB Cable\*1                                    | Hello World Card\*1                             |

1.  **Assembly Project Platform**

Before starting the project, we will install the Plus Development Board and
400-Hole breadboard onto the board holder.

1.  Remove the adhesive sticker of the breadboard.

![](media/e313ae82179a5c5d0f968e69223efd7b.png)

1.  Attach the breadboard to the board holder

![](media/79ae89bee21b4a27d8893b35580ffa35.png)

1.  Use three plastic columns to fix the PLUS development board on the board
    holder.

![](media/bf49e39b867a3540015b9681ad90bda9.png)

The assembly of the project platform is complete.

**4.Project Code**

A simple **If () statement** programming control structure will be used. Arduino
uses a serial monitor for displaying information such as print statements,
sensor data, and so on. This is a very powerful tool for debugging long codes.
Now for your first code!

/\*

keyestudio STEM Starter Kit

Project 1

Hello World

http//www.keyestudio.com

\*/

int val;//define variable val

void setup()

{

Serial.begin(9600);// set the baud rate at 9600 .

}

void loop()

{

val=Serial.read();// read the instruction or character from PC to Arduino, and
assign them to Val.

if(val=='R')// determine if the instruction or character received is “R”.

{ // if it’s “R”,

Serial.println("Hello World!");// display“Hello World！”string.

}}

/////////////////////////////////////////////////////////////////

**5.Project Result**

Double-click ![](media/675ae7298ce0973df720b2fbbb514caa.png)icon to enter serial
monitor.

![](media/7631b0b9d5266764613a5e796c36ac07.png)

Every time you enter an "R" in the text box and click “send”, the onboard LED on
the plus board will flash once, and the serial monitor will display a Hello
World!

![](media/04829743cb282f4be15705eded39fc9c.png)
