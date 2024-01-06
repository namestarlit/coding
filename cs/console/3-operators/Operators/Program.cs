using System;

namespace OperatorsApp
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = 21;
            int b = 10;
            int c;

            Console.WriteLine("a = {0}, b = {1}", a, b);

            c = a + b;
            Console.WriteLine("a + b = {0}", c);

            c = a - b;
            Console.WriteLine("a - b = {0}", c);

            c = a * b;
            Console.WriteLine("a * b = {0}", c);

            c = a / b;
            Console.WriteLine("a / b = {0}", c);

            c = a % b;
            Console.WriteLine("a / b = {0}", c);

            c = a++;
            Console.WriteLine("a++ = {0}", c);

            c = a--;
            Console.WriteLine("a-- = {0}", c);

            Console.ReadLine();
        }
    }
}
