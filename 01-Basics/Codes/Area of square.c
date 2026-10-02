#include <stdio.h>

int main() {
    float side, area;

    // Ask the user to input the side length 
    printf("Enter the length of the side of the square: ");
    scanf("%f", &side);

	//area of square = side x side 
    area = side * side;

    // Display the result with 2 decimal places
    printf("The area of the square is: %.2f\n", area);

    return 0;
}

