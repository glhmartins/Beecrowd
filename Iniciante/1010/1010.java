import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner i = new Scanner(System.in);
        int code1 = i.nextInt();
        int quant1 = i.nextInt();
        double price1 = i.nextDouble();
        int code2 = i.nextInt();
        int quant2 = i.nextInt();
        double price2 = i.nextDouble();
        System.out.printf("VALOR A PAGAR: R$ %.2f\n", (quant1*price1+quant2*price2));
        i.close();
    }
}
