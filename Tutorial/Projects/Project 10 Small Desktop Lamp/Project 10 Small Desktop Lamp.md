## Project 10: A Small Desk Lamp

![tolomeo_tavolo_gallery4872596-1920x1080](media/e931e1814038a605ad46cd8f42c8ad42.jpeg)

**1.Project Introduction**

In fact, you can use Arduino to turn on an LED. In this project, we will use a
cartoon lamp card, a button switch and an LED to make a small desk lamp.

**2.Project Hardware**

| ![](media/f4146601f8c339ab8dd8d809dd8f2a6f.png)     | ![](media/51bae5ab9f402a181a081ac1ec81100a.png)   | ![](media/4acb8663d8eefd6412faf78c4e857d6a.png) | ![](media/1896ff0625b4ab1415733f26319421bb.png) |
|-----------------------------------------------------|---------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| Plus Development Board\*1                           | Plus Board Holder                                 | 400-Hole Breadboard                             | USB Cable\*1                                    |
| ![1(3)](media/83e781515f358202be0ffe9bb759eda0.png) | ![](media/90c822e2daeab4bea8d16603414101f4.png)   | ![](media/e7610766136fd2bfb0693893d7a9bd04.png) | ![](media/098a2730d0b0a2a4b2079e0fc87fd38b.png) |
| Button switch\*1                                    | Red M5 LED \*1                                    | 10KΩ Resistor\*1                                | 220Ω Resistor\*1                                |
|  ![](media/2e0ed860a7b34d364d294599d347d58b.png)    |  ![](media/738aa1be373c06f4ede61e5a9e9bb50e.png)  |                                                 |                                                 |
| Preformed&Flexible Jumper Wire                      | Desk lamp Paper Card\*1                           |                                                 |                                                 |

**3.Little Knowledge**

The button is a component that connects two points in a circuit when you press
it.

**Schematic Diagrams:**  

![C:\\Users\\zuokejian\\AppData\\Local\\Temp\\ksohtml13604\\wps39.png](media/5e42fde9876f9be810d85a7fb8b331f7.png)
![C:\\Users\\zuokejian\\AppData\\Local\\Temp\\ksohtml13604\\wps40.png](media/8677548f9e756281629430d66ba3a460.png)

**4. Circuit Connection**

![](media/ec1ccba8b74df6c2bcef335c4407a8f4.emf)

![](media/3aa65f2402c733bac96e0e6807c014b0.png)

**NOTE:**

How to connect an LED

![](media/42ff6f405dfa128593827de5aa03e94b.png)

How to identify 5 band 220Ω Resistor and a 5 band 10KΩ Resistor

![](media/55c0199544e9819328f6d5778f10d7d0.png)

![](media/246cf3885dc837c458a28123885c9f7b.png)

**5.Project Code**

/\*

keyestudio STEM Starter Kit

Project 10

Small desktop lamp

http//www.keyestudio.com

\*/

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

1.Open up the Arduino IDE and copy the above code into a new sketch.

2.Select the correct **Board type** and **COM** port for the Arduino IDE.

3.Click **Upload** to upload the code.

**6.Project Result**

Done uploading！We simulate a desk lamp.

When the button is pressed, LED will be on, otherwise, it remains off. In this
way, the small desk lamp project is completed.

![](media/9334673e0ff99e0dcdecaf1d211ba4e9.png)
