import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a,b;
        double c;
        a = in.nextInt();
        b = in.nextInt();
        c = in.nextDouble();
        double ans ;
        ans= b*c;
        System.out.printf("NUMBER = %d\n",a);
        System.out.printf("SALARY = U$ %.2f\n",ans);

    }
}
