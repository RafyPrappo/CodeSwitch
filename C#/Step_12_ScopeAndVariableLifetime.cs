//Scope: Where a variable is accessible
//Variable lifetime: How long a variable exists in memory

using System;

class Program
{
    // Global variable (in C#, we call this a class-level variable)
    static int x = 10;

    static void DemoScope()
    {
        // Local variable
        int y = 5;
        Console.WriteLine("Inside function, x = " + x); // Accessible
        Console.WriteLine("Inside function, y = " + y); // Accessible
    }

    static void Main()
    {
        DemoScope();

        Console.WriteLine("Outside function, x = " + x); // Still accessible

        // Console.WriteLine("Outside function, y = " + y); Error: y is not in scope here

        // Block scope demo
        for (int i = 0; i < 3; i++)
        {
            int z = i * 2;
            Console.WriteLine("Inside loop, z = " + z);
        }

        // Console.WriteLine("Outside loop, z = " + z); Error: z is not in scope here

        // Lifetime demo
        Counter();
        Counter(); // 'a' is reset every time
    }

    static void Counter()
    {
        int a = 0;
        a += 1;
        Console.WriteLine("Counter value: " + a);
    }
}


//Did you notice?
//Even the variable inside loops are not accessible outside the loops.
//C# variables inside a function or block only live inside that block (true block scope).
//You cannot access a variable outside its {} curly brace block.
//C# doesn’t use global keyword. Instead, you use static for class-level variables.
//Loops, conditionals, and functions each have their own clean scope.