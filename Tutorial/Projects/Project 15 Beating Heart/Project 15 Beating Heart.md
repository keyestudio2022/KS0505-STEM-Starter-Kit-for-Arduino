## Project 15: Beating Heart

![6](media/a8fbc1bb0ffd5c9771d5b7dca90fa455.jpeg)

**1.Project Introduction**

A dot-matrix display is an electronic digital display device that displays
information on machines, clocks and watches, public transport departure
indicators and many other devices.

In this project, we use a 8x8 LED dot matrix to make a beating heart.

**2.Project Hardware**

| ![](media/f4146601f8c339ab8dd8d809dd8f2a6f.png) | ![](media/51bae5ab9f402a181a081ac1ec81100a.png)  | ![](media/4acb8663d8eefd6412faf78c4e857d6a.png) | ![](media/1896ff0625b4ab1415733f26319421bb.png) |
|-------------------------------------------------|--------------------------------------------------|-------------------------------------------------|-------------------------------------------------|
| Plus Board\*1                                   | Plus Board Holder                                | 400-Hole Breadboard                             | USB Cable\*1                                    |
| ![](media/d226a1f3c801ac78321f0692143c853e.png) | ![](media/098a2730d0b0a2a4b2079e0fc87fd38b.png)  | ![](media/786dbb1dbed86a2531bd1e6b8dc9620b.png) |                                                 |
| 8\*8 Dot Matrix\*1                              | 220Ω Resistor\*8                                 | Jumper Wire\*10+                                |                                                 |

**3. Principle of 8\*8 dot-matrix**

![](media/0fc4bede28ed1c3b87f5a8e1e53c3939.png)

The external view of a dot-matrix is shown as follows

![](media/b8a10d032797c4874fe344f8758749a8.png)

The internal view of a dot-matrix is shown as follows

![](media/d83ddbc5286ef87ff73c76c5e296c230.png)

The 8\*8 dot-matrix is made up of sixty-four LEDs, and each LED is placed at the
cross point of a row and a column.

When the electrical level of a certain row is 1 and the electrical level of a
certain column is 0, the corresponding LED will lighten. If you want to light
the LED on the first dot, you should set pin 9 to high level and pin 13 to low
level.

If you want to light LEDs on the first row, you should set pin 9 to high level
and pins 13, 3, 4, 10, 6, 11, 15 and 16 to low level.

If you want to light the LEDs on the first column, set pin 13 to low level and
pins 9, 14, 8, 12, 1, 7, 2 and 5 to high level.

**4.Circuit Connection**

![](media/cb0f4fee2c8192ef31d60c3066272ecd.emf)

![](media/533972b1e9bb0d03b5a71946ddfbb23c.png)

**5.Project Code**

/\*

keyestudio STEM Starter Kit

Project 15

Beating Heart

http//www.keyestudio.com

\*/

// 2-dimensional array of row pin numbers:

int R[] = {2,3,4,5,6,7,8,9};

// 2-dimensional array of column pin numbers:

int C[] = {10,11,12,13,14,15,16,17};

unsigned char biglove[8][8] = //the big "heart"

{

0,0,0,0,0,0,0,0,

0,1,1,0,0,1,1,0,

1,1,1,1,1,1,1,1,

1,1,1,1,1,1,1,1,

1,1,1,1,1,1,1,1,

0,1,1,1,1,1,1,0,

0,0,1,1,1,1,0,0,

0,0,0,1,1,0,0,0,

};

unsigned char smalllove[8][8] = //the small "heart"

{

0,0,0,0,0,0,0,0,

0,0,0,0,0,0,0,0,

0,0,1,0,0,1,0,0,

0,1,1,1,1,1,1,0,

0,1,1,1,1,1,1,0,

0,0,1,1,1,1,0,0,

0,0,0,1,1,0,0,0,

0,0,0,0,0,0,0,0,

};

void setup()

{

// iterate over the pins:

for(int i = 0;i\<8;i++)

// initialize the output pins:

{

pinMode(R[i],OUTPUT);

pinMode(C[i],OUTPUT);

}

}

void loop()

{

for(int i = 0 ; i \< 100 ; i++) //Loop display 100 times

{

Display(biglove); //Display the "Big Heart"

}

for(int i = 0 ; i \< 50 ; i++) //Loop display 50 times

{

Display(smalllove); //Display the "small Heart"

}

}

void Display(unsigned char dat[8][8])

{

for(int c = 0; c\<8;c++)

{

digitalWrite(C[c],LOW);//use thr column

//loop

for(int r = 0;r\<8;r++)

{

digitalWrite(R[r],dat[r][c]);

}

delay(1);

Clear(); //Remove empty display light

}

}

void Clear()

{

for(int i = 0;i\<8;i++)

{

digitalWrite(R[i],LOW);

digitalWrite(C[i],HIGH);

}

} //////////////////////////////////////////////////////////

**6.Project Result**

Upload the project code to the Plus development board，the 8\*8 dot matrix
screen shows a beating heart.

![\_DSC5959](media/9f891729c62cc495be0fee7eeb900d79.jpeg)
