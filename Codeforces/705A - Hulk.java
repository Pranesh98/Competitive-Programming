import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
      
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
 
        for (int i=1; i<n; i++){
            if (i % 2 != 0){
                System.out.printf("I hate");
            }
            else {
                System.out.printf("I love");
            }
            System.out.printf(" that ");
        }
        if (n % 2 == 0){
            System.out.printf("I love it");
        }
        else {
            System.out.printf("I hate it");
        }
 
    }
}
