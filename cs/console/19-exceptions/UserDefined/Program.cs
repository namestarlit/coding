﻿using System;

namespace UserDefinedException
{
    class TestTemperature
    {
        static void Main(string[] args)
        {
            Temperature temp = new Temperature();

            try
            {
                temp.ShowTemp();
            }
            catch (TempIsZeroException e)
            {
                Console.WriteLine("TempIsZeroException: {0}", e.Message);
            }

            Console.ReadKey();
        }
    }
}

public class TempIsZeroException : ApplicationException
{
    public TempIsZeroException(string message) : base(message)
    { }
}

public class Temperature
{
    int temperature = 0;

    public void ShowTemp()
    {
        if (temperature == 0)
            throw (new TempIsZeroException("Zero Temperature found"));
        else
            Console.WriteLine("Temperature: {0}", temperature);
    }
}
