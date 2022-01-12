### Project 4: Traffic Light

![maxresdefault (2)](media/7ad8a9f0f7f525c1336f4cdb5e2b2729.jpeg)

**1.Project Introduction**

Traffic lights are prevalent in our ordinary life. According to a certain time
rule, lights operate traffic lights with three colors of red, yellow, and green.
Everyone shall abide by traffic regulations, which can avoid many traffic
accidents.

In this project, we will use a plus development board, a traffic light card, and
some LEDs(red, yellow, and green) to simulate a traffic light.

**2.Project Hardware**

| ![](media/f97e3347cb61f7488cd9337f0af60a7d.png) |  ![](media/4dafe099717a2f3ae79cf3043f55930d.png)  | ![](media/4acb8663d8eefd6412faf78c4e857d6a.png) | ![](media/7039e1e725d01bad841aff298e03f58b.png)          | ![](media/6134a6668046a2385e689b5dc8ff243e.png) |
|-------------------------------------------------|---------------------------------------------------|-------------------------------------------------|----------------------------------------------------------|-------------------------------------------------|
| Plus Board\*1                                   | Plus Board Holder                                 | 400-Hole Breadboard                             |  USB Cable\*1                                            | Yellow M5 LED\*1                                |
| ![](media/72cf2eb70eef97c0f5f45c6255d9c4d7.png) | ![](media/5f0e5bec93d67c279d8e2068468541cc.png)   | ![](media/098a2730d0b0a2a4b2079e0fc87fd38b.png) | ![](media/bf491799b5b3d9949f2315abf1bc8f79.png)          | ![](media/dc99f94889d5d1c7ac4988d49e7dc1dd.png) |
| Green M5 LED\*1                                 | Red M5 LED\*1                                     | 220Ω Resistor\*3                                | **Preformed Jumper Wire\*3** **Flexible jumper Wire\*4** | Traffic Light\*1                                |

**3.Circuit Connection**

![](media/ea8180a67b954e401ceacd68aa86a62d.emf)

![](media/46488bd520cf529bd8aa41fc23f5e7bc.png)

**NOTE:**

How to connect an LED

![](media/42ff6f405dfa128593827de5aa03e94b.png)

How to identify 5 band 220Ω Resistor

![](media/55c0199544e9819328f6d5778f10d7d0.png)

**4.Project Code**

Since it is a simulation of traffic lights, the blinking time of each LED should
be the same as those in traffic lights system.

In this program, we use Arduino **delay ()** function to control delay time,
which is much simpler than C language.

/\*

keyestudio STEM Starter Kit

Project 4

traffic light

http//www.keyestudio.com

\*/

int redled =10; // initialize digital pin 10.

int yellowled =7; // initialize digital pin 7.

int greenled =4; // initialize digital pin 4.

void setup()

{

pinMode(redled, OUTPUT);// set the pin with red LED as “output”

pinMode(yellowled, OUTPUT); // set the pin with yellow LED as “output”

pinMode(greenled, OUTPUT); // set the pin with blue LED as “output”

}

void loop()

{

digitalWrite(greenled, HIGH);//// turn on green LED

delay(5000);// wait 5 seconds

digitalWrite(greenled, LOW); // turn off green LED

for(int i=0;i\<3;i++)// blinks for 3 times

{

delay(500);// wait 0.5 second

digitalWrite(yellowled, HIGH);// turn on yellow LED

delay(500);// wait 0.5 second

digitalWrite(yellowled, LOW);// turn off yellow LED

}

delay(500);// wait 0.5 second

digitalWrite(redled, HIGH);// turn on red LED

delay(5000);// wait 5 second

digitalWrite(redled, LOW);// turn off red LED

}

//////////////////////////////////////////////////////////////////

1.Open up the Arduino IDE and copy the above code into a new sketch.

2.Select the correct Board type and COM port for the Arduino IDE.

3.Click Upload button on Arduino IDE to upload code.

**5.Project Result**

Done uploading. Put the traffic light card on top of the three LEDs, and you
have successfully made a traffic light.

1.  First, the green light will be on for 5 seconds, and then off.

2.  Second, the yellow light will blink for 3 times, and then off.

3.  Third, the red light will be on for 5 seconds, and then off.

4.Continue to run the above 1-3 steps until you cut off the power to the plus
development board.

![](media/9884b1b403e5f27f043157ec05d395c1.png)
