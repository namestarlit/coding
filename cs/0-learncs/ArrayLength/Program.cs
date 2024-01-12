using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ArrayLengthApp
{
    class Program
    {
        public static void Main(string[] args)
        {
            int[] array = new int[5];
            int length = array.Length;
            Console.WriteLine("Length of array: {0}", length);

            long longLength = array.LongLength;
            Console.WriteLine("Length of the LongLength array: {0}", longLength);

            int[,] twoD = new int[5, 10];
            Console.WriteLine("The size of the 2D array is: {0}", twoD.Length);

            Console.ReadKey();
        }
    }
}
