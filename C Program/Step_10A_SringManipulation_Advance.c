#include <stdio.h>
#include <string.h> //This thing is imported to compare between strings


int main(){


    //Let's start with learning how to take inputs that contain more than one word.
    char full_name[50];
    printf("Input your full name: ");

    fgets(full_name, sizeof(full_name), stdin);

    printf("The full name is: %s\n", full_name);

    //Can you recall that in the Basic file, I used something like 'getchar()'
    //READ CAREFULLY, THIS IS SUPER IMPORTANT
    //WHENEVER WE USE scanf() THE PROGRAM ASKS AN INPUT FROM US RIGHT?
    //WE INPUT OUR THING AND PRESS ENTER, THAT ENTER IS SAVED IN 'INPUT BUFFER'
    //SOMEKIND OF MEMORY OF THE COMPILER, I DON'T KNOW XD
    //BUT THE PROBLEM IS, WHEN WE USE fgets(), that '\n' COMES FIRST
    //THE PROGRAM THINKS LIKE, "OHH, HE TOLD ME TO SKIP A LINE" AND SKIPS THE LINE WITHOUT TAKING ANY INPUT
    //SO, WHATS OUR PROBLEM? THAT EXTRA '\n'
    //IT WILL ALL BE SOLVED IF WE GIVE THAT LONELY '\n' A PURPOSE TO GET USED OF
    //SO, IF WE RUN A LOOP THAT LOOKS FOR THAT AND BREAKS AFTER IT SAYS HI TO THAT EXTRA '\n'
    //NOW A THUMB RULE, ALWAYS CLEAN THE INPUT BUFFER BEFORE USING the first fgets() AFTER USING scanf()
    //HOW DO WE CLEAN INPUT BUFFER?
    //LET'S SEE FOR OURSELVES

    int num;
    printf("Input a number: ");
    scanf("%d", &num);

    //Now get rid of that extra enter

    int chr;
    while((chr = getchar()) !='\n'){}

    printf("\nEnter your full name again: ");
    fgets(full_name, sizeof(full_name), stdin);

    printf("The full name is: %s\n", full_name);

    //So we got rid of the thing
    //But there's always a better way to solve these things. 
    //The advance one in this is-



    int num2;
    printf("Input a number: ");
    scanf("%d", &num2);

    int chr2;
    while((chr2 = getchar()) !='\n' && chr2!=EOF){} //Only a slight update in the loop

    //The syntax means
    //Run the loop if-
    //chr2 which is equal to a certain character caught by getchar() in every iteration-
    //Is not equal to that '\n' and chr2 is not end of line.

    printf("\nEnter your full name again: ");
    fgets(full_name, sizeof(full_name), stdin);

    printf("The full name is: %s\n", full_name);


    return 0;
}