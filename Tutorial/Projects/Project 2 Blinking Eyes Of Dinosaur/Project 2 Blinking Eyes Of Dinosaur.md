## Project 2: Blinking Eyes Of Dinosaur

**![cute-dinosaur-cartoon-with-prehistoric-background_50699-321](media/df9058668ab098c54424f3117a1c0c5a.jpeg)**

1.  **Project Introduction**

In this project, we will show you a dinosaur with a blinking eye.

We use the digital pin of Arduino to turn on an LED and let it blink, match with
a cartoon dinosaur card we provided, the LDE will become the dinosaur's
twinkling eye.

1.  **Project Hardware**

| ![](media/f4146601f8c339ab8dd8d809dd8f2a6f.png) | ![](media/51bae5ab9f402a181a081ac1ec81100a.png) | ![](media/4acb8663d8eefd6412faf78c4e857d6a.png) | ![](media/1896ff0625b4ab1415733f26319421bb.png) |
|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| Plus Board\*1                                   | Plus Board holder                               | 400-hole Breadboard                             | USB cable\*1                                    |
| ![](media/0b21d8bc0bc39dfb47f691d710c0bb40.png) | ![](media/098a2730d0b0a2a4b2079e0fc87fd38b.png) | ![](media/e9a8d050105397bb183512fb4ffdd2f6.png) | ![](media/760cc4ce3739d60d68329c7c62e570c7.png) |
| Red M5 LED\*1                                   | 220Ω Resistor\*1                                | Jumper Wire\*2                                  | Cartoon dinosaur Card\*1                        |

**Introduction Of Electronic Components**

**1.LED**:

![](media/f50bb5dee55016ccda0047a0d15845e2.png)

LED is a type of semiconductor called "Light Emitting Diode" which is an
electronic device made of semiconductor materials (silicon, selenium, germanium,
etc). It has positive and negative poles. The short leg is the negative pole to
connect GND, and the long one is the positive pole to connect 5V.

![red-led-pinout-schematic](media/f70404aa49540fd7aecae944c7c01f83.jpeg)

**2.** **Five Band Resistor**

A resistor is an electronic component in the circuit, which limits and regulates
the current flow. Its unit is (Ω).

\-Band 1 – First significant digit.

\-Band 2 – Second significant digit.

\-Band 3 – Third significant digit.

\-Band 4 – Multiplier.

\-Band 5 – Tolerance.

![](media/c3df005312cd9f6d4cdae6abf3cddb83.png)

In this kit, we provide three five-band resistors with different resistance
values.

1.  220Ω Resistor\*10

![](media/55c0199544e9819328f6d5778f10d7d0.png)

1.  10KΩ Resistor\*10

![](media/246cf3885dc837c458a28123885c9f7b.png)

1.  1KΩ Resistor\*10

![](media/19f5dfc51adfd79b04c3b164529767ed.png)

**3.** **Breadboard:**

The breadboard is used to build and test circuits quickly before finalizing any
circuit design. The breadboard has many holes which circuit components like ICs
and resistors can be inserted into.

A typical breadboard is shown below:

![](media/612c1381811b2d780d5f6ed6a7ec3701.png)

The bread board has strips of metal which run underneath the board and connect
the holes on the top of the board.

![](media/b45e70b961537035c85878b73d371725.png)

The metal strips are laid out as shown below. Note that the top and bottom rows
of holes are connected horizontally while the remaining holes are connected
vertically.

![](media/d5478bd5eac558252cbc235479d979eb.png)

The first two rows (top) and last two rows (bottom) of the breadboard are used
for positive and for negative.

The conductive layout diagram of the breadboard is shown in the figure above.

The electronics beginners may get confused while connecting the DIP (Dual
In-line Packages) components such as integrated circuits, microcontrollers,
chips, etc.,. The rails are isolated by ravine or crevasse, thus the rows are
not connected to each other on either side. So, the DIP components can be
connected as shown in the figure below.

![](media/50caf14e911c4244779e99445c658db6.png)

![](media/9b66ae2199e77fbc99b7b278dac0b567.png)

**3.Circuit Connection**

Look at the circuit schematic and wiring diagram of the project. Here we use
digital pin 10 and connect an LED to a 220 ohm resistor to avoid high current
damaging the LED. ![](media/6d6a20b1c49a61b26a55642427776094.emf)

**circuit schematic**

![](media/e49c7bb5befa7bf8611cbc2100b9e806.png)

**wiring diagram**

**NOTE:**

How to connect an LED

![](media/42ff6f405dfa128593827de5aa03e94b.png)

How to identify 5 band 220Ω Resistor

![](media/55c0199544e9819328f6d5778f10d7d0.png)

**4.Project Code**

/\*

keyestudio STEM Starter Kit

Project 2

Dinosaur Blink Eyes

http//www.keyestudio.com

\*/

int ledPin = 10; // define digital pin 10.

void setup()

{

pinMode(ledPin, OUTPUT);// define led pin as output.

}

void loop()

{

digitalWrite(ledPin, HIGH); // set the LED on.

delay(1000); // wait for a second.

digitalWrite(ledPin, LOW); // set the LED off.

delay(1000); // wait for a second

}

//////////////////////////////////////////////////////////////////

1.Open up the Arduino IDE and copy the below code into a new sketch.

2.Select the correct Board type and COM port for the Arduino IDE.

3.Click Upload button on Arduino IDE to upload code.

**6.Project Result**

Done uploading. The LED light connected to the D10 pin of the development board
turns on and off every second.

Put the dinosaur card on the LED bulb like the picture below, and you will get a
cute little dinosaur that can continue to blink its eye.

![](media/967d9d81fc010ca220d4d7280afe286d.png)
