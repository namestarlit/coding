using System;

namespace ArithmeticApp
{
    class ArithmeticOperations
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter two integer numbers: ");

            /* read input from standard input */
            int a = Convert.ToInt32(Console.ReadLine());
            int b = Convert.ToInt32(Console.ReadLine());

            /* perform arithmetic operations */
            Console.WriteLine("\nSum: " + (a + b));
            Console.WriteLine("Difference: " + (a - b));
            Console.WriteLine("Product: " + (a * b));
            Console.WriteLine("Qoutient: " + (a / b));
            Console.WriteLine("Integer quotient: " + (a / b));
            Console.WriteLine("Remainder: " + (a % b));
            Console.WriteLine("Exponent: " + Math.Pow(a, b));

            Console.ReadKey();
        }
    }
}
