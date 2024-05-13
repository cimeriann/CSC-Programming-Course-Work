// import java.util.Scanner;

// public class Testing {
//     public static void main(String[] args) {
//         Scanner inputCollector = new Scanner(System.in);

//         System.out.print("Enter a name: ");

//         String userInput = inputCollector.nextLine();

//         System.out.println("Your name is: "+ userInput);
//         inputCollector.close();
//     }
// }

// public class ShowErrors{
//     public static void main(String[] args) {
//         ShowErrors t = new ShowErrors(5); -> constructor is undefined
//     }
// }

// public class ShowErrors{
//     public static void main(String[] args) {
//         ShowErrors t = new ShowErrors();
//         t.x(); -> undefined method
//     }
// }

// public class ShowErrors{
//     public void method1(){
//         Circle c;
//         System.out.println("What is radius " + c.getRadius());

//         c = new Circle();
//     }
//     public static void main(String[] args) {
//         ShowErrors t = new ShowErrors(5);
//     }
// }

public class C{
    private int p;

    public C(){
        this(0);
        System.out.println("C's no-arg constructor invoked");
    }
    public C(int p){
        p = p;
    }
    public void setP(int p){
        p = p;
    }
}