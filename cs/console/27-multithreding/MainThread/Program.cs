using System;
using System.Threading;

namespace MultiThreadApp
{
    class MainThreadProgram
    {
        static void Main(string[] args)
        {
            Thread th = Thread.CurrentThread;
            th.Name = "Main Thread";

            Console.WriteLine($"This is {th.Name}");
            
            Console.ReadKey();
        }
    }
}
