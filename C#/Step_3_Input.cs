using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("Please input your name: ");
        string name = Console.ReadLine();
        Console.WriteLine("Please input your age: ");
        int age = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine($"Hello {name}! You are {age} years old.\nAre you doing well?");

    }
}

// Had to comment because it won't work if theres the same main function in the same program folder