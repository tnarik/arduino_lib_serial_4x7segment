/*
 * SPI7Segment.h
 *
 *  Created on: 28 Apr 2014
 *      Author: tnarik
 */

#ifndef SPI7SEGMENT_H_
#define SPI7SEGMENT_H_

#include <Arduino.h>
#include <SPI.h>

class SPI7SegmentClass {
public:
  void command(char command, char data);
  static void display(char digit1, char digit2, char digit3, char digit4);
  static void number(unsigned short num, unsigned short base);
};

extern SPI7SegmentClass SPI7Segment;

#endif /* SPI7SEGMENT_H_ */
