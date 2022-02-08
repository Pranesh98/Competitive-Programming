/*
    Programmer : "Pranesh Chowdhury".
    Link : https://www.beecrowd.com.br/judge/en/problems/view/1004
*/ 

import java.io.IOException;
import java.util.Scanner;
public class Main{
    public static void main(String []args){
        Scanner input = new Scanner(System.in);
        int A, B, PROD;
        A = input.nextInt();
        B = input.nextInt();
        PROD = A*B;
        System.out.printf ("PROD = %d\n",PROD);
    }
}
