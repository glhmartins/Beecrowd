import java.io.IOException;
import java.util.Scanner;

public class Main {
    
    public static double dist(Scanner teclado){
        double x1 = teclado.nextFloat();
        double y1 = teclado.nextFloat();
        double x2 = teclado.nextFloat();
        double y2 = teclado.nextFloat();
        return Math.sqrt(Math.pow(x1-x2,2) + Math.pow(y1-y2,2));
    }
 
    public static void main(String[] args) throws IOException {
        Scanner teclado = new Scanner(System.in);
        double distancia = dist(teclado);
        System.out.printf("%.4f\n", distancia);
    }
 
}