#include <stdio.h>

// Down here is a function where we can print the counting table.
// But we didn't use any loop.
// This is a recursive function.
// A recursive function is a function that calls itself.
// As if you are Indian Baba Ramdev who can kiss his own ass using his yoga skills.

void countingTable(int n, int count) {
    if (count == 10) {
        printf("%d x %d = %d\n", n, count, n * count);
        return;
    }
    printf("%d x %d = %d\n", n, count, n * count);
    countingTable(n, count + 1);
}

// Wait a minute.....
// If the function above is too complex to understand
// Let's make a function that prints a count down

void countdown(int count) {
    if (count == 0) { // Breaking condition
        printf("0\n");
        printf("Go! Go! Go!\n");
        return;
    }
    printf("%d\n", count);
    countdown(count - 1); // Next step
}

int main() {
    countingTable(9, 0);
    printf("The countdown starts now.......... \n");
    countdown(5);
    return 0;
}
