import java.util.Scanner;

public class Greeting {
    public static void main(String[] args) {
        greet();
    }
        static String greet(){
        Scanner _scanner = new Scanner(System.in);
        String greeting = _scanner.nextLine();
        _scanner.close();
        
        return greeting;
    }
}
