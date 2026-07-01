import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner i = new Scanner(System.in);
        int a = i.nextInt();
        int b = i.nextInt();
        int c = i.nextInt();
        if (a>=b && a>=c){
            System.out.printf("%d eh o maior\n", a);
        } else if (b>=a && b>=c){
            System.out.printf("%d eh o maior\n", b);
        } else {
            System.out.printf("%d eh o maior\n", c);
        }
    }
}