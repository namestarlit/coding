using System;

namespace TutorialsPoint
{
    public abstract class Person
    {
        public abstract string Name
        {
            set;
            get;
        }

        public abstract int Age
        {
            set;
            get;
        }
    }

    public class Student : Person
    {
        private string code = "N.A";
        private string name = "Uknown";
        private int age = 0;

        /* declare a Code property of type string */
        public string Code
        {
            get
            {
                return code;
            }

            set
            {
                code = value;
            }
        }

        /* override the Name property from parent class */
        public override string Name
        {
            get
            {
                return name;
            }

            set
            {
                name = value;
            }
        }

        /* override the Age property from the parent class */
        public override int Age
        {
            get
            {
                return age;
            }

            set
            {
                age = value;
            }
        }

        public override string ToString()
        {
            return ($"Code -> {code}, Name -> {name}, Age -> {age}");
        }
    }

    public class Program
    {
        static void Main(string[] args)
        {
            /* create a new instance of student */
            Student student = new Student();

            /* set code, name, and age of the student */
            student.Code = "002";
            student.Name = "Igobeko";
            student.Age = 23;

            /* print student info */
            Console.WriteLine($"Student Info: {student}");

            /* increment student's age */
            student.Age += 2;

            Console.WriteLine($"{student.Name} -> starlit");
            Console.ReadKey();
        }
    }
}
