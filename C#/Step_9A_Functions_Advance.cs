using System;

class Program
{
    static void AddDigits(params int[] digits)
    {
        // So, to use the *args thing in python we use params here.
        // the parameter digits can me named anything but params must be written as params
        // The parameter 'digits' holds any number of arguments passed.

        int total = 0;
        for (int a = 0; a < digits.Length; a++)
        {
            total += digits[a];
        }
        Console.WriteLine($"The total addition comes: {total}");
    }
    static void Main()
    {
        AddDigits(2, 2, 2, 6);
    }
}

//Unfortunately we cannot pass different types of data in these functions yet.