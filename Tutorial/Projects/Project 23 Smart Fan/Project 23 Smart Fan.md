## Project 23: Smart Fan

![](media/f2a986b6e95eef0d05b3f5715185351b.png)

**1.Project Introduction**

The sound sensor has a built-in capacitive electret microphone and power
amplifier. It can be used to detect the sound intensity of the environment.

In this project, we use a sound sensor and a DC motor to make a voice-activated
smart fan.

**2.Project Hardware**

| ![](media/381b9513fd5c26a1080e668391493af3.png) | ![](media/d48fbf1b0689c24743ea1f6f2e8c29e9.png)  | ![](media/04c2745033f3d38f782026b9431bcdc5.png) | ![](media/c2d834960b6e9e42e5b1e2a17027cb9b.png) |
|-------------------------------------------------|--------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| Plus Development Board\*1                       | Plus Board Holder                                | 400-Hole Breadboard                             | USB Cable\*1                                    |
| ![](media/1f9f6033ab17403d6cfdc869b5dee640.png) | ![](media/f6fb8e4e0d6ad8053a1272a3fa816774.png)  | ![](media/098a2730d0b0a2a4b2079e0fc87fd38b.png) | ![](media/2b26891f6b3036e26d09bceb89485a69.png) |
| Sound sensor \*1                                | TIP122 Triode\*1                                 | 1 KΩ Resistor \*1                               | 9V Battery \*1                                  |
| ![](media/45860487fae3b44cb68bde8fce6f526e.png) | ![](media/53b4c174d9ac16fb8ecb9772a5dae8e9.png)  | ![](media/018749554d3b583a54eb1534e8028e25.png) | ![](media/648153bfaf3af238ccea1446601e3026.png) |
| 9V Battery holder \*1                           | Fan Motor \*1                                    | Fan Leaf \*1                                    | Jumper Wire\*10+                                |
| ![](media/77fcf46dd9dc46066f13579f827566a9.png) |                                                  |                                                 |                                                 |
| Mic Paper Card\*1                               |                                                  |                                                 |                                                 |

**3.Sound Sensor Little Knowledge**

![](media/8c5550065b07fbc3961172f93a6b40a0.png)

Sound sensor is typically used in detecting the loudness in ambient environment.
The Arduino can collect its output signal by analog input interface.   
The S pin is analog output that is voltage signal real-time output of
microphone. The sensor comes with a potentiometer, so that you can adjust the
signal gain.  
It also has a fixed hole to mount the sensor on any other devices. You can use
it to make some interactive works, such as a voice operated switch.

1.  **Read Sound Sensor Value**

We first use a simple code to read the value of the sound sensor, print it in
the serial monitor, and wire up.

![](media/624d3344fd2bbfef36995895c731fe44.png)

/\*

keyestudio STEM Starter Kit

Project 23.1

Read Sound Sensor Value

http//www.keyestudio.com

\*/

int soundpin=0;// initialize analog pin 0, connected with sound sensor

int val=0;// initialize variable va

void setup()

{

Serial.begin(9600);// set baud rate at “9600”

}

void loop()

{

val=analogRead(soundpin);// read the value of the sensor and assign it to val

Serial.println(val);// display the value of val

delay(1000);// wait for 1 s

}

//////////////////////////////////////////////////////////////////

Upload the code to the Plus development board, open the serial monitor, blow or
clap your hands at the sensor, you can see the sensor's value changes
significantly.

![](media/1a919c6a5875294b9e8035368f3fb071.png)

1.  **Smart Fan Connection Diagram**

Next, we formally enter this project. We use a sound sensor and a small motor to
make a sound-activated fan. Connect to the circuit diagram below.

![](media/9a7115b75a8f92d1f702837c41cf7222.emf)

![](media/2b754d7500359da495096dac81fb26fd.png)

**6.Project Code**

/\*

keyestudio STEM Starter Kit

Project 23.2

Smart Fan

http//www.keyestudio.com

\*/

int motorpin = 3; // set pin for motor

void setup() {

Serial.begin(9600);

pinMode(motorpin,OUTPUT);

}

void loop() {

int Soundvalue = analogRead(A0); // read the input analog value

Serial.println(Soundvalue);

if(Soundvalue\>700)

{

digitalWrite(motorpin,HIGH); // when the analog value is bigger than the set
value, turn on the motor

for(int i=0;i\<5;i++){

delay(1000); // wait for 5s

}

}

else{

digitalWrite(motorpin,LOW); // turn off the motor

}

}

//////////////////////////////////////////////////////////

**7.Project Result**

Upload the code to the PLUS development board. After success, open the serial
monitor, set the baud rate to 9600, and the monitor displays the value of the
sound.

We blow to the sound sensor. When the sound is louder, the value displayed on
the serial monitor is larger. When the value is greater than 700, the fan starts
to work.

![](media/5467b9a87d1edb6cac945cdb200c29d5.png)

\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*next
project\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*
