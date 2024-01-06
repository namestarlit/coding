﻿using System;
using System.Threading;

namespace MultiThreadApp
{
    class ThreadCreationProgram
    {
        public static void CallToChildThread()
        {
            try
            {
                Console.WriteLine("Child thread starts");

                /* do some work, like counting to 10 */
                for (int counter = 0; counter <= 10; counter++)
                {
                    Thread.Sleep(500);
                    Console.WriteLine(counter);
                }
                Console.WriteLine("Child thread completed");
            }
            catch (ThreadAbortException e)
            {
                Console.WriteLine($"Thread Abort Exception:\n{e}");
            }
            finally
            {
                Console.WriteLine("Couldn't catch the Thread Exception");
            }
        }

        static void Main(string[] args)
        {
            ThreadStart childref = new ThreadStart(CallToChildThread);
            Console.WriteLine("In Main: Creating the child thread");
            
            Thread childThread = new Thread(childref);
            childThread.Start();

            /* stop the main thread for some time */
            Thread.Sleep(2000);

            /* now abort the child thread */
            Console.WriteLine("In Main: Aborting the child thread");
            childThread.Abort();

            Console.ReadKey();
        }
    }
}
