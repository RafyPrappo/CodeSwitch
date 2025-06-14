#include <stdio.h>
#include <string.h> //Without this, we can't use strlen(). These are libraries like in python
#include <strings.h> //To compare strings avoiding case

int main(){

    char str1[] = "Hello";//The length is not declared here 

    printf("The length of the string 'str1' is: %d\n", strlen(str1));
    char str2[10] = "World";//This string can contain 9 characters at max. The 10th one is for \0

    char name[50]; //We just declared here that in some point, I might use a string named "name" that can contain at max 49 Characters.
    printf("Enter your first name: ");
    scanf("%s", name); //Used "scanf" to take an input, I said C that, "Hey, take an input which is a string[%s]"
                       //I also let the program know that the string name is "name" where the input will get stored;
                       //But there is a catch, you can only input something that does not have spaces. Like a full name.
                       //Try it and check what happens.
                       //It there any solution for that?
                       //Of course, anything that we think can be done, can be done.
    
    printf("The first name is: %s\n", name);


    //=======================================================This part is explained better in the Advance files. [Step_10A_StringManipulation_Advance.c]
    // char full_name[50];
    // printf("Input your full name: ");

    // // Clear the input buffer
    // int ch;
    // while ((ch = getchar()) != '\n') {}

    // // while ((ch = getchar()) != '\n' && ch != EOF) {} \\ \\ This is a better solution.


    // fgets(full_name, sizeof(full_name), stdin);

    // printf("The full name is: %s", full_name);
    //========================================================[It's okay to skip it now]


    //Now let's get back to basics

    char haha[] = "haha";

    char hihi[10];

    strcpy(hihi, haha); //This syntax says copy haha, into hihi. Equivalent to python's string.copy()

    printf("%s\n", hihi);

    char hehe[] = "hehe";
    char hoho[] = "hoho";

    strcat(hehe,hoho); // In python, it is 'hyhy = hehe + hoho'

    printf("%s\n", hehe);

    strcat(hoho,hehe);

    printf("%s\n", hoho); //Can you explain why it printed hohohehehoho and not hohohehe

    char comp_1[] = "Rafy";
    char comp_2[] = "Radar";

    if (strcmp(comp_1, comp_2) == 0){
        printf("Same string");
    }
    else if((strcmp(comp_1, comp_2)<0)){
        
        printf("%s is less than %s", comp_1, comp_2);
    }
    else if((strcmp(comp_1, comp_2)>0)){
        
        printf("%s is greater than %s", comp_1, comp_2); //The inequality is compared lexicographically. More like a dictionary.
    }
    else{
        printf("Not same string");
    }
    printf("\n");
    //Now, if we want to compare to strings by their meaning like Word and word.
    //These two words mean the same, but one having a capital char and one not can cause it to return otherwise.

    char comp_3[] = "Word";
    char comp_4[] = "worD";
    
    if(strcasecmp(comp_3,comp_4) == 0){
        printf("Same\n");
    }
    else{
        printf("Not Same\n");
    }

    
    char sentence_[] = "Hello, I am under the water, here too much raining wooooo";
    if (strstr(sentence_, "water")!=NULL){
        printf("Found\n");
    }
    else{
        printf("Not Found\n");
    }


    

    return 0;
}