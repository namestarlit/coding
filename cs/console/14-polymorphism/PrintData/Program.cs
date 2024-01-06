using System;

namespace PolymorphismApp
{
    class PrintData
    {
        void Print(int i)
        {
            Console.WriteLine("Printing int: {0}", i);
        }

        void Print(double f)
        {
            Console.WriteLine("Printing float: {0}", f);
        }

        void Print(string s)
        {
            Console.WriteLine("Printing string: {0}", s);
        }

        static void Main(string[] args)
        {
            PrintData p = new PrintData();

            /* call Print to print integer */
            p.Print(5);

            /* call Print to print float */
            p.Print(500.263);

            /* call Print to print string */
            p.Print("Hello C#");

            Console.ReadKey();
        }
    }
}
