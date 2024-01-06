using System;

namespace WhileLoop
{
    class Program
    {
        static void Main(string[] args)
        {
            /* Local variable definition */
            int a = 10;

            /* While loop execution */
            while (a < 20)
            {
                Console.WriteLine("Value of a: {0}", a);
                a++;
            }
            Console.ReadKey();
        }
    }
}
