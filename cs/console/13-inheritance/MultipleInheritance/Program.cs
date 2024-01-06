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

    /* Base class/interface */
    public interface PaintCost
    {
        int GetCost(int area);
    }

    /* Derived class */
    class Rectangle : Shape, PaintCost
    {
        public int GetArea()
        {
            return (width * height);
        }

        public int GetCost(int area)
        {
            return area * 70;
        }
    }

    class RectangleTester
    {
        static void Main(string[] args)
        {
            Rectangle rect = new Rectangle();
            int area;

            rect.SetWidth(5);
            rect.SetHeight(7);
            area = rect.GetArea();

            /* print the area of the object */
            Console.WriteLine("Total area: {0} units", rect.GetArea());
            Console.WriteLine("Total paint cost: ${0}", rect.GetCost(area));
            Console.ReadKey();
        }
    }
}
