using System;

namespace LineApp
{
    class Line
    {
        private double length;

        public Line()
        {
            Console.WriteLine("Object is being created...");
        }

        public void SetLength(double len)
        {
            length = len;
        }

        public double GetLength()
        {
            return length;
        }

        static void Main(string[] args)
        {
            Line line = new Line();

            /* set line length */
            line.SetLength(6.0);
            Console.WriteLine("Length of the line: {0} units",
                    line.GetLength());
            
            Console.ReadKey();
        }
    }
}
