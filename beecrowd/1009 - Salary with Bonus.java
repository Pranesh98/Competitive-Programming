import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[]args){
        Scanner in = new Scanner(System.in);
        // Input name: 
        String name = in.nextLine();
        double salary, total;
      
        // Input salary, total:
        salary = in.nextDouble();
        total = in.nextDouble();
      
        double percent = (15.00/100.00);
        double value;
      
        value = ((total * (percent)) + salary);
        System.out.printf("TOTAL = R$ %.2f",value);
      
        System.out.printf("\n");
    }
}
