import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
      
        Scanner in = new Scanner(System.in);
        double a;
        int count = 0;
        for (int i=1;i<=6;i++){
            a = in.nextDouble();
            if (a>0){
                count++;
            }
        }
        System.out.printf("%d valores positivos\n",count);

    }
}
