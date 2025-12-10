import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner i = new Scanner(System.in);
        String name = i.nextLine();
        double fix_salary = i.nextDouble();
        double vendas = i.nextDouble();
        double bonus = vendas*0.15;
        System.out.printf("TOTAL = R$ %.2f\n", bonus+fix_salary);
    }   
}
