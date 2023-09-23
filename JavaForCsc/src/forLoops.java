import java.util.Scanner;

public class forLoops {
    public static void main(String[] args) throws Exception {
        // executing a block of code a fixed number of times
        for (int i = 0; i <= 10; i++) {
            // Scanner scanner = new Scanner(System.in);
            System.out.print(i);
        }
        System.out.println("");

        System.out.println("okay");
        // nested loops
        Scanner scanner = new  Scanner(System.in);
        int rows;
        int columns;
        String symbol = "";

        System.out.println("Enter # of rows");
        rows = scanner.nextInt();

        System.out.println("Enter # of columns");
        columns = scanner.nextInt();

        // collect symbol from user
        System.out.println("Enter symbol to use");
        symbol = scanner.next();
        scanner.close();

        // handle input to print rectangle
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                System.out.print(symbol);
            }
            System.out.println("");
        }
    }
}