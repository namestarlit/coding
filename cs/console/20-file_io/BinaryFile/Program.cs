using System;
using System.IO;

namespace BinaryFileApp
{
    class Program
    {
        static void Main(string[] args)
        {
            BinaryWriter bw;
            BinaryReader br;

            int i = 25;
            double d = 3.14157;
            bool b = true;
            string s = "I am writing code";

            try
            {
                /**
                 * Create a file by passing a FileStream object to BinaryWriter
                 * object
                 */
                bw = new BinaryWriter(new FileStream("data",
                            FileMode.Create));
            }
            catch (IOException e)
            {
                Console.WriteLine(e.Message + "\n Cannot create file");
                return;
            }

            try
            {
                /**
                 * Write to a file using the BinaryWriter object 
                 */
                bw.Write(i);
                bw.Write(d);
                bw.Write(b);
                bw.Write(s);
            }
            catch (IOException e)
            {
                Console.WriteLine(e.Message + "\n Cannot write to file");
                return;
            }

            /* close the file */
            bw.Close();

            try
            {
                /* Create BinaryReader object from the FileStream object */
                br = new BinaryReader(new FileStream("data", FileMode.Open));
            }
            catch (IOException e)
            {
                Console.WriteLine(e.Message + "\n Cannot open file");
                return;
            }

            try
            {
                i = br.ReadInt32();
                Console.WriteLine("Integer data: {0}", i);

                d = br.ReadDouble();
                Console.WriteLine("Double data: {0}", d);

                b = br.ReadBoolean();
                Console.WriteLine("Boolean data: {0}", b);

                s = br.ReadString();
                Console.WriteLine("String data: {0}", s);
            }
            catch (IOException e)
            {
                Console.WriteLine(e.Message + "\n Cannot read from file");
                return;
            }

            Console.ReadKey();
        }
    }
}
