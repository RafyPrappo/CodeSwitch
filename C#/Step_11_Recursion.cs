using System;
using System.Runtime.InteropServices;


class Program
{
    static void Main()
    {
        CountingTable(9);
        Console.WriteLine("The countdown start now..........");
        Countdown();
    }


    // Down here is a function where we can print the counting table.
    // But we didn't use any loop.
    // This is a recursive function.
    // A recursive function is a function that calls itself.
    // As if you are Indian Baba Raamdev who can kiss his own ass using his yoga skills.
    static void CountingTable(int n, int count = 0)
    {
        if (count == 10)
        {
            Console.WriteLine($"{n} x {count} = {n * count}");
            return;
        }
        Console.WriteLine($"{n} x {count} = {n * count}");
        CountingTable(n, count + 1);
        
    }

    // Wait a minute.....
    // If the function above is too complex to understant
    // Let's make a function that prints a count down

    static void Countdown(int count = 5)
    {
        if (count == 0) //Breaking condition
        {
            Console.WriteLine(0);
            Console.WriteLine("Go! Go! Go!");
            return;
        }
        Console.WriteLine(count);
        Countdown(count - 1); // Next step

    }
}