#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>


#include "../src/shapes/line.h"
#include "../src/shapes/rectangle.h"

bool checkout() {
    char c = getch(); 
    return (c == 'q' || c == 'Q');
}

int main() {
    int count = 0;
    const char* color = "blue";

    while (!checkout()) {
        rectangleSingle(10 , 20 , 60 , 40 , color);
        Sleep(2000);
    }
    return 0;
}
