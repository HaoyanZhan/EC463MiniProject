# EC463MiniProject

Name: Haoyan Zhang
Course: EC463

Mini Project Report

	  To begin this report, I would like to address that my partner dropped the class, and this mini project is done by myself alone. 
  The process of solving raspberry pi pico was interesting for me, I would like to learn more info of this pico. The overall objective 
  of this project is to make the raspberry pi’s led to fade, which I made it to work. The process was quite simple to accomplish, I just 
  
  downloaded the led file from the raspberry pi pico web, and dragged in to the pico folder, all the sudden the led started to blink. 
	  The code in blinc.c is simple to read, the code is saying connect to pin 25, which is the led pin, the while loop turns the led light on 
  and off as long as there are power connected to the pico. The while loop states, turn on the led, second sleep for 1000 mili-seconds, and turn it off, then sleep for another 1000 milliseconds, then this while loop will run forever.
	The second part of the project was to think about another way of implementing the code so that the led will behave differently, but saddly my installation of MinGW is not properly installed ! I tried my best to download cmake and clone the files provide on github. But I cannot get over this error in Fig 1. 

				Fig.1 Error for cmake
                                

	For this project, I am required to implement a new code for the led. My idea is to shorten the sleep duration (500ms) by a half, 
  and extend the sleep time (2000ms)  for not blink on the led. And I made the changes to blinc.c provide by the class. 
