using System;

namespace LineApp
{
    class Line
    {
        private double length;

        public Line(double len) /* parameterized constructor */
        {
            Console.WriteLine("Object is being created, length = {0}", len);
            length = len;
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
            Line line = new Line(10.0);
            Console.WriteLine("Length of the line: {0} units",
                    line.GetLength());

            /* set line length */
            line.SetLength(6.0);
            Console.WriteLine("Length of the line: {0} units",
                    line.GetLength());
            
            Console.ReadKey();
        }
    }
}
