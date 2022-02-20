import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    
        Scanner input = new Scanner(System.in);
        int C,x;
        C = input.nextInt();

        for (int i = 1; i<= C; i++){
            x = input.nextInt();

            if (x <= 8000) {
                System.out.printf("Inseto!\n");
            }
            else{
                System.out.printf("Mais de 8000!\n");
            }
        }
    }
}
