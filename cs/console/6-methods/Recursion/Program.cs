using System;

namespace CalculatorApp
{
    class NumberManipulator
    {
        public int Factorial(int num)
        {
            int result;

            if (num == 1)
            {
                return 1;
            }
            else
            {
                result = Factorial(num - 1) * num;
                return result;
            }
        }

        static void Main(string[] args)
        {
            NumberManipulator n = new NumberManipulator();

            Console.WriteLine("Factorial of 6 is: {0}", n.Factorial(6));
            Console.WriteLine("Factorial of 7 is: {0}", n.Factorial(7));
        }
    }
}
