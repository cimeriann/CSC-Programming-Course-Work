import java.util.Scanner;

public class StringOp {
    public static void main(String[] args) {
        Scanner _scanner = new Scanner(System.in);
        System.out.println("Enter your name: ");
        final String name = _scanner.next();
        _scanner.close();
        changeName(name);//still wouldnt change the value of name
                        // because strings are immutable and we're
                        // actually creating a copy of our name when we 
                        // modify it in the function
        System.out.println(name);
    }   

    static void changeName(String naam){
        naam = "Elon Musk"; //creates a new object
                            // this will only change in the scope of the function
    }
    /**
     * Data types and their sizes
     * Byte: 8bits
     * Short: 2 bytes
     * Int: 4 bytes
     * Long: 8 bytes
     * Float: 4 bytes
     * Double: 8 bytes1
     */
}
