using System;

namespace StringApp
{
    class Program
    {
        static void Main(string[] args)
        {
            /* from string literal and string concatination */
            string fname, lname;
            fname = "Rowan";
            lname = "Atkison";

            string fullname = fname + lname;
            Console.WriteLine("Full Name: {0}", fullname);

            /* using string constructor */
            char[] letters = {'H', 'e', 'l', 'l', 'o'};
            string greetings = new string(letters);
            Console.WriteLine("Greetings: {0}\n", greetings);

            /* from methods returning string */
            string[] sarray = {"Hello", "From", "Tutorials", "Point"};
            string message = String.Join(" ", sarray);
            Console.WriteLine("Message: {0}", message);
            Console.WriteLine("Ends with 'Point': {0}",
                    message.EndsWith("Point"));
            Console.WriteLine("Index of 'T': {0}\n", message.IndexOf('T'));

            /* from formating method to convert a value */
            DateTime waiting = new DateTime(2023, 02, 22, 17, 58, 1);
            string chat = String.Format("Message sent at {0:t} on {0:D}",
                    waiting);
            Console.WriteLine("Message: {0}", chat);
            Console.WriteLine("Message Length: {0}", chat.Length);
            Console.WriteLine("Index of Hello: {0}\n", chat.IndexOf("sent"));

            string? empty = null;
            Console.WriteLine("{0} is Null?: {1}",
                    empty, String.IsNullOrEmpty(empty));
            empty = new string(empty);
            empty = empty.Insert(0, "Not Null anymore");
            Console.WriteLine("{0}", empty);

            Console.ReadKey();
        }
    }
}
