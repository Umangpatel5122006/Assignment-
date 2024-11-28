#include <stdio.h>

// Define an enumeration for color names
enum Color {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    CYAN,
    MAGENTA
};

// Function to get the hexadecimal color code
void displayColorCode(enum Color color) {
    switch(color) {
        case RED:
            printf("RED: #FF0000\n");
            break;
        case GREEN:
            printf("GREEN: #00FF00\n");
            break;
        case BLUE:
            printf("BLUE: #0000FF\n");
            break;
        case YELLOW:
            printf("YELLOW: #FFFF00\n");
            break;
        case CYAN:
            printf("CYAN: #00FFFF\n");
            break;
        case MAGENTA:
            printf("MAGENTA: #FF00FF\n");
            break;
        default:
            printf("Unknown color\n");
    }
}

int main() {
    // Test the function with different color enum values
    displayColorCode(RED);
    displayColorCode(GREEN);
    displayColorCode(BLUE);
    displayColorCode(YELLOW);
    displayColorCode(CYAN);
    displayColorCode(MAGENTA);

    return 0;
}

