using System;

namespace CalculatorApp
{
    class NumberManipulator
    {
        public void GetValues(out int x, out int y)
        {
            Console.WriteLine("Enter the first value: ");
            x = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter the second value: ");
            y = Convert.ToInt32(Console.ReadLine());
        }

        static void Main(string[] args)
        {
            /* local variable declaration */
            int a, b;

            NumberManipulator n = new NumberManipulator();

            /* calling a method to get the values */
            n.GetValues(out a, out b);

            Console.WriteLine("After method call: a = {0}, b = {1}", a, b);
            Console.ReadKey();
        }
    }
}
