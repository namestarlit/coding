using System;

namespace UnsafeCodeApp
{
    class Program
    {
        static unsafe void Main(string[] args)
        {
            int num = 20;
            int *ptr = &num;

            Console.WriteLine($"Data is: {num}");
            Console.WriteLine($"Address is: {(int)p}");

            Console.ReaKey();
        }
    }
}
