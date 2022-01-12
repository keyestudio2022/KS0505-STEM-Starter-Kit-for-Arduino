**Project 6: Battery Billboard**

![](media/d202576cd77eab0e24ef3c61f848b2e9.png)

**1.Project Introduction**

We can see many billboards composed of different colour LEDs in daily life. They
are constantly changing their light to attract customers' attention.

In this project, we will use 5 LEDs and a battery paper card to make an
advertising panel about the battery. The sparkling light string makes it easy
for customers to notice your battery if you are a battery salesperson.

1.  **Project Hardware**

| ![](media/f4146601f8c339ab8dd8d809dd8f2a6f.png) | ![](media/51bae5ab9f402a181a081ac1ec81100a.png) | ![](media/4acb8663d8eefd6412faf78c4e857d6a.png)  | ![](media/1896ff0625b4ab1415733f26319421bb.png) |
|-------------------------------------------------|-------------------------------------------------|--------------------------------------------------|-------------------------------------------------|
| Plus Development Board\*1                       |  Plus Board Holder                              | 400-Hole Breadboard                              | USB Cable\*1                                    |
| ![](media/90c822e2daeab4bea8d16603414101f4.png) | ![](media/098a2730d0b0a2a4b2079e0fc87fd38b.png) | ![](media/748a5d29869fe1db1f4206ef7fc932ae.png)  | ![](media/af270f659f71aaabe00969ebd90e7b90.png) |
| Red M5 LED\*5                                   | 220Ω Resistor\*5                                | Preformed Jumper Wire\*5 Flexible jumper Wire\*6 | battery billboard Card\*1                       |

**3.Circuit Connection**

![](media/0b58cadbfd1227e915473d04d5e8fd17.emf)

![](media/42d0bab095a6a51b21d48568bb963dab.png)

**NOTE:**

How to connect an LED

![](media/42ff6f405dfa128593827de5aa03e94b.png)

How to identify 5 band 220Ω Resistor

![](media/55c0199544e9819328f6d5778f10d7d0.png)

**4.Project Code**

/\*

keyestudio STEM Starter Kit

Project 6

**Advertising running lights**

http//www.keyestudio.com

\*/

int BASE = 2 ;// the I/O pin for the first LED

int NUM = 5; // number of LEDs

void setup()

{

for (int i = BASE; i \< BASE + NUM; i ++)

{

pinMode(i, OUTPUT); // set I/O pins as output

}

}

void loop()

{

for (int i = BASE; i \< BASE + NUM; i ++)

{

digitalWrite(i, LOW); // set I/O pins as “low”, turn off LEDs one by one.

delay(200); // delay

}

for (int i = BASE; i \< BASE + NUM; i ++)

{

digitalWrite(i, HIGH); // set I/O pins as “high”, turn on LEDs one by one

delay(200); // delay

}

}

//////////////////////////////////////////////////////////////////

1.Open up the Arduino IDE and copy the above code into a new sketch.

2.Select the correct Board type and COM port for the Arduino IDE.

3.Click Upload button to upload the code.

**5.Project Result**

Done uploading！The 5 LEDs connected to the D2-D6 pins of the development board
will gradually light up and then gradually turn off, just like a battery being
charged.

![](media/c17b9a05a807f71f97828a5445db7e83.png)
