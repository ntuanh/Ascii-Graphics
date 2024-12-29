#include"line.h"

void testLines()
{
    printf("Test line successful  \n");
}


void drawLine(int x1, int y1, int x2, int y2 , char material)
{
    // Check condition 
    if( x1 != x2 && y1 != y2 )
    {
        setCursorPosition(0, 0);
        printf("Cannot draw a line; the condition x1 = x2 or y1 = y2 is required");
        return ;
    }

    // Draw line 
    setCursorPosition(x1 , y1);

    if(x1 == x2)    // vertical line 
    {
        for(int i = y1 ; i <= y2 ; i++)
        {
            setCursorPosition(x1 , i);
            printf("%c", material);
        }
    }
    else            // horizontal line 
    {
        for(int i = x1 ; i <= x2 ; i++)printf("%c" , material);
    }
}