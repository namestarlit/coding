using System;
using System.IO;

namespace FileApp
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] names = new string[] {"Paul John",
                "Rogath Richard", "Edward Lusasi", "Steven Dunford"};

            try
            {
                /**
                 * Create an instance of StreamWriter to write to a file.
                 * The 'using' statement will close the file 
                 */
                using (StreamWriter sw = new StreamWriter("names.txt"))
                {
                    foreach (string name in names)
                        sw.WriteLine(name);
                }

                /* Read and print each line from the file */
                using (StreamReader sr = new StreamReader("names.txt"))
                {
                    string? line = "";

                    while ((line = sr.ReadLine()) != null)
                        Console.WriteLine(line);
                }
            }
            catch (Exception e)
            {
                Console.WriteLine("Error: " + e.Message);
            }

            Console.ReadKey();
        }
    }
}
