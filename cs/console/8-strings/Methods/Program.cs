using System;

namespace StringApp
{
    class StringProg
    {
        static void Main(string[] args)
        {
            string str1 = "This is a test";
            string str2 = "This is a text";

            /* compare strings */
            if (String.Compare(str1, str2) == 0)
            {
                Console.WriteLine("'{0}' and '{1}' are equal.", str1, str2);
            }
            else
            {
                Console.WriteLine("'{0}' and '{1}' are not equal.",
                        str1, str2);
            }

            /* check for a string object */
            if (str1.Contains("test"))
                Console.WriteLine("The sequence 'test' was found");

            /* get a substring from a given index position*/
            string substring = str2.Substring(5);
            Console.WriteLine("Substring: '{0}'\n", substring);

            /* Joining strings */
            string[] starray = new string[] {
                "Down the way nights are dark",
                "And the sun shines daily on the mountain top",
                "I took a trip on a sailing ship",
                "And when I reached Jamaica",
                "I made a stop"
            };

            string str = String.Join("\n", starray);
            Console.WriteLine(str);

            Console.ReadKey();
        }
    }
}
