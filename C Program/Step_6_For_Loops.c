#include <stdio.h>
#include <string.h>

int main(){

    for (int a = 0; a<=10; a++){

        printf("Count: %d\n", a);
        char cond[10];
        printf("Do you want me to stop?[y/n]: ");
        scanf("%s", cond);

        if (strcmp(cond, "y") == 0){

            break;

        }
    }

    return 0;
}