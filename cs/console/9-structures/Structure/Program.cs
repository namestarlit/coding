using System;

namespace BookApp
{
    struct Book
    {
        public string title;
        public string author;
        public string subject;
        public int bookID;
    };

    public class TestStructure
    {
        public static void Main(string[] args)
        {
            Book book1;
            Book book2;

            /* book1 specification */
            book1.title = "C Programming";
            book1.author = "Nuha Ali";
            book1.subject = "C Programming Tutorial";
            book1.bookID = 6495407;

            /* book2 specification */
            book2.title = "Telecom Billing";
            book2.author = "Zara Ali";
            book2.subject = "Telecom Billing Tutorial";
            book2.bookID = 6495700;

            /* print book1 info */
            Console.WriteLine("Book 1 info:");
            Console.WriteLine("Title: {0}", book1.title);
            Console.WriteLine("Author: {0}", book1.author);
            Console.WriteLine("Subject: {0}", book1.subject);
            Console.WriteLine("Book ID: {0}\n", book1.bookID);

            /* print book2 info */
            Console.WriteLine("Book 2 info:");
            Console.WriteLine("Title: {0}", book2.title);
            Console.WriteLine("Author: {0}", book2.author);
            Console.WriteLine("Subject: {0}", book2.subject);
            Console.WriteLine("Book ID: {0}\n", book2.bookID);

            Console.ReadKey();
        }
    }
}
