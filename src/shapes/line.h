#ifndef LINES_H
#define LINES_H

#include "../core/Cursor.h"
#include "../core/Color.h"

void testLines();

// Draw line with ascii code 
void drawLine(int x1, int y1, int x2, int y2 , char material , const char* color);



#endif