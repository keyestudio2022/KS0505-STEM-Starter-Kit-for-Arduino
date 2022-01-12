## Project 7: Little Bee

![590x332](media/4b8fb1c1be44d0553542fb356bca767e.jpeg)

**1.Project Introduction**

The active buzzer is a sounding component. it is widely used as a sound-making
element on the computer, printer, alarm, electronic toy, telephone, timer and
more. It has an inner vibration source. Simply connect it with 5V power supply,
it can buzz continuously.

In this project, we will use an active buzzer and a cartoon bee card to make a
cute bee that can tweet.

**2.Project Hardware**

| ![](media/f4146601f8c339ab8dd8d809dd8f2a6f.png)                         | ![](media/51bae5ab9f402a181a081ac1ec81100a.png)  | ![](media/4acb8663d8eefd6412faf78c4e857d6a.png) | ![](media/1896ff0625b4ab1415733f26319421bb.png) |
|-------------------------------------------------------------------------|--------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| Plus Development Board\*1                                               |  Plus Board Holder                               | 400-Hole Breadboard                             | USB Cable\*1                                    |
| ![WV[4_HQIMNH(NGS\`TGD8U3U](media/4b4f653a76a82a3b413855493cc58fba.png) |  ![](media/3c4f59569889462f439ac0b98c868861.png) | ![](media/8c184874208b60a70361fe0b90540f54.png) |                                                 |
| Active buzzer\*1                                                        | Jumper Wire\*2                                   | Cartoon Small Bee Card\*1                       |                                                 |

**3. Little Knowledge**

![](media/11ec5ddc982db9928341e858aab94652.png)

The active buzzer inside has a simple oscillator circuit which can convert
constant direct current into a certain frequency pulse signal. Once active
buzzer receives a high level, it will produce an audible beep.

Passive buzzer is an integrated electronic buzzer without vibration source
inside. It must be driven by 2K-5K square wave instead of direct current
signals.

The appearance of the two buzzers is very similar, but the one with a green
circuit board is a passive buzzer, while the other enclosed with a black tape is
an active one. Passive buzzers don't differentiate positive while active
polarity active buzzers do.

As shown below:

![](media/0f9825969867ac2d65bb1a19ed0ad2ab.png)

**4.Circuit Connection**

![](media/638e68031a89a05fe7c7960908254aef.emf)

![](media/f05fc2df838e9e9ed87ab2ea425b4981.png)

NOTE：Note: The positive pole of the active buzzer is connected to pin 8
("+"/long pin), and the negative pole is connected to GND

**5.Project Code**

/\*

keyestudio STEM Starter Kit

Project 7

Little bee

http//www.keyestudio.com

\*/

int buzzerPin = 8;

void setup ()

{

pinMode (buzzerPin, OUTPUT);

}

void loop ()

{

digitalWrite (buzzerPin, HIGH);

delay (500);

digitalWrite (buzzerPin, LOW);

delay (500);

}

//////////////////////////////////////////////////////////////////

1.Open up the Arduino IDE and copy the above code into a new sketch.

2.Select the correct Board type and COM port for the Arduino IDE.

3.Click Upload button to upload the code.

**6.Project Result**

Done uploading！Put the cartoon paper of the little bee on it, You will get a
little bee that can tweet.

![](media/e2d0524b31d72613b199cccff45a1fa5.png)
