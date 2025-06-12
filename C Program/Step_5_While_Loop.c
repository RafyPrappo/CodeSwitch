#include <stdio.h>
#include <string.h>

int main(){
    int count = 0;
    while (count<=10){
        printf("Count: %d\n", count);
        count++;
        printf("Want me to stop?[y/n]: ");
        char cond[10];
        scanf("%s", cond);

        if(strcmp(cond,"y")==0){
            break;
        }
    }
    return 0;

}

/*
1. The program can count to 10 starting from 0
2. In every Iteration it asks the user whether he/she wants to continue counting or end it.

*/