using System;
using System.Collections;

namespace CollectionApp
{
    class Program
    {
        static void Main(string[] args)
        {
            ArrayList arrl = new ArrayList();

            Console.WriteLine("Adding some numbers:");
            int[] numbers = {45, 78, 33, 56, 12, 23, 9};

            foreach (int num in numbers)
            {
                arrl.Add(num);
            }
            printArrayList(arrl);
            Console.WriteLine();

            Console.WriteLine("Capacity: {0}", arrl.Capacity);
            Console.WriteLine("Count: {0}", arrl.Count);

            Console.Write("Content: ");
            printArrayList(arrl);

            Console.Write("Sorted Content: ");
            arrl.Sort();
            printArrayList(arrl);

            Console.Write("Reversed Content: ");
            arrl.Reverse();
            printArrayList(arrl);

            static void printArrayList(ArrayList arrl)
            {
                foreach (int i in arrl)
                {
                    Console.Write($"{i} ");
                }
                Console.WriteLine();
            }

            Console.ReadKey();
        }
    }
}
