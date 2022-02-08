/*
    Programmer : "Pranesh Chowdhury".
    Link : https://www.beecrowd.com.br/judge/en/runs/code/25306947
*/

import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String []args){
    
        Scanner input = new Scanner(System.in);
        double R,A;
        
        R = input.nextDouble();
        A =  3.14159 * (R*R);
        System.out.printf ("A=%.4f\n",A);
    }
}
