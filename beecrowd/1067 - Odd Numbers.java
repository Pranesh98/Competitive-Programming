// Link: https://www.beecrowd.com.br/judge/en/problems/view/1067

import java.io.IOException;
import java.util.Scanner;
 
public class Main{
    public static void main(String []args){
        Scanner input = new Scanner(System.in);
        int X = input.nextInt();
        
        for (int a = 1; a<=X;a++){
            if (a%2 != 0){
                System.out.printf ("%d\n",a);
            }
        }
    }
}
