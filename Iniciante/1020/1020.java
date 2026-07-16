import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner i = new Scanner(System.in);
        int dias = i.nextInt();
        int ano = dias/365;
        int mes = (dias%365)/30;
        int dia = (dias%365)%30;
        System.out.printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
    }
}