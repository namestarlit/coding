using System;

namespace CalculatorApp
{
    class NullableAtShow
    {
        static void Main(string[] args)
        {
            double? num1 = null;
            double? num2 = 3.14157;
            double num3;

            /* set num3 to num1 if num1 is not null else set to 5.34 */
            num3 = num1 ?? 5.34;
            Console.WriteLine("Value of num3: {0}", num3);

            num3 = num2 ?? 5.34;
            Console.WriteLine("Value of num3: {0}", num3);
            
            Console.ReadKey();
        }
    }
}
