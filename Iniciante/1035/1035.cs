using System; 

class URI 
{
    static void Main(string[] args) 
    {
        string[] linha = Console.ReadLine().Split(' ');
        int a,b,c,d;
        a = Convert.ToInt32(linha[0]);
        b = Convert.ToInt32(linha[1]);
        c = Convert.ToInt32(linha[2]);
        d = Convert.ToInt32(linha[3]);
        if((b>c) && (d>a) && (c+d>a+b) && (c>0) && (d>0) && ( a%2 == 0)) Console.WriteLine("Valores aceitos");
        else Console.WriteLine("Valores nao aceitos");
    }

}