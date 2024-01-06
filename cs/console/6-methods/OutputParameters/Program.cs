using System;

namespace CalculatorApp
{
    class NumberManipulator
    {
        public void GetValue(out int x)
        {
            int tmp = 5;
            x = tmp;
        }

        static void Main(string[] args)
        {
            int a = 100;

            NumberManipulator n = new NumberManipulator();

            Console.WriteLine("Before, value of a: {0}", a);

            /* calling method */
            n.GetValue(out a);

            Console.WriteLine("After, value of a: {0}", a);

            Console.ReadKey();
        }
    }
}
