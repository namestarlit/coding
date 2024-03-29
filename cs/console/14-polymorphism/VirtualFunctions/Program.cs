﻿using System;

namespace PolymorphismApp
{
    class Shape
    {
        protected int width, height;

        public Shape(int a = 0, int b = 0)
        {
            width = a;
            height = b;
        }

        public virtual int Area()
        {
            Console.WriteLine("Parent class area:");
            return (0);
        }
    }

    class Rectangle : Shape
    {
        public Rectangle(int a = 0, int b = 0) : base(a, b)
        { }

        public override int Area()
        {
            Console.WriteLine("Rectangle class area:");
            return (width * height);
        }
    }

    class Triangle : Shape
    {
        public Triangle(int a = 0, int b = 0) : base(a, b)
        { }

        public override int Area()
        {
            Console.WriteLine("Triangle class area:");
            return ((width * height) / 2);
        }
    }

    class Caller
    {
        public void CallArea(Shape obj)
        {
            int area;
            area = obj.Area();

            Console.WriteLine("Area: {0} square units", area);
        }
    }

    class Tester
    {
        static void Main(string[] args)
        {
            Caller c = new Caller();
            Rectangle r = new Rectangle(10, 7);
            Triangle t = new Triangle(10, 5);

            c.CallArea(r);
            c.CallArea(t);

            Console.ReadKey();
        }
    }
}
