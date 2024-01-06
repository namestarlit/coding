using System;
using System.Collections.Generic;

delegate T NumberChanger<T>(T n);

namespace GenericApp
{
    class TestDelegate
    {
        static int num = 10;

        public static int AddNum(int p)
        {
            num += p;
            return num;
        }

        public static int MultNum(int q)
        {
            num *= q;
            return num;
        }

        public static int getNum()
        {
            return num;
        }

        static void Main(string[] args)
        {
            /* create delegate instance */
            NumberChanger<int> nc1 = new NumberChanger<int>(AddNum);
            NumberChanger<int> nc2 = new NumberChanger<int>(MultNum);

            /* calling the methods using the delegate objects */
            nc1(25);
            Console.WriteLine("Value of Num: {0}", getNum());

            nc2(5);
            Console.WriteLine("Value of Num: {0}", getNum());

            NumberChanger<int> nc3 = nc1;
            nc3 += nc2;

            nc3(4);
            Console.WriteLine("Value of Num: {0}", getNum());

            Console.ReadKey();
        }
    }
}
