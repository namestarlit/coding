using System;
using System.Collections.Generic;

namespace GenericApp
{
    public class MyGenericArray<T>
    {
        private T[] array;
        
        public MyGenericArray(int size)
        {
            array = new T[size + 1];
        }

        public T getItem(int index)
        {
            return array[index];
        }

        public void setItem(int index, T value)
        {
            array[index] = value;
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            /* declare an int array */
            MyGenericArray<int> intArray = new MyGenericArray<int>(5);

            /* setting values */
            for (int c = 0; c < 5; c++)
            {
                intArray.setItem(c, c * 5);
            }

            /* retriving the values */
            for (int c = 0; c < 5; c++)
            {
                Console.Write(intArray.getItem(c) + " ");
            }
            Console.WriteLine();

            /* declaring a character array */
            MyGenericArray<char> charArray = new MyGenericArray<char>(5);

            /* setting values */
            for (int c = 0; c < 5; c++)
            {
                charArray.setItem(c, (char)(c + 97));
            }

            /* retriving the values */
            for (int c = 0; c < 5; c++)
            {
                Console.Write(charArray.getItem(c) + " ");
            }
            Console.WriteLine();

            Console.ReadKey();
        }
    }
}
