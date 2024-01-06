using System;

namespace BookApp
{
    struct Book
    {
        private string title;
        private string author;
        private string subject;
        private int bookID;

        public void SetValues(string t, string a, string s, int id)
        {
            title = t;
            author = a;
            subject = s;
            bookID = id;
        }

        public void Print()
        {
            Console.WriteLine("Title: {0}", title);
            Console.WriteLine("Author: {0}", author);
            Console.WriteLine("Subject: {0}", subject);
            Console.WriteLine("Book ID: {0}", bookID);
        }
    };

    public class BookStruct
    {
        public static void Main(string[] args)
        {
            Book book1 = new Book();
            Book book2 = new Book();

            /* book1 specification */
            book1.SetValues("C Programming", "Nuli Ali",
                    "C Programming Tutorial", 6495407);

            /* book2 specification */
            book2.SetValues("Telecom Billing", "Zara Ali",
                    "Telecom Billing Tutorial", 6495700);

            /* print book1 and book2 info */
            Console.WriteLine("Book 1 info:");
            book1.Print();
            Console.WriteLine();

            Console.WriteLine("Book 2 info:");
            book2.Print();

            Console.ReadKey();
        }
    }
}
