public class App {
    public static void main(String[] args) throws Exception {
        System.out.println("\"Hello, World! in quotes\"");
        // shortcut to generate the standard print line statement
        // sysout
        // spaces dont really matter too much depending on where they are
        // DATA TYPES
       
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
