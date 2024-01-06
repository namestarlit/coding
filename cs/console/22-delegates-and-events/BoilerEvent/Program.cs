using System;
using System.IO;

namespace BoilerEventApp
{
    /* boiler class */
    class Boiler
    {
        private int temp;
        private int pressure;

        public Boiler(int t, int p)
        {
            temp = t;
            pressure = p;
        }

        public int Temp
        {
            get
            {
                return temp;
            }
        }

        public int Pressure
        {
            get
            {
                return pressure;
            }
        }
    }

    /* event publisher */
    class DelegateBoilerEvent
    {
        /* declare delegate and event event */
        public delegate void BoilerLogHandler(string status);
        public event BoilerLogHandler? BoilerEventLog = null;

        public void LogProcess()
        {
            string remarks = "O. K";
            Boiler b = new Boiler(100, 12);
            int t = b.Temp;
            int p = b.Pressure;

            if (t > 150 || t < 80 || p < 12 || p > 15)
            {
                remarks = "Need Maintenance";
            }

            OnBoilerEventLog("Logging Info:\n");
            OnBoilerEventLog($"Temperature: {t}\nPressure: {p}");
            OnBoilerEventLog($"\nMessage: {remarks}");
        }

        protected void OnBoilerEventLog(string message)
        {
            if (BoilerEventLog != null)
            {
                BoilerEventLog(message);
            }
        }

        /* class to keep provision for writing into the log file */
        class BoilerInfoLogger
        {
            FileStream? fs = null;
            StreamWriter? sw = null;

            public BoilerInfoLogger(string filename)
            {
                fs = new FileStream(filename,
                        FileMode.Append,
                        FileAccess.Write
                        );
                sw = new StreamWriter(fs);
            }

            public void Logger(string info)
            {
                sw.WriteLine(info);
            }

            public void Close()
            {
                sw.Close();
                fs.Close();
            }
        }

        /* The event subscriber */
        public class RecordBoilerInfo
        {
            static void Logger(string info)
            {
                Console.WriteLine(info);
            }

            static void Main(string[] args)
            {
                BoilerInfoLogger filelog = new BoilerInfoLogger("boiler.log");
                DelegateBoilerEvent boilerEvent = new DelegateBoilerEvent();

                boilerEvent.BoilerEventLog += new DelegateBoilerEvent
                    .BoilerLogHandler(Logger);
                boilerEvent.BoilerEventLog += new DelegateBoilerEvent
                    .BoilerLogHandler(filelog.Logger);
                boilerEvent.LogProcess();
                Console.ReadLine();
                filelog.Close();
            } /* end of main */
        } /* end of RecordBoilerInfo */
    }
}
