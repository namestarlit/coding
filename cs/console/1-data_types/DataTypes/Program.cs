using System;

namespace DataTypeApp
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Size of int: {0} bytes", sizeof(int));
            Console.WriteLine("Size of char: {0} byte", sizeof(char));
            Console.WriteLine("Size of float: {0} bytes", sizeof(float));
            Console.WriteLine("Size of decimal: {0} bytes", sizeof(decimal));
            Console.WriteLine("Size of double: {0} bytes", sizeof(double));
            Console.ReadLine();
        }
    }
}
