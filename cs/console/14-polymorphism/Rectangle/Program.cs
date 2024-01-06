using System;

namespace PolymorphismApp
{
    abstract class Shape
    {
        public abstract int Area();
    }

    class Rectangle : Shape
    {
        private int length;
        private int width;

        public Rectangle(int a = 0, int b = 0)
        {
            length = a;
            width = b;
        }

        public override int Area()
        {
            Console.WriteLine("Rectangle class area:");
            return (length * width);
        }
    }

    class RectangleTester
    {
        static void Main(string[] args)
        {
            Rectangle rect = new Rectangle(10, 7);
            double area = rect.Area();

            Console.WriteLine("Area: {0} square units", area);
            Console.ReadKey();
        }
    }
}
