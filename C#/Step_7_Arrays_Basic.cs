// Arrays are used to store a series of data in one place.
// In Python, we mostly use lists instead of arrays.
// We don't have native dynamic lists in C# like Python's, so we use Arrays instead.
// Lists and Arrays are almost the same in functionality, but with some differences.

// Some key differences between an Array and a List are:
// 1. An array must contain elements of the **same type**, while lists (in Python) can mix types.
//    Example: In Python -> [1, "hello", 3.14] is valid, but not in C# arrays.
//    However, C# does allow mixing of int and float by using a `double[]` array.
// 2. Arrays have a fixed size once declared. You can’t resize them later unless you re-create.
// 3. Lists in C# do exist (like `List<T>`), but they are part of the `System.Collections.Generic` namespace and not covered yet.
// 4. We can print a whole list in python using print(List). In C# we have to use manual loops or function[which it self needs manual loops to create] to print an array.

// Syntax Example:
using System;

class Program
{
    static void Main()
    {

        string[] names = { "Rafy", "Tam", "Tim" }; //String type array

        Console.WriteLine("Second Name in Array: " + names[1]); // Indexing is the same as python

        int[] scores = { 85, 90, 78, 92 }; //Integer type array

        Console.WriteLine("Scores:");
        for (int i = 0; i < scores.Length; i++)
        {
            Console.WriteLine($"Score {i + 1}: {scores[i]}");
        }

        double[] mixArray = { 2, 3.5, 4, 7.25, 5 }; // a 'double' type array can hold both int and float

        //The double type Array is printed below

        PrintArray(mixArray);

        Console.WriteLine();

        // Trick: Array Length
        Console.WriteLine("Total elements in mixArray: " + mixArray.Length); //Equivalent to 'len(List)' in python.





    }
    // Let's create a function that prints an Array [Notice: I created the new function inside the Program, not the Main function.]
    static void PrintArray(double[] lst)
    {
        for (int a = 0; a < lst.Length; a++)
        {
            if (a == lst.Length - 1)
            {
                Console.Write(lst[a]);
            }
            else
            {
                Console.Write(lst[a] + " ");
            }
        }
    }

}

// Notes:
// Arrays are ideal for simple fixed-size data
// Not resizable – use List<T> if resizable is needed (you’ll learn that later)
// Use arrays when performance is critical and you know the exact size
