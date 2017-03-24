# Current Status
Right now I am having a memory issue and have been warned by arduino IDE that stability problems may occur.
Global variables use 2,163 bytes (84%) of dynamic memory, leaving 397 bytes for local variables. Maximum is 2,560 bytes. I am trying to cut down but may have to drop a pattern to get them all to fit.  Either way I'm not to worried about it.  


# BlinkyTape Tutorials
Beginner level Blinky Tape Arduino scripts to get you going

The [BlinkyTape](http://blinkinlabs.com/blinkytape/) from 
[BlinkinLabs](http://blinkinlabs.com/) is a 40" strip of 60 LEDs on a flexible 
strip in a water resistant enclosure. It has a Atmega 32u4 processo which is 
compatible with Arduino (as a Leonardo).  

The whole package is great. The people at BlinkLabs are great. Their sample 
programs are cool, but too complicated for true beginners to follow. I'm going 
to provide some very basic Arduino sample programs which I hope will help you 
learn how to program the  BlinkyTape as an Arduino.  

## As an Arduino ##
First, let me explain this Arduino thing. The BlinkyTape has a little board 
attached to it that can store and run programs to control the lights, this 
board also has a button. You can use the Arduino development application on 
your computer to write programs, save them to the board and they will run when 
you provide power to the BlinkyTape. This means you don't have to have your 
computer attached to the BlinkyTape to run your customer light show. 
NOTE: You _can_ use your computer to control the BlinkyTape as well, but I'm 
not going to focus on that in these samples. You can read about 
[other ways to program the BlinkyTape on BlinkinLabs](http://blinkinlabs.com/blinkytape/).

## The Method and Tools ##

When you look at the samples you're not seeing the _**best way**_ to write 
code. I'm merely trying to explain _**a way**_ to make it work. Simply. In a 
way I think is understandable for a beginner. You should also note, that there 
are too many comments in my code compared to what people expect to see in 
normal programs. So, if you're new to programming, you don't need to mimic 
that when you right your own programs.

As of the time I'm writing this, I'm using the following tools and versions:

* [BlinkLabs PatternPaint](http://blinkinlabs.com/blinkytape/patternpaint/) 1.8
* [Arduino](https://www.arduino.cc/en/Main/Software) 1.6.6
* [FAST LED](https://github.com/FastLED/FastLED/releases) 3.1
* [BlinkyTape Samples](https://github.com/Blinkinlabs/BlinkyTape_Arduino/releases) 2.0.0
* Use this [RGB Color Picker](http://www.rapidtables.com/web/color/RGB_Color.htm) 
to determine the RGB values for any color you want to display or to try a 
combination and see what color it is. Colors on these web pickers won't look 
the same on the lights, you'll need to play around to get what you want.

Setup Steps:

* Install PatternPaint - This installs the drivers for the BlinkyTape
* Install Arduino
* Download the zip File of FastLED
* Add the FastLED and BlinkyTape Librararies to Arduino by following these 
steps to [add the library to Ardunio](https://www.arduino.cc/en/Guide/Libraries). 
You can use the "Add .ZIP Library" menu item.

From this point forward all you will need to do is look at the samples. I am 
going to provide extensive comments in the sample code. 


## Further Reading ##

* [FastLed Basic Usage](https://github.com/FastLED/FastLED/wiki/Basic-usage) 
is a great 101 read, but their whole site is a great source of information 
when you're ready to move on to more complex projects.
* [FastLED API Documentation](http://fastled.io/docs/3.1/functions.html) 
explains everything FastLED can do.

---
[Contribute to BlinkyTape Tutorials](CONTRIBUTING.md) | [MIT Open Source License](LICENSE.md)  

I am not affiliated in anyway with BlinkLabs. I just think they're cool.
