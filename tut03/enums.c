// Sample code for initialising structs using enums
// Written by Riley Dean, z5308666

#include <stdio.h>

enum position {
    laying_down,
    sitting,
    tummy_up
};

struct pet {
    double age;
    enum position body_position;
    int height_above_ground;
};

int main(void) {
    struct pet sample_pet;
    
    sample_pet.age = 10;
    sample_pet.body_position = laying_down;
    sample_pet.height_above_ground = 0;
    
    printf("age: %lf\n", sample_pet.age);
    printf("position: %d\n", sample_pet.body_position);
    printf("height above ground: %d\n",sample_pet.height_above_ground);
}
