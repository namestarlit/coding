using System;
using System.Collections;

namespace CollectionApp
{
    class Program
    {
        static void Main(string[] args)
        {
            Stack st = new Stack();

            char[] mugiwara = {'M', 'U', 'G', 'I', 'W', 'A', 'R', 'A'};

            foreach (char c in mugiwara)
            {
                st.Push(c);
            }

            Console.WriteLine("Current stack: ");
            printCharStack(st);

            st.Push(' ');
            st.Push('Y');
            st.Push('A');

            Console.WriteLine("The next poppable value in stack: {0}",
                    st.Peek());
            Console.WriteLine("Current stack: ");
            printCharStack(st);

            Console.WriteLine("Removing values ");
            st.Pop();
            st.Pop();
            st.Pop();

            Console.WriteLine("Current Stack: ");
            printCharStack(st);
            Console.WriteLine();

            /* convert to an array and reverse the elements */
            object?[] chars = st.ToArray();
            Array.Reverse(chars);
            Console.Write("Reversed: ");
            foreach (object c in chars)
            {
                Console.Write(c + " ");
            }
            Console.WriteLine();

            static void printCharStack(Stack st)
            {
                foreach (char c in st)
                {
                    Console.Write(c + " ");
                }
                Console.WriteLine();
            }
        }
    }
}
