import java.util.Scanner;

public class userInput{
    public static void main(String[] args) throws Exception{
        Scanner scanner = new Scanner(System.in);
        String name;
        int age;
        
        System.out.println("What is your name? ");
        name = scanner.nextLine();
        System.out.println("How old might you be? ");
        age = scanner.nextInt();
        // calling nextline after the next int should clear the scanner
        scanner.nextLine();
        // bug arises, as scanner doesnt wait to accept input for food
        System.out.println("What is your favorite food? ");
        String food = scanner.nextLine();

        System.out.println("Hello, " + name);
        System.out.println("You are " + age + " years old.");
        System.out.println("You like " + food);

        scanner.close();

    }
}