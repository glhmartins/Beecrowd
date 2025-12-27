using System;

class URI
{
    static void Main(String[] args)
    {
        double n = 3.14159, raio, circunferencia;
        raio = Convert.ToDouble(Console.ReadLine());
        circunferencia = (raio*raio)*n;
        Console.WriteLine($"A={circunferencia:F4}");
    }
}