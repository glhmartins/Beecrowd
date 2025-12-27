using System; 

class URI {

    static void Main(string[] args) { 
        double a,b, media;
        a = Convert.ToDouble(Console.ReadLine());
        b = Convert.ToDouble(Console.ReadLine());
        media = (3.5*a+7.5*b)/11.0;
        Console.WriteLine($"MEDIA = {media:F5}");
    }

}