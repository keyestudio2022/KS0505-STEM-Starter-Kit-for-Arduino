## Project 12: A Guard Dog

**![intro-1606325430](media/8967549a26dfac52801cd67f0ae51a7a.jpeg)**

**1.Project Introduction**

PIR sensors measure infrared (IR) light radiating from moving objects that emit
heat. The sensor allows you to detect motion of people, animals and cars to
trigger security alarms and lighting. They are used to detect movement and are
ideal for security and safety such as burglar alarms and security lighting
systems.

In this project, we will use a PIR motion sensor, a buzzer, and a cartoon dog
card to make a guard dog that sounds when someone or an animal moves nearby.

1.  **Project Hardware**

| ![](media/f4146601f8c339ab8dd8d809dd8f2a6f.png) | ![](media/51bae5ab9f402a181a081ac1ec81100a.png)                        | ![](media/4acb8663d8eefd6412faf78c4e857d6a.png) | ![](media/1896ff0625b4ab1415733f26319421bb.png) |
|-------------------------------------------------|------------------------------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| Plus Development Board\*1                       | Plus Board Holder                                                      | 400-Hole Breadboard                             | USB Cable\*1                                    |
| ![](media/16008453a2230e4d0324fc5831a723a5.png) | ![](media/d1ea1bb2b2749820cab389d5b85b838b.png) | ![](media/2e0ed860a7b34d364d294599d347d58b.png) | ![](media/069654cf19d990117a2131792faa61f9.png) |
| PIR Motion Sensor\*1                            | Passive Buzzer\*1                                                      | Jumper Wire\*5                                  | Guard dog Paper Card\*1                         |

**3.PIR Motion Sensor Specification**

![](media/8ff894d5f9ff1c793a8f4613f6642ab6.png)

-   Input Voltage 3.3 \~ 5V (6V Maximum)

-   Working Current 15uA

-   Working Temperature -20 \~ 85 ℃

-   Output Voltage High 3V, Low 0V

-   Output Delay Time (High Level) About 2.3 to 3 Seconds

-   Detection Angle 100 °

-   Detection Distance 7 meters

-   Output Indicator LED (When output HIGH, it will be ON)

-   Pin limit Current 100mA

**4.Circuit Connection**

![](media/a3d19f5ba0fe93fda12ce0ac49c53060.emf)

![](media/eb98e7a71af38b783b67358bced97e2f.png)

**5.Project Code**

/\*

keyestudio STEM Starter Kit

Project 12

Guard dog

http//www.keyestudio.com

\*/

int buzzerpin = 8; // buzzer pin

int pirPin = 3; // PIR Out pin

int pirStat = 0; // PIR status

void setup() {

pinMode(buzzerpin, OUTPUT);

pinMode(pirPin, INPUT);

Serial.begin(9600);

}

void loop()

{

pirStat = digitalRead(pirPin);

if (pirStat == HIGH)

{ // if motion detected

digitalWrite(buzzerpin, HIGH); // turn buzzer ON

Serial.println("Hey I got you!!!");

}

else {

digitalWrite(buzzerpin, LOW); // turn buzzer OFF if we have no motion

}

}//////////////////////////////////////////////////////////

1.Open up the Arduino IDE and copy the above code into a new sketch.

2.Select the correct Board type and COM port for the Arduino IDE.

3.Click Upload button to upload the code.

**6.Project Result**

If the PIR motion sensor detects someone moving nearby, the buzzer will sound an
alarm, and click to open the serial monitor on the Arduino IDE, you will see
"Hey I got you!!!".

![](media/31d092b50382cae895ed512b171da3b5.png)
