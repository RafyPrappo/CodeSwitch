#include <stdio.h>
#include <string.h>

int main() {
    // --------------------------------------------
    // STRING ARRAY
    char string_arr[3][50] = {"Tim", "Tam", "Tum"};
    // Each string can be up to 49 characters (+1 for '\0')
    // Indexing like python.

    printf("String Array: ");
    for (int a = 0; a < 3; a++) {
        if (a == 2) {
            printf("%s", string_arr[a]);
        } else {
            printf("%s ", string_arr[a]);
        }
    }
    printf("\n\n");

    // --------------------------------------------
    // INTEGER ARRAY
    int integer_arr[5] = {10, 20, 30, 40, 50};

    printf("Integer Array: ");
    for (int i = 0; i < 5; i++) {
        if (i == 4) {
            printf("%d", integer_arr[i]);
        } else {
            printf("%d ", integer_arr[i]);
        }
    }
    printf("\n\n");

    // --------------------------------------------
    // DOUBLE ARRAY
    double double_arr[5] = {1.5, 2.0, 3.25, 4.75, 5.0};

    printf("Double Array: ");
    for (int d = 0; d < 5; d++) {
        if (d == 4) {
            printf("%.2f", double_arr[d]);
        } else {
            printf("%.2f ", double_arr[d]);
        }
    }
    printf("\n\n");

    // --------------------------------------------
    // Const string pointer array (readonly)
    const char* string_arr2[] = {"Tim", "Tam", "Tum"};
    const int integer_arr2[] = {1, 2, 3, 4, 5};
    const double double_arr2[] = {1, 2.4, 1.3, 3.3, 5.1, 5};

    printf("Const String Array: ");
    for (int i = 0; i < 3; i++) {
        if (i == 2) {
            printf("%s", string_arr2[i]);
        } else {
            printf("%s ", string_arr2[i]);
        }
    }
    printf("\n");


    // In const array, you can't edit anything in the array after calling it.
    // However, you can always print or use the elements inside it.

    // Want to check?
    // Try editing an element of the const array.
    // Let me show you the editing technique, Then try it on the const array

    int test[5] = {1,2,3,4,5};
    
    printf("Before changing: %d\n", test[2]);
    test[2] = 100;

    printf("After changing: %d\n", test[2]);

    const int const_test_arr = {1,2,3,4,5};

    //Now try 'const_test_arr[2] = 25;' and find out what's the issue.

    return 0;
}



