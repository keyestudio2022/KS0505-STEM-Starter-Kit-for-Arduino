## Project 17: Small Fan

![QQ截图20201202115954](media/b2655795eee3742e53d62828858765b8.jpeg)

**1.Project Introduction**

Usually, the GPIO pins of Arduino can only provide a maximum current of 40 mA.
Since even a small 5V DC motor needs 50 mA or higher current to be driven, it is
not recommended to use the Arduino GPIO pins to drive the DC motor.

In this project, we will use a Plus Development Board, a TIP122 triode, a motor
and small fan leaf to make an electric fan.

**2.Project Hardware**

| ![](media/e2bb0f7664c93ce976b0eb85f1fde0f3.png) | ![](media/adaa5e2efd02cf843e6c3615da2ad22f.png)   | ![](media/392d49a7014ac3d21060965cb2d4890c.png) | ![](media/380a022a2268d0f2f81474c8bbe41a85.png) |
|-------------------------------------------------|---------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| Plus Development Board\*1                       | Plus Board Holder                                 | 400-Hole Breadboard                             | USB Cable\*1                                    |
| ![](media/6993379b810d06d45742e05b347270b5.png) | ![](media/098a2730d0b0a2a4b2079e0fc87fd38b.png)   | ![](media/1354952647fa88e49f8f7ce6da577ab0.png) | ![](media/bc48ab79c5e3d8411d1663aceb7f76b4.png) |
| TIP122 Triode\*1                                | 1 KΩ Resistor \*1                                 | 9V Battery \*1                                  | 9V Battery holder \*1                           |
| ![](media/1a29cad703c2725cb9adb9859cdba5a2.png) |  ![](media/773b85eb2123d3ac6e6f2ba9e37784d4.png)  | ![](media/6b2f2cf02ba6c06e4ed76f3a02db17c3.png) |                                                 |
| Fan Motor \*1                                   | Fan Leaf \*1                                      | Jumper Wire\*10+                                |                                                 |

**3.TIP122 Parameters:**

![5-x-TIP122-NPN-Epitaxial-Planar-Silicon-Darlington-Transistor-TO-220-362158974341-3](media/bf53decb61dbeddd0b55f42f5aca06e4.jpeg)

Voltage: Vceo: 100V;  
Power consumption, Pd: 65W;  
Collector DC current: 5A;  
DC current gain hFE: 1000;  
Package type: TO-220;  
Number of pins: 3;  
Total power, Ptot: 65W;  
Number of transistors: 1;  
Transistor type: Power Darlington;  
Maximum continuous current, Ic: 5A;  
Temperature: 25°C;  
Voltage, Vcbo: 100V;  
Current, Ic hFE: 3A;  
Current, Ic maximum: 5A;  
DC current gain hfe, minimum value: 1000;  
Surface mount devices: through-hole mounting;  
Collector current, average value of Ic: 5A;  
Saturation voltage, Vce sat maximum: 2V

![](media/4aa023c72dc0e60665c5b491853bb0c1.png)

**4.Connection Diagram**

![](media/a061d45c132da6aa6f47edb5351199b0.emf)

![](media/0c3be6b959b7a812fada1c510617c9cc.png)

**5.Project Code**

/\*

keyestudio Maker learning kit

Project 17

Small Fan

http//www.keyestudio.com

\*/

// the setup function runs once when you press reset or power the board

void setup() {

// initialize digital pin 3 as an output.

pinMode(3, OUTPUT);

}

// the loop function runs over and over again forever

void loop() {

digitalWrite(3, HIGH); // turn the motor on (HIGH is the voltage level)

delay(2000); // wait for 2 seconds

digitalWrite(3, LOW); // turn the motor off by making the voltage LOW

delay(3000); // wait for 3 second

}

//////////////////////////////////////////////////////////

**6.Project Result**

Upload the project code to the Plus development board.

Insert the fan blade into the motor shaft, you will get a small fan that rotates
for 2 seconds, and stops for 3 seconds, then restart.

![](media/88a56abafa9c92fb0ccda7def08d6b91.png)
