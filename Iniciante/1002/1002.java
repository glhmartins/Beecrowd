import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner i = new Scanner(System.in);
        double n = 3.14159;
        double r = i.nextDouble();
        double area = r*r*n;
        System.out.printf("A=%.4f\n", area);
    }
 
}