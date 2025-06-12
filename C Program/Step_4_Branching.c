#include <stdio.h>
#include <string.h>

int main(){

    printf("Please input your name: ");
    char name[50];
    scanf("%s", name);

    printf("Please input your age: ");
    int age;
    scanf("%d", &age);

    printf("Hello %s! You are %d years old.\nAre you doing well?[y/n]", name, age);
    
    //Branching [If Else Part Starts Here]
    char cond[2];
    scanf("%s", cond);

    if(strcmp("y",cond) == 0){
        printf("Great! May god keeps you happy forever %s.", name);
    }
    else if (strcmp(cond, "n") == 0){
        printf("Don't worry %s, Allah is always with you.", name);
    }
    else{
        return main();
    }
/*
1. I did branching in this code.
2. if = if in python
3. else if = elif in python
4. else = else in python

Now comes, why did I used 'strcmp' [str = string, cmp = comparison]?
In C programming, we cannot compare two strings using two variables like in python [Str1 == Str2]
Thus I had to use "strcmp(str1, str2)" syntax here.

Lastly, I tried to bring recursion here. 
The login is simple, if I put anything other than y or n, it again calls the main function, which starts the code again from the scratch.
*/


    return 0;
}