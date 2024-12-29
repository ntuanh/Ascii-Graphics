#include "rectangle.h"

void rectangle(int x1 , int y1 , int x2 , int y2 , char material , const char* color , int upper_left_corner , int upper_right_corner , int lower_right_corner , int lower_left_corner)
{
    // Draw the double line horizontal 
    drawLine(x1+1 , y1 , x2 -1 , y1 , material , color);
    drawLine(x1+1 , y2 , x2 -1 , y2 , material , color);

    // Draw the double line vertical 
    drawLine(x1 , y1+1 , x1 , y2 -1 , material , color);
    drawLine(x2 , y1+1 , x2 , y2 -1 , material , color);

    drawLine( x1 , y1 , x1 , y1 , (char)upper_left_corner , color );      // Upper left corner 
    drawLine( x2 , y1 , x2 , y1 , (char)upper_right_corner , color );     // Upper right corner 
    drawLine( x2 , y2 , x2 , y2 , (char)lower_right_corner , color );     // Lower right corner 
    drawLine( x1 , y2 , x1 , y2 , (char)lower_left_corner , color );      // Lower left corner 

}

void rectangleSingle( int x1 , int y1 , int x2 , int y2 , const char* color)
{
    // Draw the double line horizontal 
    drawLine(x1+1 , y1 , x2 -1 , y1 , (char)196 , color);
    drawLine(x1+1 , y2 , x2 -1 , y2 , (char)196, color);

    // Draw the double line vertical 
    drawLine(x1 , y1+1 , x1 , y2 -1 , (char)179 , color);
    drawLine(x2 , y1+1 , x2 , y2 -1 , (char)179, color);

    drawLine( x1 , y1 , x1 , y1 , (char)218 , color );      // Upper left corner 
    drawLine( x2 , y1 , x2 , y1 , (char)191, color );       // Upper right corner 
    drawLine( x2 , y2 , x2 , y2 , (char)217 , color );      // Lower right corner 
    drawLine( x1 , y2 , x1 , y2 , (char)192 , color );      // Lower left corner 

}
