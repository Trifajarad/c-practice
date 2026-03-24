#include <stdio.h>

// Main function
int main() {

    // Declare variables with different data types
    int age = 20;          // integer type
    float height = 170.5;  // float type
    double weight = 65.75; // double type
    char grade = 'A';      // char type

    // Output text
    printf("Example of Data Types in C\n");

    // Print values
    printf("Age (int) = %d\n", age);
    printf("Height (float) = %.1f\n", height);
    printf("Weight (double) = %.2lf\n", weight);
    printf("Grade (char) = %c\n", grade);

    return 0; // end program
}