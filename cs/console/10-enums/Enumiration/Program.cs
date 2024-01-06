using System;

namespace EnumApp
{
    class EnumProg
    {
        enum Days {Sun, Mon, Tue, Wed, Thu, Fri, Sat}

        static void Main(string[] args)
        {
            int weekdayStart = (int)Days.Mon;
            int weekdayEnd = (int)Days.Fri;

            Console.WriteLine("Monday: {0}", weekdayStart);
            Console.WriteLine("Friday: {0}", weekdayEnd);

            Console.ReadKey();
        }
    }
}
