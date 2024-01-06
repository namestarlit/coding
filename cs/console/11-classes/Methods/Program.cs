using System;

namespace BoxApp
{
    class Box
    {
        private double length;
        private double breadth;
        private double height;

        public void SetLength(double len)
        {
            length = len;
        }

        public void SetBreadth(double bred)
        {
            breadth = bred;
        }

        public void SetHeight(double hei)
        {
            height = hei;
        }

        public double GetVolume()
        {
            return (length * height * breadth);
        }
    }

    class BoxTester
    {
        static void Main(string[] args)
        {
            Box box1 = new Box();
            Box box2 = new Box();
            double volume;

            /* Box 1 specification */
            box1.SetLength(6.0);
            box1.SetBreadth(7.0);
            box1.SetHeight(5.0);

            /* Box 2 specification */
            box2.SetLength(12.0);
            box2.SetBreadth(13.0);
            box2.SetBreadth(10.0);

            /* volume of Box 1 */
            volume = box1.GetVolume();
            Console.WriteLine("Volume of Box 1: {0} cube units", volume);

            /* volume of Box 2 */
            volume = box2.GetVolume();
            Console.WriteLine("Volume of Box 2: {0} cube units", volume);

            Console.ReadKey();
        }
    }
}
