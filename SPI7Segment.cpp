/*
 * SPI7Segment.cpp
 *
 *  Created on: 28 Apr 2014
 *      Author: tnarik
 */

#include "SPI7Segment.h"

SPI7SegmentClass SPI7Segment;

void SPI7SegmentClass::command(char command, char data) {
  digitalWrite(SS, LOW); // enlow to select
  SPI.transfer(command);    // command
  if ( command != 0x76 && command != 0x81 ) {
    SPI.transfer(data);    // data
  }
  digitalWrite(SS, HIGH); // high to deselect
}

void SPI7SegmentClass::display(char digit1, char digit2, char digit3, char digit4) {
  digitalWrite(SS, LOW); // low to select
  SPI.transfer(digit1);
  SPI.transfer(digit2);
  SPI.transfer(digit3);
  SPI.transfer(digit4);
  digitalWrite(SS, HIGH); // high to deselect
}

void SPI7SegmentClass::number(unsigned short num, unsigned short base) {
  unsigned short digit[4] = { 0, ' ', ' ', ' ' };
  if ( (base<2) || (base>16) || (num>(base*base*base*base-1)) ) {
    display('x', 'x', 'n', 'o');  // indicates overflow
  } else {
    unsigned short place = 0;
    while ( num && place < 4 ) {
      if ( num > 0 ) digit[place++] = num%base;
      num /= base;
    }

    display(digit[3], digit[2], digit[1], digit[0]);
  }
}
