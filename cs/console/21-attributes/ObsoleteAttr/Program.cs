using System;


namespace AttributeApp
{
    public class MyClass
    {
        [Obsolete("Don't use OldMethod, use NewMethod", true)]
        static void OldMethod()
        {
            Console.WriteLine("It iss the old method");
        }

        static void NewMethod()
        {
            Console.WriteLine("It is the new method");
        }

        public static void Main(string [] args)
        {
            OldMethod();
        }
    }
}
