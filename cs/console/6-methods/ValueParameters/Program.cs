using System;

namespace CalculatorApp
{
    class NumberManipulator
    {
        public void Swap(int x, int y)
        {
            int tmp;

            Console.WriteLine("\nInside swap method...");
            Console.WriteLine("Before: x = {0}, y = {1}", x, y);

            tmp = x;
            x = y;
            y = tmp;
            
            Console.WriteLine("After: x = {0}, y = {1}", x, y);
            Console.WriteLine("Execution complete..\n");
        }

        static void Main(string[] args)
        {
            int a = 100;
            int b = 200;

            NumberManipulator n = new NumberManipulator();

            Console.WriteLine("Before swap, value of a = {0}, b = {1}", a, b);
            
            /* call swap method */
            n.Swap(a, b);

            Console.WriteLine("After swap, value of a = {0}, b = {1}", a, b);
            Console.ReadKey();
        }
    }
}
