using System;

namespace SimpleEvent
{
    public class EventTest
    {
        private int value;

        public delegate void NumManipulationHandler();
        public event NumManipulationHandler? ChangeNum = null;

        protected virtual void OnNumChanged()
        {
            if (ChangeNum != null)
            {
                ChangeNum();
            }
            else
            {
                Console.WriteLine("Event fired!");
            }
        }

        public EventTest(int n)
        {
            SetValue(n);
        }

        public void SetValue(int n)
        {
            if (value != n)
            {
                value = n;
                OnNumChanged();
            }
        }
    }

    public class Program
    {
        public static void Main(string[] args)
        {
            EventTest e = new EventTest(5);

            e.SetValue(7);
            e.SetValue(11);

            Console.ReadKey();
        }
    }
}
