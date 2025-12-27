using System;

class URI
{
    static void Main(String[] args)
    {
        int a,b, prod;
        a = Convert.ToInt32(Console.ReadLine());
        b = Convert.ToInt32(Console.ReadLine());
        prod = a*b;
        Console.WriteLine($"PROD = {prod}");
    }
}