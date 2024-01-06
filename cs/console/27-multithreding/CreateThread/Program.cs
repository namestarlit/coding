using System;
using System.Threading;

namespace MultiThreadApp
{
    class ThreadCreationProgram
    {
        public static void CallToChildThread()
        {
            Console.WriteLine("Child thread starts");
        }

        static void Main(string[] args)
        {
            ThreadStart childref = new ThreadStart(CallToChildThread);
            Console.WriteLine("In Main: Creating the child thread");
            
            Thread childThread = new Thread(childref);
            childThread.Start();

            Console.ReadKey();
        }
    }
}
