using System;

class Program
{
    static void FunctionName() //This function takes no argument.
    {
        Console.WriteLine("This is a simple function");
    }

    static void SecondFunction(int Argument) {//Void type functions can only print and use Arguments from other functions.
        Console.WriteLine($"This is a function that takes 1 integer argument which is: {Argument}");
    }
    static void Nothing()
    {
        Console.WriteLine("This function can call the Greet function");
        string name = "Botmon";
        Console.WriteLine(Greet(name));
    }

    static string Greet(string name)//Only the functions that are not void type can return.
    {
        return $"Hello {name}! How are you?";
    }
    static void Main()
    {
        FunctionName(); //We code openly in python, but in C# take this Main function as that open canvas. So we call most functions here like this.
        SecondFunction(10);
        Console.Write("Please enter your name: ");
        string name = Console.ReadLine();
        string k = Greet(name);
        Console.WriteLine(k);
        Nothing();
    }
}