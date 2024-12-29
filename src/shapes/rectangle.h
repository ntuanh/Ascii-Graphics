#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "line.h"

void rectangle(int x1 , int y1 , int x2 , int y2 , char material , const char* color , int upper_left_corner , int upper_right_corner , int lower_right_corner , int lower_left_corner);
void rectangleSingle( int x1 , int y1 , int x2 , int y2 , const char* color);

#endif