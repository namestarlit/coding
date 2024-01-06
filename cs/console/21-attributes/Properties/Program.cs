using System;

namespace TutorialsPoint
{
    public class Student
    {
        private string code = "N.A";
        private string name = "Not Known";
        private int age = 0;

        /* Declare a Code property of type string */
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

        /* Declare a Name property of type string */
        public string Name
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

        /* Declare a Age property of type int */
        public int Age
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
            return ($"Code = {code}, Name = {name}, Age = {age}");
        }
    }

    public class Program
    {
        static void Main(string[] args)
        {
            /* create a new student object */
            Student student = new Student();

            /* set code, name and age of the student through properties */
            student.Code = "001";
            student.Name = "Hoshizora";
            student.Age = 23;

            Console.WriteLine($"Student Info: {student}");

            /* increas student's age */
            student.Age += 1;

            Console.WriteLine($"Student Info: {student}");

            Console.WriteLine($"{student.Name} -> starlit");
            Console.ReadKey();
        }
    }
}
