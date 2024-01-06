using System;

namespace FirstSpace
{
    class ClassName
    {
        public void func()
        {
            Console.WriteLine("Inside FirstSpace");
        }
    }
}

namespace SecondSpace
{
    class ClassName
    {
        public void func()
        {
            Console.WriteLine("Inside SecondSpace");
        }
    }
}

class Tester
{
    static void Main(string[] args)
    {
        FirstSpace.ClassName fc = new FirstSpace.ClassName();
        SecondSpace.ClassName sc = new SecondSpace.ClassName();

        fc.func();
        sc.func();

        Console.ReadKey();
    }
}
