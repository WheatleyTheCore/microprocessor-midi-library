/*
 * midi.h
 *
 *  Created on: Jan 17, 2020
 *      Author: glado
 */

#ifndef MIDI_H_
#define MIDI_H_

void SendNote(struct Note c);

struct Note{
	char channel;
	char note;
	char velocity;
};

#endif /* MIDI_H_ */
