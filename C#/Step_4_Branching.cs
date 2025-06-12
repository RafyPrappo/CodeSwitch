using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("Please input your name: ");
        string name = Console.ReadLine();
        Console.WriteLine("Please input your age: ");
        int age = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine($"Hello {name}! You are {age} years old.\nAre you doing well?[y/n]");

        //The Branching Part Starts here

        string cond = Console.ReadLine();

        if ("y" == cond)
        {
            Console.WriteLine("Great! May God keeps you happy.");
        }
        else if ("n" == cond)
        {
            Console.WriteLine($"Don't worry {name}, Allah is always with you.");
        }
        else
        {
            Main();
        }

    }
}

// Had to comment because it won't work if theres the same main function in the same program folder