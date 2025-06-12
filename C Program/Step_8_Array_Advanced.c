#include <stdio.h>
#include <string.h>



void SortArray(int k[], int n){

    for (int a = 0; a<n-1; a++){
        
        int min_index = a;
        for (int b=a+1; b<n; b++){

            if(k[b]<k[min_index]){

                min_index = b;

            }

        }

        int temp = k[a];
        k[a] = k[min_index];
        k[min_index] = temp;

    }

    return 0;
}

void PrintArray(int k[], int n){

    for (int a = 0; a<n; a++){

        printf("%d ", k[a]);

    }

return 0;

}

int main(){

    int arr[5] = {3,1,2,5,4};
    printf("Before Sorting: ");
    PrintArray(arr,5);

    SortArray(arr, 5);
    printf("\nAfter Sorting: ");
    PrintArray(arr, 5);

    return 0;
}


// INT MAIN()
// The main function must return an int because it's the entry point of the program
// return 0; signals that the programs ended successfully
// Some systems like Linux use this return value to determine success/failure.

//VOID FOR OTHER FUNCTIONS
// We use void when a function doesn't need to return anything.
// When we need a function to return a value then we need int or float.
