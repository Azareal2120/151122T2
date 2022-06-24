// Code that reads in values for velocities, and then calculates the average for the last five
// Written by Riley Dean, z5308666

#DEFINE SIZE 5

#include <stdio.h>

int main (void) {
    // Initializing array as zeroes in case less than 5 values are used
    double velocity_array[SIZE] = {0
        
    int position = 0;
                                
    while (scanf("%lf", &velocity_array[position]) == 1) {
        // Case where position is out of bounds of the array
        if (position > 4) {
            position = 0;
        }
    }
    
    // While loop to calculate the average of the velocities
    int i = 0;
    sum = 0;
    while (i < SIZE) {
        sum = sum + velocity_array[i];
    }
    avg = sum / SIZE;
    printf("The average velocity is %d m/s\n", avg);
    
    return 0;    
}
