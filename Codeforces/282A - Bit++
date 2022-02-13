// Program: Bit++
// Link: https://codeforces.com/contest/282/problem/A

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner (System.in);
        int x=0;
        int n = in.nextInt();
 
        for (int i = 1; i <= n; i++){
            String a = in.next();
            if (a.equals("X++") || a.equals("++X")){
                x++;
            }
            else if (a.equals("--X") || a.equals("X--")){
                x--;
            }
        }
        System.out.printf("%d", x);
    }
}
