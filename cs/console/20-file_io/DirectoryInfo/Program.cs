using System;
using System.IO;

namespace FileApp
{
    class Program
    {
        static void Main(string[] args)
        {
            /* Create a DirectoryInfo object */
            DirectoryInfo dir = new DirectoryInfo(@"/tmp");

            /* Getting the files in the directory, their names and size */
            FileInfo[] files = dir.GetFiles();

            foreach (FileInfo file in files)
            {
                Console.WriteLine("File Name: {0}, Size: {1}",
                        file.Name, file.Length);
            }
            Console.ReadKey();
        }
    }
}
