public class App {
    public static void main(String[] args) throws Exception {
        System.out.println("\"Hello, World! in quotes\"");
        // shortcut to generate the standard print line statement
        // sysout
        // spaces dont really matter too much depending on where they are
        // DATA TYPES
        // primitives
        // int x;
        // long y = 13431534134131234L;
        // // up to 7 decimal places for a float
        // float z = 3.2343454f;
        // // up to fifteen decimal places for a double
        // double a = 3.2334324341234134341;
        // boolean val = true;

        // char symbol = '@';
        // System.out.println(symbol);
        // // reference (they always begin with a capital letter - the identifier)
        // String name = "What happens to be my name";
        // System.out.println("Hello " + name);

        String x = "water";
        String y = "kool-aid";
        String temp = null;

        // switching
        temp = x;
        x = y;
        y=temp;
        System.out.println("x: "+x);
        System.out.println("y: "+y);

    }
}
