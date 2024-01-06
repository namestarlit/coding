using System;
using System.Text.RegularExpressions;

namespace RegExApp
{
    class Program
    {
        private static void ShowMatch(string text, string expr)
        {
            Console.WriteLine("The Expression: " + expr);
            /* throws an exception Matches not in Regex */
            MatchCollection mc = new Regex.Matches(text, expr);

            foreach (Match m in mc)
                Console.WriteLine(m);
        }

        static void Main(string[] args)
        {
            string text = "A Thousand Splendid Suns";

            Console.WriteLine("Matching words that start with 'S': ");
            ShowMatch(text, @"\bS\S*");

            Console.ReadKey();
        }
    }
}
