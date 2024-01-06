using System;
using System.Collections;

namespace CollectionApp
{
    class Program
    {
        static void Main(string[] args)
        {
            Queue q = new Queue();
            char[] chars = { 'A', 'M', 'G', 'W' };

            /* enqueue element to the Queue object */
            for (int i = 0; i < chars.Length; i++)
            {
                q.Enqueue(chars[i]);
            }

            /* print elements of the queue one by one */
            Console.Write("Current queue: ");
            foreach (char c in q)
            {
                Console.Write(c + " ");
            }
            Console.WriteLine();

            /* enqueue more elements into the queue */
            q.Enqueue('V');
            q.Enqueue('H');

            Console.Write("Current queue: ");
            foreach (char c in q)
            {
                Console.Write(c + " ");
            }
            Console.WriteLine();

            /* dequeue elements from the queue */
            char? ch = (char)q.Dequeue();
            Console.WriteLine($"The removed value: {ch}");

            ch = (char)q.Dequeue();
            Console.WriteLine($"The removed value: {ch}");

            Console.Write("Current queue: ");
            foreach (char c in q)
            {
                Console.Write(c + " ");
            }
            Console.WriteLine();

            Console.ReadKey();

        }
    }
}
