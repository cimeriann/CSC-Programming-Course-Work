import java.util.Scanner;

/**
 * mathMethods
 */
public class mathMethods {

    public static void main(String[] args) throws Exception {
        // double x = 3.14;
        // double y = -19;

        // double z = Math.max(x, y);
        // System.out.println(z);
        // double a = Math.abs(y);
        // System.out.println(((double)Math.sqrt(x)));
        // System.out.println(a);
        //
        // calculate the hypotenuse of a triangle
        double x;
        double y;
        double z;

        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter side x");
        x = scanner.nextDouble();
        System.out.println("Enter side y");
        y = scanner.nextDouble();

        z = Math.sqrt((x*x) + (y * y));
        System.out.println("The hypotenuse is: "+ z );
        scanner.close();

    }
}