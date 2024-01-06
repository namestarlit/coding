using System;

namespace InheritanceApp
{
    class Shape
    {
        /* protected members of a base class */
        protected int height;
        protected int width;

        public void SetHeight(int h)
        {
            height = h;
        }

        public void SetWidth(int w)
        {
            width = w;
        }
    }

    /* Derived class */
    class Rectangle : Shape
    {
        public int GetArea()
        {
            return (width * height);
        }
    }

    class RectangleTester
    {
        static void Main(string[] args)
        {
            Rectangle rect = new Rectangle();

            rect.SetWidth(5);
            rect.SetHeight(7);

            /* print the area of the object */
            Console.WriteLine("Total area: {0} units", rect.GetArea());
            Console.ReadKey();
        }
    }
}
