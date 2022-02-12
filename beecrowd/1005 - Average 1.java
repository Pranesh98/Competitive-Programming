// Link: https://www.beecrowd.com.br/judge/en/problems/view/1005

import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String []args){
        Scanner input = new Scanner(System.in);
        double A, B, MEDIA;
        // Input:
        A = input.nextDouble();
        B = input.nextDouble();
      
        MEDIA = ( (A *3.5) + (B*7.5) ) / (3.5+7.5);
        System.out.printf ("MEDIA = %.5f\n",MEDIA);

    }
}
