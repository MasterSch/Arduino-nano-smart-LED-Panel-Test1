#include <Arduino.h>
#include "Panel.h"

//create an instance of the panel
Panel panel(32, 64);


void setup() {
	panel.createBufferBG(panel.BLACK);//background red
	//panel.createBufferBG(26);//background red
	
	panel.drawRect(2, 2, 9, 9, panel.YELLOW, true); //yellow filled rectangle top left
	panel.drawRect(0, 0, 63, 11, panel.RED, false); //green hollow rectangle somewhere in the middle
	panel.drawLine(12, 2, 61, 2, panel.GREEN);
	//panel.drawLine(6, 1, 50, 13, panel.BLUE); //white diagonal through nearly the whole frame
	//panel.drawCircle(50, 1, 9, panel.BLUE, false); //hollow blue circle top right
	//panel.drawCircle(11, 25, 5, panel.OCEANBLUE, true); //filled cyan circle bottom left
	/*
	panel.drawRect(0, 0, 7, 7, panel.YELLOW, true); //yellow filled rectangle top left
	panel.drawRect(8, 0, 15, 7, panel.BLUE, true); //yellow filled rectangle top left
	panel.drawRect(16, 0, 23, 7, panel.CYAN, true); //yellow filled rectangle top left
	panel.drawRect(24, 0, 31, 7, panel.GREEN, true); //yellow filled rectangle top left
	panel.drawRect(32, 0, 39, 7, panel.PURPLE, true); //yellow filled rectangle top left
	panel.drawRect(40, 0, 47, 7, panel.WHITE, true); //yellow filled rectangle top left
	*/
}


void loop() {
	panel.displayBuffer(); //makes the buffer visible and the leds all blinky blinky
} 