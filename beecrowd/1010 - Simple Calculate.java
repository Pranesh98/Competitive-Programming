import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
      
        Scanner in = new Scanner(System.in);
        int code1,code2, u1,u2;
        double p1,p2, total;

        code1 = in.nextInt();
        u1 = in.nextInt();
        p1 = in.nextDouble();
        code2 = in.nextInt();
        u2 = in.nextInt();
        p2 = in.nextDouble();

        total = ((p1* u1) + (p2*u2));
        System.out.printf("VALOR A PAGAR: R$ %.2f\n",total);

    }
}
