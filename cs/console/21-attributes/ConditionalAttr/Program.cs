# define DEBUG

using System;
using System.Diagnostics;


namespace ConditonalAttrApp
{
    public class MyClass
    {
        [Conditional("DEBUG")]
        public static void Message(string msg)
        {
            Console.WriteLine(msg);
        }
    }

    class Test
    {
        static void function1()
        {
            MyClass.Message("In function 1");
            function2();
        }

        static void function2()
        {
            MyClass.Message("In function 2");
        }

        public static void Main(string[] args)
        {
            MyClass.Message("In main function");
            function1();

            Console.ReadKey();
        }
    }
}
