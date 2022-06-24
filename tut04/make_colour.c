// Code that processes colours based on their integer values
// Written by Riley Dean, z5308666
// WILL NOT WORK

#include <stdio.h>

struct colour {
    int red;
    int green;
    int blue;
};

enum main_colours {
    RED,
    GREEN,
    BLUE,
    OTHER
};

struct colour make_colour(int red_value, int green_value, int blue_value);

int main(void) {
    
    return 0;
}

struct colour make_colour(int red_value, int green_value, int blue_value) {
    struct colour new_colour;
    
    new_colour.red = red_value;
    new_colour.green = green_value;
    new_colour.blue = blue_value;
    
    return new_colour;
}
