using System;

namespace RectangleApp
{
    class Rectangle
    {
        /* member variables */
        protected double length;
        protected double width;

        /* class constructor method */
        public Rectangle(double l, double w)
        {
            length = l;
            width = w;
        }

        public double GetArea()
        {
            return (length * width);
        }

        public void Display()
        {
            Console.WriteLine("Length: {0} units", length);
            Console.WriteLine("Width: {0} units", width);
            Console.WriteLine("Area. {0} square units", GetArea());
        }
    }

    class Tabletop : Rectangle
    {
        private double cost;

        public Tabletop(double l, double w) : base(l, w)
        { }

        public double GetCost()
        {
            cost = GetArea() * 70;
            return cost;
        }

        public void Display()
        {
            base.Display();
            Console.WriteLine("Cost: {0}", GetCost());
        }
    }

    class ExecuteRectangle
    {
        static void Main(string[] args)
        {
            Tabletop t = new Tabletop(4.5, 7.5);

            t.Display();

            Console.ReadKey();
        }
    }
}
