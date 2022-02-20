import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
      
        Scanner in = new Scanner(System.in);
        int  s=0 ,m=0 ,h = 0, t;
        int num;
        num = in.nextInt();

        if (num>=3600){
            h = num/3600;
            t = num % 3600;
            m = t / 60;
            s = t % 60;
            System.out.printf("%d:%d:%d",h,m,s);
        }
        else if (num >= 60){
            m = num / 60;
            s = num % 60;
            System.out.printf("%d:%d:%d",h,m,s);
        }
        else {
            s = num;
            System.out.printf("%d:%d:%d",h,m,s);
        }
        System.out.printf("\n");
    }
}
