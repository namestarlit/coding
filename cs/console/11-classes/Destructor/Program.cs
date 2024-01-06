using System;

namespace LineApp
{
    class Line
    {
        private double length;

        public Line() /* constructor */
        {
            Console.WriteLine("Object is being created...");
        }

        ~Line() /* destructor */
        {
            Console.WriteLine("Object is being deleted...");
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
