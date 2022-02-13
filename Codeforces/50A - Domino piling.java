// Program:  Domino piling
// Link: https://codeforces.com/problemset/problem/50/A

import java.util.Scanner;
public class Main {

    public static void main(String [] args){
        Scanner in = new Scanner (System.in);
        
        int M, N, s=0;
        M = in.nextInt();
 
        N = in.nextInt();
 
        if (M>=1 && N<=16){
            s = (M*N)/2;
        }
        System.out.println (s);
 
    }
}
