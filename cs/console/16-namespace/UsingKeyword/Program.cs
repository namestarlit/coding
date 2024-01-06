using System;
using FirstSpace;
using SecondSpace;

namespace FirstSpace
{
    class Abc
    {
        public void func()
        {
            Console.WriteLine("Inside FirstSpace");
        }
    }
}

namespace SecondSpace
{
    class Efg
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
        Abc fc = new Abc();
        Efg sc = new Efg();

        fc.func();
        sc.func();

        Console.ReadKey();
    }
}
