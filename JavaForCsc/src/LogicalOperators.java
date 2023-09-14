import java.util.Scanner;

public class LogicalOperators {
    public static void main(String[] args) throws Exception{

        int temp = 32;
        
        if (temp > 35) {
            System.out.println("It is hot outside");
        }
        else if(temp >= 25 && temp <= 30){
            System.out.println("It is warm outside");
        }
        Scanner scanner = new Scanner(System.in);
        System.out.println("You are playing a game: press q or Q to quit");

        String response = scanner.next();
        scanner.close();

        if (response.equals("q") || response.equals("Q")){
            System.out.println("You quit the game");
        }
        // if (!response.equals("q") && !response.equals("Q")){
        //     System.out.println("You quit the game");
        // }
        else{
            System.out.println("You are still playing the game");
        }
    }
}
