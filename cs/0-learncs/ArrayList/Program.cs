using System;
using System.Collections;

namespace ArrayListApp
{
    class ArrayListProgram
    {
        static void Main(string[] args)
        {
            /* Creating ArrayList */
            ArrayList al = new ArrayList();

            /* Adding objects in ArrayList */
            al.Add("Java");
            al.Add("C");
            al.Add("C++");
            al.Add("php");

            Console.Write("Contents of ArrayList: ");
            /* Using Enhance for-loop */
            foreach(string str in al)
            {
                Console.Write($"{str}, ");
            }
            Console.WriteLine();

            Console.ReadKey();
        }
    }
}
