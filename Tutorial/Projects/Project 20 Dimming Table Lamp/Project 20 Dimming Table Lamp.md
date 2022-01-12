## Project 20: Dimmable Table Lamp

![Taotronics-2020-02](media/4cd83b84c57e1ad7db63a783c74f38f9.jpeg)

**1.Project Introduction**

A potentiometer is a three-terminal resistor with a sliding or rotating contact
that forms an adjustable voltage divider. It work by varying the position of a
sliding contact across a uniform resistance. In a potentiometer, the entire
input voltage is applied across the whole length of the resistor, and the output
voltage is the voltage drop between the fixed and sliding contact.

In this project, we are going to learn how to use Arduino to read the value of
the potentiometer, and make a dimmable table lamp.

1.  **Project Hardware**

| ![](media/381b9513fd5c26a1080e668391493af3.png) | ![](media/d48fbf1b0689c24743ea1f6f2e8c29e9.png)  | ![](media/04c2745033f3d38f782026b9431bcdc5.png) | ![](media/c2d834960b6e9e42e5b1e2a17027cb9b.png) |
|-------------------------------------------------|--------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| Plus Development Board\*1                       | Plus Board Holder                                | 400-Hole Breadboard                             | USB Cable\*1                                    |
| ![](media/8945ce5821e6e5843e1203e299b415f1.png) | ![](media/5005b56c78ba4c863b18abe65a45692e.png)  | ![](media/098a2730d0b0a2a4b2079e0fc87fd38b.png) | ![](media/315673fac39946ee1afbbd9b5596eb9e.png) |
| Potentiometer \*1                               | Red M5 LED \*1                                   | 220Ω Resistor\*1                                | Jumper Wire\*6                                  |
| ![](media/dfbaa2eb52a2f755a86c5400c2d6e4ce.png) |                                                  |                                                 |                                                 |
| Table Lamp Paper Card\*1                        |                                                  |                                                 |                                                 |

**3.Potentiometer Features**

![](media/c397aba3de644bb70ffa7a9139a5499e.png)

Adjustable potentiometer is a kind of resistor and an analog electronic
component, which has two states of 0 and 1(high level and low level). The analog
quantity is different, its data state presents a linear state such as 1 to 1000.

**4.Read Potentiometer Value**

We connect the Adjustable potentiometer to the analog pin of Arduino to read its
value. Please refer to the following wiring diagram for wiring.

![](media/431fd24d5b989ecfad6731f57b4538d2.png)

/\*

keyestudio STEM Starter Kit

Project 20.1

Read Potentiometer Value

http//www.keyestudio.com

\*/

int potpin=A1;// initialize analog pin A1

int val=0;// define val, assign initial value 0

void setup()

{

Serial.begin(9600);// set baud rate at 9600

}

void loop()

{

val=analogRead(potpin);// read the analog value of analog pin 1, and assign it
to val

Serial.println(val);// display val’s value

}

//////////////////////////////////////////////////////////////////

When you rotate the potentiometer knob, you can see the displayed value change.
The reading of analog value is a very common function since most sensors output
analog value. After calculation, you can get the corresponding value you need.

Below figure shows the analog value it reads.

![](media/4a9ebc7cfbb70a796224e22d532a0b32.png)

**5.Dimming Table Lamp Circuit Connection**

In the last step, we read the value of the potentiometer, and now we need to
convert the value of the potentiometer into the brightness of the LED to make a
small desk lamp with adjustable brightness. See the wiring diagram.

![](media/33a8e4d80658117bf55fcdce494a336f.emf)

![](media/da3c61bf2a2c88986fecfdfbef508c67.png)

**6.Project Code**

/\*

keyestudio STEM Starter Kit

Project 20.2

Dimming Table Lamp

http//www.keyestudio.com

\*/

int potpin=A1;// initialize analog pin A1

int ledpin=11;// initialize digital pin 11

int val=0;// define val, assign initial value 0

void setup()

{

pinMode(ledpin,OUTPUT);// set digital pin as “output”

Serial.begin(9600);// set baud rate at 9600

}

void loop()

{

val=analogRead(potpin);// read the analog value of analog pin 1, and assign it
to val

analogWrite(ledpin,val/4);

Serial.println(val);// display val’s value

}

//////////////////////////////////////////////////////////////////

**7.Project Result**

Put the lamp paper card on the potentiometer and the led.

Upload the code to the PLUS development board.

Open the serial monitor, set the baud rate to 9600, and the monitor will display
the value of potentiometer.

When we turn the potentiometer, the brightness of the LED will change.

A model of a small desk lamp equipped with an adjustable brightness switch is
completed. ![](media/0ccddb439148f9ed0f8e217def251778.png)
