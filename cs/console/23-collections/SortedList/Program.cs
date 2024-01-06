using System;
using System.Collections;

namespace CollectionApp
{
    class Program
    {
        static void Main(string[] args)
        {
            SortedList sl = new SortedList();
            string[] keys = {
                "001", "002", "003", "004",
                "005", "006", "007"};
            string[] names = {
                "Zara Ali",
                "Abida Rehman",
                "Joe Holzner",
                "Mausam Benazir",
                "M. Amlan",
                "M. Arif",
                "Ritesh Saikia"
            };

            for (int i = 0; i < keys.Length; i++)
            {
                sl.Add(keys[i], names[i]);
            }
            printSortedList(sl);

            if (sl.ContainsValue("Hoshizora"))
            {
                Console.WriteLine("He's already there!");
            }
            else
            {
                sl.Add("000", "Hoshizora");
                printSortedList(sl);
            }

            static void printSortedList(SortedList sl)
            {
                ICollection slKeys = sl.Keys;
                foreach (string key in slKeys)
                {
                    Console.WriteLine($"{key}: {sl[key]}");
                }
                Console.WriteLine();
            }
            Console.ReadKey();
        }
    }
}
