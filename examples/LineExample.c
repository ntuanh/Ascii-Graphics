#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>


#include "../src/shapes/line.h"

bool checkout() {
    char c = getch(); 
    return (c == 'q' || c == 'Q');
}

int main() {
    int count = 0;
    while (!checkout()) {
        drawLine(20 , 0 , 20 , 10 , '|');
        Sleep(2000);
    }
    return 0;
}


// #include <stdio.h>

// int main() {
//     printf("\033[1;31mThis is red text.\033[0m\n");
//     printf("\033[1;32mThis is green text.\033[0m\n");
//     Sleep(3000);
//     return 0;
// }
