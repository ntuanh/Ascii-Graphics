#include"Color.h"

void setColor(const char* colorName) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    //List colors
    const char* colors[] = {
        "black", "blue", "green", "cyan",
        "red", "magenta", "yellow", "white",
        "gray", "light blue", "light green", 
        "light cyan", "light red", "light magenta", 
        "light yellow", "bright white"
    };

    // get the number of list colors
    int numColors = sizeof(colors) / sizeof(colors[0]);

    int colorCode = 7; // white

    // Find color code
    for (int i = 0; i < numColors; i++) {
        if (strcmp(colorName, colors[i]) == 0) {
            colorCode = i;
            break;
        }
    }

    // Set color
    SetConsoleTextAttribute(hConsole, colorCode);
}