#include <stdio.h>

int main() {
    int num = 10;
    printf("Initial number : %d\n", num); // Output 10

    // Direct update
    num = 15; 
    printf("Updated score: %d\n", num); // Output 15 

    // Update using an expression 
    num = num + 10; 
    printf("Final number: %d\n", num);   // Output 20

    return 0;
}

