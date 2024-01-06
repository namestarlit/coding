using System;
using System.Collections.Generic;

namespace GenericApp
{
    class Program
    {
        static void Swap<T>(ref T lhs, ref T rhs)
        {
            T temp;
            temp = lhs;
            lhs = rhs;
            rhs = temp;
        }

        static void Main(string[] args)
        {
            int a = 10;
            int b = 20;
            char c = 'I';
            char d = 'V';

            /* display values before swap: */
            Console.WriteLine("int values before calling swap:");
            Console.WriteLine($"a = {a}, b = {b}");

            Console.WriteLine("char values before calling swap:");
            Console.WriteLine($"c = {c}, d = {d}");

            /* call Swap method */
            Swap<int>(ref a, ref b);
            Swap<char>(ref c, ref d);

            /* display values after swap */
            Console.WriteLine("int values after calling swap:");
            Console.WriteLine($"a = {a}, b = {b}");

            Console.WriteLine("char values after calling swap:");
            Console.WriteLine($"c = {c}, d = {d}");

            Console.ReadKey();

        }
    }
}
