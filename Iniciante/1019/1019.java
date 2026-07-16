import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner i = new Scanner(System.in);
        int s = i.nextInt();
        int horas = s/3600;
        int minutos = (s%3600)/60;
        int segundos = (s%3600)%60;
        System.out.printf("%d:%d:%d\n", horas,minutos,segundos);
    }
}