using System;

delegate void NumberChanger(int n);

namespace AnonymousApp
{
    class TestDelegate
    {
        static int num = 10;

        public static void AddNum(int p)
        {
            num += p;
            Console.WriteLine($"Named Method: {num}");
        }

        public static void MultNum(int q)
        {
            num *= q;
            Console.WriteLine($"Named Method: {num}");
        }

        public static int getNum()
        {
            return num;
        }

        static void Main(string[] args)
        {
            /* create a delegate instance using anonymous method */
            NumberChanger nc = delegate(int x)
            {
                Console.WriteLine($"Anonymous Method: {x}");
            };

            /* calling the delegate using the anonymous method */
            nc(10);

            /* instantiating the delegate using the named methods */
            nc = new NumberChanger(AddNum);

            /* calling the delegate using the named methods */
            nc(5);

            /* instantiating the delegate using another named method */
            nc = new NumberChanger(MultNum);

            /* calling the delegate using the named methods */
            nc(2);

            Console.ReadKey();
        }
    }
}
