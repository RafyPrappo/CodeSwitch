#include <stdio.h>
#include <string.h>

int main(){

    printf("Please input your name: ");
    char name[50];
    scanf("%s", name);

    printf("Please input your age: ");
    int age;
    scanf("%d", &age);

    printf("Hello %s! You are %d years old.\nAre you doing well?", name, age);

    return 0;
}