using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LearnCSharpApp
{
    class Program
    {
        public static void Main(string[] args)
        {
            int size;
            float large, small;
            int[]? a = null;

            Console.Write("Enter the size of the array: ");
            string? s = Console.ReadLine();

            size = Int32.Parse(s);
            a = new int[size];

            Console.WriteLine("Enter the array elements: ");
            for (int i = 0; i < size; i++)
            {
                a[i] = Int32.Parse(Console.ReadLine());
            }
            Console.WriteLine();

            large = a[0];
            small = a[0];

            for (int i = 0; i < size; i++)
            {
                if (a[i] > large)
                {
                    large = a[i];
                }
                else if (a[i] < small)
                {
                    small = a[i];
                }
            }

            Console.WriteLine("Largest element in the array: {0}", large);
            Console.WriteLine("Smallest element in the array: {0}", small);

            Console.ReadKey();
        }
    }
}
