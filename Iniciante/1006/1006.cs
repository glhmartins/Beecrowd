using System; 

class URI {

    static void Main(string[] args) { 
        double a, b, c, media;
        a = Convert.ToDouble(Console.ReadLine());
        b = Convert.ToDouble(Console.ReadLine());
        c = Convert.ToDouble(Console.ReadLine());
        media = (2*a+3*b+5*c)/10.0;
        Console.WriteLine($"MEDIA = {media:F1}");
    }

}