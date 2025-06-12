//I have used selection sort in this code to sort an integer array. This was to check If I can implement the logics that I learned from python.
// There will be a detailed series on searching and sorting algorithms.
// For now, you can check your learning till Arrays by performing Linear Search, Binary search, Bubble sort and Selection sort.


The coding part starts from down below.

using System;

class Program
{
    static void Main()
    {
        int[] arr = { 2, 4, 3, 1, 5 };

        PrintArray(arr);

        for (int a = 0; a < arr.Length; a++)
        {
            int min = a;

            for (int b = a; b < arr.Length; b++)
            {
                if (arr[b] < arr[min])
                {
                    min = b;
                }
            }
            int temp = arr[a];
            arr[a] = arr[min];
            arr[min] = temp;
        }
        Console.WriteLine("");
        PrintArray(arr);


    }

    static void PrintArray(int[] lst)
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

// Had to comment because it won't work if theres the same main function in the same program folder