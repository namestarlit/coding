using System;

namespace ArrayApp
{
    class MyArray
    {
        static void Main(string[] args)
        {
            /* declare and define array */
            int[] list = {34, 72, 13, 44, 25, 30, 10};

            /* copy array */
            int[] tmp = list;

            Console.Write("Original Array: ");
            foreach(int i in list)
                Console.Write(i + " ");
            Console.WriteLine();

            /* reverse the array */
            Array.Reverse(tmp);
            Console.Write("Reversed Array: ");
            foreach(int i in tmp)
                Console.Write(i + " ");
            Console.WriteLine();

            /* sort the array */
            Array.Sort(list);
            Console.Write("Sorted Array: ");
            foreach(int i in list)
                Console.Write(i + " ");
            Console.WriteLine();

            Console.ReadKey();
        }
    }
}
