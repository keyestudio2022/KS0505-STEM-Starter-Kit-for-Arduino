## Project 5: RGB LED

![RGBColourModel](media/8bf1339719a922f2fbc1e01a4347b4ab.png)

**1.Project Introduction**

![](media/94bdff69e438989d8e0934e57f2e5c00.png)

The RGB led, consisting of three colors（red, green and blue), can emit
different colors by mixing this 3 basic colors.

In this project, we will introduce you RGB LED and show you how to use the Plus
development board.

We also provide a RGB color card for you to understand it easier. Even though
the RGB LED are extremely basic, it’s a great way to introduce yourself or
others to the basics of electronics and coding.

**2.Project Hardware**

| ![](media/f4146601f8c339ab8dd8d809dd8f2a6f.png) | ![](media/51bae5ab9f402a181a081ac1ec81100a.png) | ![](media/35972a8b4cf504ddf9a7b03f46dce974.png)            | ![](media/1896ff0625b4ab1415733f26319421bb.png) |
|-------------------------------------------------|-------------------------------------------------|------------------------------------------------------------|-------------------------------------------------|
| Plus Development Board\*1                       | Plus Board Holder                               | 400-Hole Breadboard                                        | USB Cable\*1                                    |
| ![](media/574f3afaec1576479eeb1f55c18eb371.png) | ![](media/098a2730d0b0a2a4b2079e0fc87fd38b.png) | ![](media/bf491799b5b3d9949f2315abf1bc8f79.png)            | ![](media/73ea4b87dfb6156e5c07b618567a3a51.png) |
| RGB LED \* 1                                    |  220Ω Resistor\*3                               | **Preformed Jumper Wire\*2** **Flexible jumper Wire\*4**   | RGB color Card\*1                               |

**3. Little Knowledge**

The monitors mostly comply with the RGB color standard, and all the colors on
the computer screen are composed of the three colors of red, green and blue
mixed in different proportions.

![](media/5a0792145e8a7d9038bf9de389d75fc6.png)

This RGB LED has 4 pins, one for each color (Red, Green, Blue) and a common
cathode. To change brightness of RGB led, we can use the PWM pins of Arduino.
The PWM pins will give signal with different duty cycles to the RGB led to
obtain different colors.

**4.Circuit Connection**

![](media/12f140a4a18bfe6a05c1bc0d251ff4e3.emf)

![](media/7cfb653a97f0e9a7d333833a30d26139.png)

**NOTE：**

The longest pin (common cathode) of RGB LED is connected to GND.

![](media/1584356c63bf99934ae0810ee02dced3.png)

How to identify 5 band 220Ω Resistor

![](media/55c0199544e9819328f6d5778f10d7d0.png)

**5.Project Code**

/\*

keyestudio STEM Starter Kit

Project 5

Color Secret

http//www.keyestudio.com

\*/

int redpin = 11; //select the pin for the red LED

int bluepin =9; // select the pin for the blue LED

int greenpin =10;// select the pin for the green LED

int val;

void setup() {

pinMode(redpin, OUTPUT);

pinMode(bluepin, OUTPUT);

pinMode(greenpin, OUTPUT);

Serial.begin(9600);

}

void loop()

{

for(val=255; val\>0; val--)

{

analogWrite(11, val);

analogWrite(10, 255-val);

analogWrite(9, 128-val);

delay(1);

}

for(val=0; val\<255; val++)

{

analogWrite(11, val);

analogWrite(10, 255-val);

analogWrite(9, 128-val);

delay(1);

}

Serial.println(val, DEC);

}

//////////////////////////////////////////////////////////////////

1.Open up the Arduino IDE and copy the above code into a new sketch.

2.Select the correct Board type and COM port for the Arduino IDE.

3.Click Upload button to upload the code.

**6.Project Result**

Done uploading! Wait for a few seconds, you can see a colorful LED. You can also
put the RGB card we provide on top of it.

![](media/7843f9f20b2d6f7334f2f885d00c8d43.png)
