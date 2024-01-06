using System;
using System.Collections;

namespace CollectionApp
{
    class Program
    {
        static void Main(string[] args)
        {
            Hashtable ht = new Hashtable();
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
                ht.Add(keys[i], names[i]);
            }
            printHashtable(ht);

            if (ht.ContainsValue("Hoshizora"))
            {
                Console.WriteLine("He's already there!");
            }
            else
            {
                ht.Add("000", "Hoshizora");
                printHashtable(ht);
            }

            static void printHashtable(Hashtable ht)
            {
                ICollection htKeys = ht.Keys;
                foreach (string key in htKeys)
                {
                    Console.WriteLine($"{key}: {ht[key]}");
                }
                Console.WriteLine();
            }
            Console.ReadKey();
        }
    }
}
