## Project 3: Little Star

**![stars-in-the-sky-at-christmas-wallpaper](media/3e72f973a485a056a40490cc5c12ca89.jpeg)**

**1.Project Introduction**

In this project, we will learn the PWM control of ARDUINO. PWM is the
abbreviation of Pulse Width Modulation, which is a technology that encodes
analog signal level into digital signal level.

Here, we use PWM to control the brightness of an LED from bright to dark
gradually. Match our customized star card, you will get a flickering star.

**2.Project Hardware**

| ![](media/f4146601f8c339ab8dd8d809dd8f2a6f.png) | ![](media/51bae5ab9f402a181a081ac1ec81100a.png) | ![](media/4acb8663d8eefd6412faf78c4e857d6a.png)  | ![](media/1896ff0625b4ab1415733f26319421bb.png) |
|-------------------------------------------------|-------------------------------------------------|--------------------------------------------------|-------------------------------------------------|
| Plus development Board\*1                       |  Plus Board holder                              | 400-hole Breadboard                              | USB cable\*1                                    |
| ![](media/0b21d8bc0bc39dfb47f691d710c0bb40.png) | ![](media/098a2730d0b0a2a4b2079e0fc87fd38b.png) |  ![](media/5b24da8702086a436708cf74789ff7c8.png) | ![](media/deaf965dd337a13c4c337ce200866c88.png) |
| M5 Red LED\*1                                   |  220Ω Resistor\*1                               | Jumper Wire\*2                                   | Cartoon Little Star Card\*1                     |

**3.PWM Working Principle**

![](media/6549bdbfd4e7b6b2b341012105d655e8.png)

PWM stands for Pulse Width Modulation and it is a technique to control LED’s
brightness, speed of DC motor and servo motor.

The Arduino digital pins either produces 5V (when turned HIGH) or 0V (when
turned LOW). Yet, it output a square wave signal. So if we want to dim a LED, we
cannot get the voltage between 0 and 5V from the digital pin but we can change
the ON and OFF time of the signal. If we will change the ON and OFF time fast
enough then the brightness of the led will be changed.

Before going further, let’s discuss some terms associated with PWM.

TON (On Time): It is the time when the signal is high.

TOFF (Off Time): It is the time when the signal is low.

Period: It is the sum of on time and off time.

Duty Cycle: It is the percentage of time when the signal is high during the time
of period.

So at 50% duty cycle and 1Hz frequency, the led will be high for half a second
and will be low for the other half second. If we increase the frequency to 50Hz
(50 times ON and OFF per second), then the led will be seen glowing at half
brightness by the human eye.

![IMG_256](media/a439e1bd8a4578b43b7188c821d58594.jpeg)

**Arduino and PWM**

The Arduino IDE has a built in function “analogWrite()” which can be used to
generate a PWM signal. The frequency of this generated signal for most pins will
be about 490Hz and we can give the value from 0-255 using this function.

analogWrite(0) means a signal of 0% duty cycle.

analogWrite(127) means a signal of 50% duty cycle.

analogWrite(255) means a signal of 100% duty cycle.

On KEYESTUDIO Plus development board, the PWM pins are 3, 5, 6, 9, 10 and 11.

The PWM pins are labeled with \~ sign.

In this project, you are going to learn how to get the PWM output from the
digital pins of Plus development board and control brightness of LED through
code.

**4.Circuit Connection**

![](media/631d5b7c4be2f2a1dcaf2d5c40d3c042.emf)

![](media/f4e7d048d785776a71b65f758b0d3d20.png)

How to connect an LED

![](media/42ff6f405dfa128593827de5aa03e94b.png)

How to identify 5 band 220Ω Resistor

![](media/55c0199544e9819328f6d5778f10d7d0.png)

**5.Project Code**

/\*

keyestudio STEM Starter Kit

Project 3

Little Star

http//www.keyestudio.com

\*/

int ledPin = 6;

void setup()

{

pinMode(ledPin,OUTPUT);

}

void loop(){

for (int value = 0 ; value \< 255; value=value+1){

analogWrite(ledPin, value);

delay(5);

}

for (int value = 255; value \>0; value=value-1){

analogWrite(ledPin, value);

delay(5);

} }

/////////////////////////////////////////////////////////////////

1.Open up the Arduino IDE and copy the below code into a new sketch.

2.Select the correct Board type and COM port for the Arduino IDE.

3.Click Upload button on Arduino IDE to upload code.

**6.Project Result**

Done uploading. You will see the LED lights gradually light up, and then
gradually darken.

We put the card of a star on the LED, it looks like a twinkling star in the sky

![](media/8107fec2b06ad60fcf281e84cea5b821.png)
