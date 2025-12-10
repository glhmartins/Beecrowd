import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner i = new Scanner(System.in);
        int a = i.nextInt();
        int b = i.nextInt();
        int c = i.nextInt();
        int d = i.nextInt();
        int dif = (a*b-c*d);
        System.out.printf("DIFERENCA = %d\n", dif);
    }
}