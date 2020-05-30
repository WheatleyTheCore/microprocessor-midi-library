# microprocessor-midi-library
A library for using midi on a microcontroller. Developed for use on NXP chips, but easy to port to other processors. It was created while making a Midi Sequencer using NXP MC9S08 chips.

## If you are porting this library
Recieving notes should be handeled in an interrupt triggered by a note being received on the UART.
