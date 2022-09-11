import java.util.Scanner;
import java.text.BreakIterator;

public class Main{
    public static void main(String[] args){
        Scanner its = new Scanner(System.in);
        int a = its.nextInt();
        System.out.println("The next number for the number " + a + " is " + (a++) + ".");
        System.out.println("The previous number for the number " + (--a) + " is " + (--a) + ".");
    }
}