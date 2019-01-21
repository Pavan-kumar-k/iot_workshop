/*******************************************************************************
 *
 *robo.h
 *Author: Pavankumar
 *
 *can be used to move the robo accourdingly   with atmega2560
 ******************************************************************************/


#ifndef ROBO_H_
#define ROBO_H_
#include<avr/io.h>

void init();
void forward();
void reverse();
void bac_left();
void bac_right();
void for_right();
void for_left();
void left();
void right();
void stop();

#endif /* ROBO_H_ */
