using System;

namespace BoxApp
{
    class Box
    {
        public double length;
        public double breadth;
        public double height;
    }

    class BoxTester
    {
        static void Main(string[] args)
        {
            Box box1 = new Box();
            Box box2 = new Box();
            double volume = 0.0;

            /* box 1 specification */
            box1.height = 5.0;
            box1.length = 6.0;
            box1.breadth = 7.0;

            /* box 2 specification */
            box2.height = 10.0;
            box2.length = 12.0;
            box2.breadth = 13.0;

            /* volume of box 1 */
            volume = box1.height * box1.length * box1.breadth;
            Console.WriteLine("Volume of Box 1: {0} cube units", volume);

            /* volume of box 2 */
            volume = box2.height * box2.length * box2.breadth;
            Console.WriteLine("Volume of Box 2: {0} cube units", volume);

            Console.ReadKey();
        }
    }
}
