using System;

namespace CalculatorApp
{
    class NullableAtShow
    {
        static void Main(string[] args)
        {
            int? num1 = null;
            int? num2 = 45;
            double? num3 = new double?();
            double? num4 = 1.4157;

            bool? boolval = new bool?();

            /* displaying the values */
            Console.WriteLine("Nullable at show: {0}, {1}, {2}, {3}",
                    num1, num2, num3, num4);
            Console.WriteLine("A nullable boolean value: {0}", boolval);
            Console.ReadKey();
        }
    }
}
