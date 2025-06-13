using System;

class Program
{
    static void Main()
    {

        string str1 = "Hello";
        string str2 = "World";

        string str3 = str1 + " " + str2;

        Console.WriteLine(str3); //We can add two strings and store them in another

        str1 = str1 + " " + str2;

        Console.WriteLine(str1); //We can also add another string to a string and update it

        string multi = @"This is a
        multiline string";

        Console.WriteLine(multi);

        string lower = "rafy";
        lower = lower.ToUpper(); //We can make it uppercase
        Console.WriteLine(lower);

        //Can you guess how we can make it lowercase?

        string name = "Rafy";

        string booL = Convert.ToString(name.Contains("a")); //it checks if the strin contains a certain substring in it. [Equivalent to "a in name" in python]

        Console.WriteLine(booL);

        booL = Convert.ToString(name.StartsWith("b")); //Checks if it starts with a certain string

        Console.WriteLine(booL);
        //Can you guess the syntax of ending?

        int index_ = name.IndexOf("a"); //Tracks the index number of a certain part
        Console.WriteLine(index_);

        index_ = name.IndexOf("af");
        Console.WriteLine(index_); //Even if you are putting more than one characters, it will return the index of the first character.

        //Then why does this has this option fetch the index number of more than one character?
        //Because you might need to find in which index a certain word starts

        string sentence_ = "Hello there, are you thirsty? is he thirsty?";
        //In the string above the substrin 't' is in three words.
        //So if you want to find out at which index the word thirsty starts, you will need the option to search by using more than one character.
        //Let's check it
        index_ = sentence_.IndexOf("thirsty"); //However it always picks the first appearence
        Console.WriteLine(index_);
        //Now can you check what happens if you search something which is not there?
        sentence_ = sentence_.Replace("thirsty", "angry"); //Replaces the first substring with the second string
        Console.WriteLine(sentence_);

        string substrin = sentence_.Substring(1,3); // Cuts a String. Equivalent to python's string[start:end] but the ending in inclusive. Meaning it will also take the ending index.
        Console.WriteLine(substrin);




    } 
}
