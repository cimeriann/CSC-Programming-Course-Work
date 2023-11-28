import java.util.Scanner;

public class Sum {
    public static void main(String[] args) {
        // Q: take input of two numbers and print the sum
        int ans = sum();
        System.out.println(ans);
    }

    static int sum(){
         Scanner in = new Scanner(System.in);

        System.out.print("Enter number 1: ");
        int num1 = in.nextInt();

        System.out.print("Enter number 2: ");
        int num2 = in.nextInt();

        int result = num1 + num2;
        // System.out.println("The sum of " + num1 + " and " + num2 + " is " + result);
        return result;
    }
    /*
     * access modifier return_type name(){
     * body
     * return statement;
     * }
     */

}
