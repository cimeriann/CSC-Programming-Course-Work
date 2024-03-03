public class Factorial {
    public static void main(String[] args){
        int number = 6;
        int result = factorial(number);
        System.out.println(result);
    }
    static int factorial(int number){
        int sum = 1;
        for(int i = 1; i <= number; i++){
            sum *= i;
        }
        return sum;
    }
}
