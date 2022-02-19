import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
    
        Scanner in = new Scanner (System.in);
        int k, n, w, total=0, borrow_money;
        k = in.nextInt();
        n = in.nextInt();
        w = in.nextInt();
 
        for (int i = 1; i <= w; i++){
            total = total + i*k;
        }
        borrow_money = total - n;
        if (borrow_money<0){
            System.out.printf("0");
        }
        else {
            System.out.printf("%d",borrow_money);
        }
 
    }
}
