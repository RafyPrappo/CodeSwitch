using System;

class Program
{
    static void Main()
    {
        string sentence_ = "This is a sentence";

        string[] words = sentence_.Split("i"); //This splits a sentence by a substring. Equivalent to pythons string.split('Substring')

        for (int a = 0; a < words.Length; a++) //It removes the substring and separates the rest of the part around part then stores them in an array.
        {
            Console.Write($"{words[a]} ");
        }

        Console.WriteLine(sentence_); //But it does not change the original string

        string joined = string.Join("HELLO", words);//It places a certain substring between the strings in an Array
        Console.WriteLine(joined);

        string str1 = "Hi";
        string str2 = "hi";

        Console.WriteLine(str1 == str2); //We can compare strings

        //Notice a thing? Both of the words mean the same, but the H and h are considered different because of the case
        //Is there anything to avoid the case?

        Console.WriteLine(str1.Equals(str2, StringComparison.OrdinalIgnoreCase)); //This ignores the case
        
    }
}