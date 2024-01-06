using System;

namespace Constants
{
    class Program
    {
        static void Main(string[] args)
        {
            const double pi = 3.14159;
            double r;
            double areaCircle;

            Console.Write("Enter Radius: ");
            r = Convert.ToDouble(Console.ReadLine());

            areaCircle = pi * r * r;
            Console.WriteLine("Radius: {0}, Area: {1}", r, areaCircle);
            Console.ReadLine();
        }
    }
}
