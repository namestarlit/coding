using System;
using System.IO;

namespace FileIOApp
{
    class Program
    {
        static void Main(string[] args)
        {
            /* create FileStream object */
            FileStream file = new FileStream("test.dat",
                    FileMode.OpenOrCreate, FileAccess.ReadWrite);

            for (int i = 0; i <= 20; i++)
            {
                /* write to a file stream */
                file.WriteByte((byte)i);
            }

            /* reset cursor position to 0 in file stream */
            file.Position = 0;

            for (int i = 0; i <= 20; i++)
            {
                /* read data from the file stream */
                Console.Write(file.ReadByte() + " ");
            }
            Console.WriteLine();

            /* close file stream */
            file.Close();

            Console.ReadKey();
        }
    }
}
