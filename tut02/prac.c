// Practical code exercise processing integers based on their 
// differential values
// Written by Riley Dean, z5308666
#include <stdio.h>

void error_message() {
    printf("This is an error message\n");
}

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    
    
    if (a < b) {
        error_message();
    } else if (b == 0) {
        error_message();
    } else if (a > b) {
        int expression1 = a / b;
        double expression2 = (a * 1.0) / (b * 1.0);
        printf("%d\n", expression1);
        printf("%.2lf\n", expression2);
    }
    return 0;
}  
