/*
    Programmer : "Pranesh Chowdhury".
    Link : https://codeforces.com/problemset/problem/71/A
*/

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        double n = in.nextInt();
        String word = null;
        int l;
        for(int i = 1; i <= n; i++) {
            word = in.next();
            l = word.length();
            if(l > 10){
                System.out.print(word.charAt(0));
                System.out.print(l -2);
                System.out.println(word.charAt(l - 1));
            }
            else
                System.out.println(word);
        }
    }
}
