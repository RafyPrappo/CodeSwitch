//Scope: Where a variable is accessible
//Variable lifetime: How long a variable exists in memory


#include <stdio.h>

int x = 10;  // Global variable

int main() {
    int y = 5;  // Local to main

    if (1) {
        int z = 20;  // Local to this if-block
        printf("Inside block, x = %d\n", x);  // Global accessible
        printf("Inside block, y = %d\n", y);  // Accessible, still in main
        printf("Inside block, z = %d\n", z);  // OK
    }

    // printf("Outside block, z = %d\n", z); Error: z is not accessible here

    for (int i = 0; i < 3; i++) {
        int temp = i * 2;
        printf("Loop temp = %d\n", temp);  // OK inside loop
    }

    // printf("After loop, temp = %d\n", temp); Error: temp is out of scope

    return 0;
}






//Did you notice?
//Even the variable inside loops are not accessible outside the loops.
//C variables inside a function or block only live inside that block (true block scope).
//You cannot access a variable outside its {} curly brace block.
//C doesn’t use global keyword. Instead, you use static for class-level variables.
//Loops, conditionals, and functions each have their own clean scope.