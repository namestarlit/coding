using System;

namespace OperatorOvlApp
{
    class Box
    {
        private double length;
        private double breadth;
        private double height;

        public Box(double len = 0, double bre = 0, double hei = 0)
        {
            length = len;
            breadth = bre;
            height = hei;
        }

        public double GetVolume()
        {
            return (length * breadth * height);
        }

        /* overload + operator to add two Box objects */
        public static Box operator +(Box a, Box b)
        {
            /* create Box class object */
            Box box = new Box();

            box.length = a.length + b.length;
            box.breadth = a.breadth + b.breadth;
            box.height = a.height + b.height;

            return box;
        }

        /* overload == operator to compare two Box objects */
        public static bool operator ==(Box lhs, Box rhs)
        {
            bool status = false;

            if (lhs.length == rhs.length &&
                    lhs.breadth == rhs.breadth &&
                    lhs.height == rhs.height)
            {
                status = true;
            }

            return status;
        }

        /* overload != operator to compare two Box objects */
        public static bool operator !=(Box lhs, Box rhs)
        {
            bool status = false;

            if (lhs.length != rhs.length ||
                    lhs.breadth != rhs.breadth ||
                    lhs.height != rhs.height)
            {
                status = true;
            }

            return status;
        }

        /* overload < operator to compare two Box objects */
        public static bool operator <(Box lhs, Box rhs)
        {
            bool status = false;

            if (lhs.length < rhs.length &&
                    lhs.breadth < rhs.breadth &&
                    lhs.height < rhs.height)
            {
                status = true;
            }

            return status;
        }

        /* overload > operator to compare two Box objects */
        public static bool operator >(Box lhs, Box rhs)
        {
            bool status = false;

            if (lhs.length > rhs.length &&
                    lhs.breadth > rhs.breadth &&
                    lhs.height > rhs.height)
            {
                status = true;
            }

            return status;
        }

        /* overload <= operator to compare two Box objects */
        public static bool operator <=(Box lhs, Box rhs)
        {
            bool status = false;

            if (lhs.length <= rhs.length &&
                    lhs.breadth <= rhs.breadth &&
                    lhs.height <= rhs.height)
            {
                status = true;
            }

            return status;
        }
        /* overload >= operator to compare two Box objects */
        public static bool operator >=(Box lhs, Box rhs)
        {
            bool status = false;

            if (lhs.length >= rhs.length &&
                    lhs.breadth >= rhs.breadth &&
                    lhs.height >= rhs.height)
            {
                status = true;
            }

            return status;
        }

        public override string ToString()
        {
            return String.Format("({0}, {1}, {2})", length, breadth, height);
        }

    }

    class Tester
    {
        static void Main(string[] args)
        {
            Box box1 = new Box(6.0, 7.0, 5.0);
            Box box2 = new Box(12.0, 13.0, 10.0);
            Box box3 = new Box();
            double volume = 0.0;

            /* displaying boxes using the overloaded ToString() */
            Console.WriteLine("Box 1: {0}", box1.ToString());
            Console.WriteLine("Box 2: {0}", box2.ToString());

            /* volume of box1 */
            volume = box1.GetVolume();
            Console.WriteLine("Volume of Box 1: {0} cube units", volume);

            /* volume of box2 */
            volume = box2.GetVolume();
            Console.WriteLine("Volume of Box 2: {0} cube units", volume);

            /* Add two objects as follows */
            box3 = box1 + box2;
            Console.WriteLine("Box 3: {0}", box3.ToString());

            /* volume of box 3 */
            volume = box3.GetVolume();
            Console.WriteLine("Volume of Box 3: {0} cube units", volume);

            /* Comparing the Boxes */
            if (box1 > box2)
                Console.WriteLine("Box 1 is greater than Box 2");
            else
                Console.WriteLine("Box 2 is greater than Box 1");
            if (box1 < box2)
                Console.WriteLine("Box 1 is less than Box 2");
            else
                Console.WriteLine("Box 2 is less than Box 1");
            if (box1 >= box2)
                Console.WriteLine("Box 1 is greater or equal to Box 2");
            else
                Console.WriteLine("Box 2 is greater or equal to Box 1");
            if (box1 <= box2)
                Console.WriteLine("Box 1 is less or equal to Box 2");
            else
                Console.WriteLine("Box 2 is less or equal to Box 1");
            if (box1 != box2)
                Console.WriteLine("Box 1 and Box 2 are not equal");
            else
                Console.WriteLine("Box 1 and Box 2 are equal");

            Box box4 = box3;
            if (box3 == box4)
                Console.WriteLine("Box 3 is equal to Box 4");
            else
                Console.WriteLine("Box 3 is not equal to Box 4");

            Console.ReadKey();
        }
    }
}
