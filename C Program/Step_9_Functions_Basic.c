#include <stdio.h> 

int FunctionName(){
    
    //That's why we used int like the main function
    //Try Printing Something Here And See What Happens

    return 0;
}

void Void_Function(){

    printf("This is a void type function");
    printf("Meaning it can't return anything, but can print or use other function's returned elements");

}


const char* Hello(){

    return "Hello";
}

//The Functions above does not take any arguments.
//Don't know what arguments are?
//Don't Worry, let's check that out.

void Greet(char* argument){

    printf("%s %s! How are you?", Hello(), argument); //We can call functions in other functions as well
}

//The function above took 1 argument

int main(int count, ...){ 



    FunctionName(); // The functions are called here
    Void_Function();
    
    char name[10];
    printf("\nEnter Your Name: ");
    scanf("%s", name);
    Greet(name);


    return 0;
}


// Now can you make a function that can add two integer values and return the value?