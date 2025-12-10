import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner i = new Scanner(System.in);
        int number = i.nextInt();
        int hours = i.nextInt();
        float salary_per_hour = i.nextFloat();
        float salary = hours*salary_per_hour;
        System.out.printf("NUMBER = %d\nSALARY = U$ %.2f\n", number, salary);
    }
}
