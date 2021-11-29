# laboite EPD
laboite "EPD edition" is a connected electronic paper display that shows a lot of information from the Internetz. This repository contains the ESP32/Arduino firmware that can connect to [lenuage.io](https://lenuage.io/) (a web app that collect data for you and send it back to your laboite device)!

This is the core library providing connectivity, parsing and debug. You will have to install the following libraries to get your laboîte device up and running:
* [ArduinoJson Library v5](https://github.com/bblanchon/ArduinoJson/tree/5.x): json parsing library
* [ESP32 Waveshare EPD Library](https://www.waveshare.com/w/upload/5/50/E-Paper_ESP32_Driver_Board_Code.7z): core EPD library

## Features
* Fetching data from [lenuage.io](https://lenuage.io/) web application
* Store, update and draw a tile on the e-ink display

## Installation guide
This firmware can be uploaded using Arduino IDE, here is a step-by-step guide:
1. Install ESP32 toolchain by following this [guide](https://github.com/espressif/arduino-esp32/blob/master/docs/arduino-ide/boards_manager.md)
2. Install the libraries mentionned before using [Library manager](https://www.arduino.cc/en/Guide/Libraries#toc3)
3. Download this repo as a [.zip](https://github.com/bgaultier/laboite-epd/archive/refs/heads/master.zip)
4. Unzip the archive into your Arduino `/libraries` folder
5. Upload the [laboiteEPD.ino](https://github.com/bgaultier/laboite-epd/blob/master/examples/laboiteEPD/laboiteEPD.ino) example
6. Follow the [guide](https://github.com/laboiteproject/laboite-epd/wiki) to configure your laboite device!
