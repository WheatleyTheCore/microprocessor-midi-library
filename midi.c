/*
 * midi.c
 *
 *  Created on: Jan 17, 2020
 *      Author: glado
 */

#include "midi.h"
#include "AS1.h"

void SendNote(struct Note c){
	/* TO PORT TO YOUR MICROCONTROLLER
	 * replace the lines that are for sending data with AS1 with lines to send the same data with
	 * whatever code you use to send data over serial with your microcontroller
	 */
	
	int segment = 0;
	while (segment <= 2)
		switch(segment) {
			  case 0:
				  while (AS1_SendChar(c.channel) == ERR_TXFULL); //send c.channel
				  segment++;
				  break;
			  case 1:
				  while (AS1_SendChar(c.note) == ERR_TXFULL);    //send c.note
				  segment++;
				  break;
			  case 2:
				  while (AS1_SendChar(c.velocity) == ERR_TXFULL);//send c.velocity
				  segment++;
				  break;
			  }
		
		return;
	}
