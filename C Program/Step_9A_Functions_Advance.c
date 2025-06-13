#include <stdio.h>
#include <stdarg.h> //Brought this to use the *args feature of python.[Undeclared number of arguments]

//Now comes a bit tricky yet very fun part of C program Functions.
//Can we initiate functions without knowing how many arguments we would need?
//Yes, lets set that up.

int SumIntegers(int count, ...){

    //The count argument can be named anything. Not part of stdioarg.h
    //C is not as dynamic as others, we have to how many arguments we are passing when we are calling the function
    //count is the number of passed arguments
    //can also consider the count variable as the length of the argument array


    va_list args;
    /*
    # Now, We use predefined macros by C standeard Library to handle the unknown number of arguments.asm
    # va_list is one of these macros
    # However, args is not a fixed thing or macro like va_list. We can name it anything we want. 
    */

    va_start(args, count);

    int total = 0;

    for(int a = 0; a<count; a++){

        int value = va_arg(args, int);

        total += value;

    }
    va_end(args); //cleans up args

    return total;
}

int main() {
    int result1 = SumIntegers(3, 10, 20, 30);
    printf("Sum of 3 numbers: %d\n", result1);

    int result2 = SumIntegers(5, 1, 2, 3, 4, 5);
    printf("Sum of 5 numbers: %d\n", result2);

    return 0;
}
