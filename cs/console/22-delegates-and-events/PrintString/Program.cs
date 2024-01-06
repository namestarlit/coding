using System;
using System.IO;


namespace DelegateApp
{
    class PrintString
    {
        static FileStream? fs = null;
        static StreamWriter? sw = null;

        /* delegate declaration */
        public delegate void printString(string s);

        /* method to print to the console */
        public static void WriteToScreen(string str)
        {
            Console.WriteLine($"The string is: {str}");
        }

        /* method to write to a file */
        public static void WriteToFile(string s)
        {
            /* create a new file stream and stream writer object */
            fs = new FileStream("message.txt",
                    FileMode.Append, FileAccess.Write);
            sw = new StreamWriter(fs);

            /* write to a file */
            sw.WriteLine(s);
            sw.Flush();

            /* close stream writer and file stream */
            sw.Close();
            fs.Close();
        }

        /* method that takes a delegate and use it to call required method */
        public static void sendString(printString ps)
        {
            ps("Hello Delegates!");
        }

        static void Main(string[] args)
        {
            /* create delegate isntances */
            printString ps1 = new printString(WriteToScreen);
            printString ps2 = new printString(WriteToFile);

            /* call methods using the delegate instances */
            sendString(ps1);
            sendString(ps2);

            Console.ReadKey();
        }
    }
}
