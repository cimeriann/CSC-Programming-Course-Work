public class Armstrong {
    public static void main(String[] args) {
        // 
        // boolean ans = checkArmStrong(153);
        // System.out.println(ans);
        printArmStrong1000();
    }
    static void printArmStrong1000(){
        for (int i = 100; i < 999; i++) {
            boolean ans = checkArmStrong(i);
            if (ans){
                System.out.println(i + " " + ans);
            }
            
        }
    }
    static boolean checkArmStrong(int n){
        int original = n;
        int sum = 0;
        while(n > 0){
            int rem = n % 10;
            n = n/10;
            sum += rem * rem*rem;
        }
        // if (sum == original){    
        //     return true;
        // }
        return sum == original;
    }
}
