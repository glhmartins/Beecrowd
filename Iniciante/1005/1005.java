import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner i = new Scanner(System.in);
        Double a = i.nextDouble();
        Double b = i.nextDouble();
        Double media = (3.5*a + 7.5*b)/11;
        System.out.printf("MEDIA = %.5f\n", media);
    }
 
}