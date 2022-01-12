**KEYESTUDIO Plus STEM Starter Kit For Arduino**

![Your-guide-to-STEM-The-Careers-of-the-Future](media/cc7aee0ad58f5bff6bd627aab29a4806.png)

**Table of Contents**

[1.Introduction 2](#_Toc224)

[2.Part List 3](#_Toc13526)

[3.KEYESTUDIO Plus Development Board 4](#_Toc18729)

[4.Installing Driver For Windows 6](#_Toc10685)

[4.1 Download Software 7](#_Toc25797)

[4.2 Installing Driver For windows 11](#_Toc15633)

[4.3 Configure Arduino IDE 15](#_Toc30962)

[5.Installing Driver For MAC 21](#_Toc5169)

[5.1 Download Software 21](#_Toc15941)

[5.2 Download the Driver of CP2102 22](#_Toc21313)

[5.3 How to Install the Driver of CP2102 22](#_Toc1678)

[6. Install the Libraries to Arduino 35](#_Toc21012)

[6.1 Manual installation 36](#61-manual-installation)

[6.2 Using the Library Manager 38](#_Toc27915)

[6.3 Importing a .zip Library 41](#63-importing-a-zip-library)

# 1.Introduction

Do you want to acquire programming knowledge? As long as you are passionate
about science and dare to explore new things, this STEM starter kit must be your
best choice.

KEYESTUDIO STEM Starter Kit is a programming learning kit based on Arduino. With
a controller, numerous sensors, modules and electronic components, you can do
many different DIY projects.

This kit also comes with 28 projects tutorials, which are entirely suitable for
beginners. Each tutorial has detailed wiring diagrams and fascinating Project
Codes. You can learn electronics, physics, science and programming knowledge.

![](media/f079ff5c918c21b13d13df89a02112b7.png)

**2.Part List**

| ![](media/31dd1da64d161438091b556c6755866e.png)             | ![](media/5a1d3dbf0c5daf6136044b828a777acd.png) | ![](media/cddded49c863ef913bbe2ef3832da74b.png) | ![](media/679ad0aaef0b7b199aaf0967e1aa5367.png) | ![](media/0eead4be7850896afc83477bd7c260d8.png)                            | ![](media/fe78d07424ace0b14edc8d10c03c47ec.png)                                                                                                   |
|-------------------------------------------------------------|-------------------------------------------------------------------------|--------------------------------------------------------------------------|-------------------------------------------------------------------------|----------------------------------------------------------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------|
| Plus board\*1                                               | LED - Blue\*5                                                           | LED - Red\*5                                                             | LED - Yellow\*5                                                         | LED - Green\*5                                                             | LED - RGB\*1                                                                                                                                      |
|  ![](media/a0b8757c0e991f8190854ee98f12b785.jpeg)           |  ![](media/d61e7fd296cc3bcccf00e85bba3c2699.jpeg)                       | ![](media/eb689c29db533dd3e0111262027e4317.jpeg)                         | ![](media/d0a42506a43071b51bc17f9e39caa37c.png)                         | ![](media/60a660b4c23562a74563483b7af3f568.png)    | ![](media/5444cd34945d9cc2dbb825a8be8d49ad.png)                                                                            |
| 220Ω Resistor\*10                                           | 10KΩ Resistor\*10                                                       | 1KΩ Resistor\*10                                                         | 10KΩ Potentiometer\*1                                                   | Buzzer (Active)\*1                                                         | Buzzer (Passive)\*1                                                                                                                               |
|  ![1(3)](media/bb9d77dd35e4ade51a8ece5e8dc05a68.png)        |  ![](media/f2b0fe5c69eada37beef36022ae03974.png)                        | ![](media/7ea5721963dbb796fde0e7c2f3e8e4b5.png)                          |  ![](media/adb25a98a644070c6de378fe98017d8b.png)                        |  ![](media/1745b6de41fea155396b06a5ca6a4e61.png)                           |  ![](media/e5756d5b6983fb93087e49a42482dcb8.png)                                                                                                  |
| Button Switch\*4                                            | Ball Tilt Sensor\*2                                                     | Photo Cell\*3                                                            |  Flame Sensor\*1                                                        | LM35 Temp Sensor\*1                                                        | IC 74HC595N \*1                                                                                                                                   |
|  ![](media/0953e97c6d5fbe2365ba502d52faa328.png)            |  ![](media/c88b647385c69cfc1a6746a3c459ab12.png)                        | ![](media/028ff48959e820b0ed74bf68a8699a13.png)                          |  ![](media/b5a6472f3acfcbde24cab4cf0d7f5534.png)                        |  ![](media/a63cc057fe7d72e8c84bf08d8aad6465.jpeg)  |  ![](media/4dcef77269c876a6b9f372e4dc48e177.png)                                                                                                  |
| TIP122 Transistor\*1                                        | 1 Digital Tube Display\*1                                               | 4 Digital Tube Display\*1                                                | 8\*8 LED Matrix\*1                                                      | 1602 I2C LCD \*1                                                           | IR Receiver\*1                                                                                                                                    |
|  ![1](media/24598c764d5c9b1ca81e2f1d3acb8a90.jpeg)          |  ![](media/5a72dbcd779a6b953f303a2f2b00277e.png)                        | ![](media/fe0e4b296e2d8129fb850ad4e381110f.png)                          | ![](media/0743293fdb1f685db6852b294b96f704.png)                         | ![](media/d79bd9625c547ff470e9d3a318e143ad.png)                            | ![](media/277ad05e0d79dc19d169b5ddc164346e.jpeg) |
| IR Remote Control\*1                                        | Servo Motor\*1                                                          | 130 Motor Propeller\*1                                                   | 130 Dc Motor\*1                                                         | Stepper Driver\*1                                                          | Stepper Motor\*1                                                                                                                                  |
|  ![](media/a6359c8c8a744b8ca1857ae005b9a133.jpeg) |  ![](media/5f2f49d46c3f93c72fd46f0004212c68.png)                        | ![](media/d62773d3ea86ac7d88632b04bd3e3522.png)                          |  ![](media/3e4a43dba0482bff19dcc0de5eb59b5f.png)                        |  ![](media/79e67292dabeff9c55f5d2364cf46bb9.png)                           |  ![](media/7ecb94c97f763c78dad1115578309267.png)                                                                                                  |
| Joystick Module\*1                                          | Sound Sensor\*1                                                         | PIR Motion Sensor\*1                                                     | HC-SR04 Ultrasonic\*1                                                   | DHT11 Sensor\*1                                                            | 400-hole Breadboard\*1                                                                                                                            |
|  ![](media/e93a29744be98e7245f0306618df536c.png)            | ![](media/6a11918efdd9458fcbed69415b01934b.png)                         | ![](media/5d130571cfe87d1d6c0d89ceff8aead9.png)                          | ![](media/e9a8d050105397bb183512fb4ffdd2f6.png)                         | ![](media/7d8df783cfb64a490b273cc6bb70fb0d.png)                            | ![](media/2451840afd558ff2102b1525e1bc0701.png)                                                                                                   |
| Arduino holder\*1                                           | Male to Female Dupont Wire\*10                                          | Female to Female Dupont Wire\*10                                         | Flexible jumper Wire\*20                                                | Preformed Jumper Wire\*1                                                   | 9v Battery Connector\*1                                                                                                                           |
|  ![](media/7e71ea42b148dc784d980b5bf2990987.png)            | ![](media/d27444bffe72222dba842430f6f73327.png)                         | ![](media/9a14e3e38b27fac5f943630d6d757c32.png)                          | ![](media/05039c241aaa99554cd362af3c9f97cf.png)                         | ![](media/7cfc5250d3571f850a68d658472b89cc.png)                            |                                                                                                                                                   |
| Type c USB Cable\*1                                         | Cartoon paper                                                           | Cartoon paper                                                            | Cartoon paper                                                           | Resistor card                                                              |                                                                                                                                                   |

**3.KEYESTUDIO Plus Development Board**

Before we get started with the KEYESTUDIO STEM Starter Kit, we first introduce
the Plus Development Board, it is the core of all the projects.

KEYESTUDIO Plus Development Board is fully compatible with Arduino and contains
all the functions of the Arduino UNO R3, but it is more powerful than the
Arduino UNO R3. It is the best choice to learn how to build circuits and design
your own code. Let us get more detailed information about it.

![](media/faaf0f3d74218e010b280a0768dcaa8c.jpeg)

Serial communication interface: D0 is RX, D1 is TX

PWM interface (pulse width modulation): D3 D5 D6 D9 D10 D11

External interrupt interface: D2 (interrupt 0) and D3 (interrupt 1)

SPI communication interface: D10 is SS, D11 is MOSI, D12 is MISO, D13 is SCK

IIC communication port: A4 is SDA, A5 is SCL

![](media/612a8df0c33fc7bfdebd289ab5532f5f.png)

**4.Installing Driver for Windows**

![](media/6cf6312dc7c7db27794b54d58a8bf80c.png)

**4.1 Download Software**

Arduino IDE is the open-source Software makes it easy to write code and upload
it to the board. When getting the control board, we first need to install
Arduino IDE

Go to the website <https://www.arduino.cc/> and you will see the following page.

Click![](media/6e0a6f98ef8676a190750e098ff76bc2.png)and![](media/547851627850831b48f17aeb3e81d748.png)

![](media/727402001c0b10b4e2eef5e499608176.png)

Then you will see a page where you can download the latest version of the IDE.
There are the Installer (.exe) and the Zip packages you can choose for Windows.
We suggest you use the first one that installs directly everything you need to
use the Arduino Software (IDE), including the drivers. With the Zip package you
need to install the drivers manually. The Zip file is also useful if you want to
create a portable installation.

![](media/52eaf19f7ee28e4d1423f7708e729b0f.png)

Pull down this page, you can also click "previous version of the current
release" to enter another page to select and install the previous version of
Arduino Software.

![](media/04f8643528dca7aaebda7d8df99f5079.png)

In this project, we choose Installer (.exe) for Windows.

Click Windows Win 7 and newer and JUST DOWNLOAD.

![](media/59e4b1696dc54df8dff23697fb6514b3.png)
![](media/605f31f08994ddf5ef76aef7894ec2c5.png)

The download file: ![](media/59e5eb3f8f5f2ccfadcf96c0c4e7afad.png)

Double-click the arduino IDE (.exe) file

Choose "I Agree" to see the following interface.

Choose "Next" to see the following interface.

Press "Install" to initiate installation.

![](media/3353869ad7bd2913c719aa7730debc8b.png)

![](media/30832261dfc5601bf61551afcdc8cb96.png)

![](media/6b9ce920fd6a251edd703f6d8cff6d7b.png)

If the following interface appears, you should choose “Install”.

![](media/85b29de2aa791ecc77280ccde91e53c5.png)

## 4.2 Installing Driver on Windows

Before using the KEYESTUDUO Plus Control Board, you must install the driver of
it, otherwise it will not communicate with computer.

Unlike the USB series chip (ATMEGA8U2) of the Arduino UNO R3, the KEYESTUDIO
Plus Development Board is used the CP2102 chip USB series chip and USB type C
interface.

The driver of the CP2102 chip is included in 1.8.0 version and newer version of
Arduino IDE. Usually, you connect the board to the computer and wait for Windows
to begin its driver installation process. After a few moments, the process will
succeed.

If the driver installation process fail, you need to install the driver
manually.

Note:

1\. Please make sure that your IDE is updated to 1.8.0 or newer version

2.If the version of Arduino IDE you download is below 1.8, you should download
the driver of CP2102 and install it manually.

Link to download the driver of CP2102:

[**https://fs.keyestudio.com/CP2102-WIN**](https://fs.keyestudio.com/CP2102-WIN)

To install the drive manually, open the device manager of computer.

Right click Computer----- Click Properties-----Click Device Manager.

Look under Ports (COM & LPT) or other device.

A yellow exclamation mark means that the CP2102 driver installation failed.

![](media/5d3921d98a5be791b0b5166164b389e7.png)

Double-click the font with yellow exclamation mark and clich “OK”

![](media/0946d3e3d322e66303a5e3fec0bb53c0.png)

Click “browse my computer for updated driver software”.

![](media/cd61996b0c0a7f2e897c5517d10b7f4f.png)

Navigate to the "Drivers" folder of the Arduino Software you have download and
click “Next” to install the drive.

![](media/3ed15965a3fd90293f911e6ed75057ec.png)

The driver is installed successfully.

![](media/45ff508357b0e60f7ffc3dd2e9602e9a.png)

Open device manager, we will find the yellow exclamation mark disappear. The
driver of CP2102 is installed successfully.

![](media/6ec68bee80c913c6ad392c6e7898ed36.png)

## 4.3 Configure Arduino IDE

After the driver is successfully installed, it’s time to configure the IDE to
use the same device and port to start uploading code.

For the KEYESTUDIO Plus Control Board, we should navigate to Tools \> Board \>
and select Arduino Uno(as shown below). However, if you are using a different
board (i.e., not the Arduino Uno or KEYESTUDIO Plus Control Board), you must
select the proper board!

![](media/ec5ad8ed18812bdc8aefb76313f2f098.png)

Then select the correct COM port.

You can see the corresponding COM port after the driver is successfully
installed.

![](media/6ec68bee80c913c6ad392c6e7898ed36.png)

Navigate to Tools \> Port \>COM7

![](media/cb4e03f6827a9dc3261d3743d22dedcd.png)

The function of each symbol in the Arduino IDE toolbar.

![](media/2598b31529ac4bff88630522b97b6c41.png)

A- verify whether there is any compiling mistakes or not.

B- upload the sketch to your Arduino board.

C- create shortcut window of a new sketch.

D- directly open an example sketch.

E- save the sketch.

F- send the serial data received from board to the serial monitor.

4.4 Start First Program

Click File -\> Examples -\> 01.Basics -\>Blink

![](media/6c85a7eabc1d4d63c7427bda9153da97.png)

When the sketch window opens, you can see the entire sketch in the window.

![](media/18078fd234f3398adecd4c8714a42800.png)

Choose the correct board type and COM port

Click![IMG_275](media/9c9158a5d49baa740ea2f0048f655017.png)to upload the code.

![](media/926ebed167235f3661201759c82e7e83.png)

Dode uploarding!

The onboard LED lights on for 1s, lights off for 1s.

Congratulation, you finish the first program.

**5.Installing Driver on MAC**

![](media/a6fc83596009c574d8e29ef383748549.png)

5.1 Download Software

Click and download Arduino IDE for MAC system :

![](media/33ee86c268de74e5a50ee5b35eb5b26a.png)

5.2 Download the Driver of CP2102

<https://fs.keyestudio.com/CP2102-MAC>

5.3 How to Install the Driver of CP2102

Connect the Plus development board to your computer, and open Arduino IDE

![IMG_256](media/7998d9570986e1f22474d9dce796cba3.png)

Click Tools to configure Board and Port: Arduino Uno and /dev/cu.usbserial-0001

![IMG_257](media/37689ea487b506d66f8ee82a8e1418b9.png)

Tap Upload to upload code, if burn successfully, you will view done uploading.

![IMG_258](media/4c804ad604a9fc682d5c472387039dfc.png)

**Note: If burn unsuccessfully, you need to install driver of CP2102, please
continue to follow the instructions as below:**

Download the driver of CP2102:

[**https://www.silabs.com/products/development-tools/software/usb-to-uart-bridge-vcp-drivers**](https://www.silabs.com/products/development-tools/software/usb-to-uart-bridge-vcp-drivers)

1.Select Mac OSX edition

![IMG_259](media/49305410cee58d158659096b97febe4b.png)

2.Unzip the downloaded package

![IMG_260](media/8dced2768d5f86d3d0c3f6076d87a9a8.png)

3.Open folder and double-click SiLabsUSBDriverDisk.dmg file.

![IMG_261](media/61ae3e706a1c4afa7948d5fb2e797a6d.png)

4.You will view the following files as follows:

![IMG_262](media/3ffd0525e16492ede92bdb8c84198db9.png)

5\. Double-click Install CP210x VCP Driver, tick Don’t warn me and tap Open

![IMG_263](media/14f6ebb088e654abc2f0149645e34ed1.png)

6\. Tap Continue

![IMG_264](media/a243872cdbb520e4d298c006e001fff5.png)

7\. Tap Continue and Agree

![IMG_265](media/ae367c1894df6745e46bbdfc460c1f99.png)

8.Click Continue and input your password

![IMG_266](media/27b7214283d7f76aba3557dd629bd965.png)

![IMG_267](media/29bbca3360d806164717733460574356.png)

9.Select Open Security Preferences

![IMG_268](media/ca6bc6e536202f07a53c09201a0996ff.png)

10.Click the lock to unlock security & privacy preference.

![IMG_269](media/379caa1889f4a45614b27c9b2b934869.png)

![IMG_270](media/88a1b169a192ee6c49e95947d6287fc2.png)

11.Then click Allow

![IMG_271](media/19e43624efde1b223800201c944d25e9.png)

12.Back to installation page, and wait to install.

![IMG_272](media/bb0e17afd8bad8b8013f19d7a9da0fd9.png)

13.Successfully installed

![IMG_273](media/3bd5bb3752abf97e9bab6bf950a75bed.png)

14.Then enter ArduinoIDE, click Tools and select Board: Arduino Uno and
/dev/cu.SLAB_USBtoUAPT

![IMG_274](media/73aed810d216d7da3a3ce9cc0e4dba4a.png)

15.Click![IMG_275](media/9c9158a5d49baa740ea2f0048f655017.png) to upload code
and you will see “Done uploading”.

![IMG_276](media/d918e2e31a9632f8b272a16595c46a83.png)

**6. Import Libraries**

What are Libraries ?

[Libraries](https://www.arduino.cc/en/Reference/Libraries) are a collection of
code that makes it easy for you to connect to a sensor,display, module, etc.

For example, the built-in LiquidCrystal library helps talk to LCD displays.
There are hundreds of additional libraries available on the Internet for
download.

The built-in libraries and some of these additional libraries are listed in the
reference（https://www.arduino.cc/en/Reference/Libraries）.

How to Install a Library

## 6.1 Manual installation

When you want to add a library manually, first quit the Arduino application,
then you need to download library as a ZIP file, expand it and put in the proper
directory.

For example, we will install the IR Remote Library which can be found on GitHub:
<https://github.com/shirriff/Arduino-IRremote>

First, download the library as a ZIP, which is done by clicking the green “Code”
button and then clicking “Download ZIP”.

![](media/bb6556490a4d698496daa663fb73dca2.png)

Once downloaded, Unzip the the IR Remote Library package.

![](media/e7c0029a64d4ca9b4d5f6948ba60d7c5.png)

Then navigate to your Arduino folder.

![](media/a67a5b5921be4dbc1b0ce92627111d15.png)

Open the“Libraries”folder in the Arduino folder and then drag the
“Arduino-IRremote-master”folder into the libraries folder.

The library file is manually installed.

![](media/b9ddb20f044a39b304fffed86213908c.png)

**6.2 Using the Library Manager**

To install a new library into your Arduino IDE you can use the Library Manager
(available from IDE version 1.6.2). Open the IDE and click to the "Sketch" menu
and then Include Library \> Manage Libraries.

![](media/2f29b52c89128ddcdca2d9230c1d8642.png)

Then the Library Manager will open and you will find a list of libraries that
are already installed or ready for installation. In this example we will install
the Bridge library. Scroll the list to find it, click on it, then select the
version of the library you want to install. Sometimes only one version of the
library is available. If the version selection menu does not appear, don't
worry: it is normal.

![](media/57ee039a215b037ab70828ee17bf65d8.png)

Finally click on install and wait for the IDE to install the new library.
Downloading may take time depending on your connection speed. Once it has
finished, an Installed tag should appear next to the Bridge library. You can
close the library manager.

![](media/d541fe0d1afec4f39ca9eb4c356f8588.png)

You can now find the new library available in the Sketch \> Include Library
menu.

## 6.3 Importing a .zip Library

Open the Arduino IDE, navigate to Sketch \> Include Library. At the top of the
drop down list, select the option to "Add .ZIP Library''.

![](media/6ce4a37da8c76a5fc07c4f46a00aa9be.png)

We will install the IR Remote Library which can be found on GitHub:
<https://github.com/shirriff/Arduino-IRremote>

First, download the library as a ZIP, which is done by clicking the green “Code”
button and then clicking “Download ZIP”.

Navigate to the .zip file's location and open it.

![](media/582a73a83b788cca91a42bc92e0c4e7e.png)

Return to the Sketch \> Import Library menu.

You should now see the library at the bottom of the drop-down menu.
