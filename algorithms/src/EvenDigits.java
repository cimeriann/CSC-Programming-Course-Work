// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
public class EvenDigits {
    public static void main(String[] args) {
        int[] arr = {2, 3, 5, 6, 7, 923, 64, 6423};
        int res = findNumbers(arr);
        System.out.println(res);
    }
    // static int findNumbers(int[] nums) {
    //     int count = 0;
    //     for(int num: nums){
    //         if(checkEven(num)){
    //             count++;
    //         }
    //     }
    //     return count;
    // }
    static int findNumbers(int[] nums) {
        int count = 0;
        for(int num: nums){
            if(checkEven(num)){
                count++;
            }
        }
        return count;
    }
    static boolean checkEven(int num){
        int numOfDigits = digits(num);
        if (numOfDigits % 2 == 0) {
            return true;
        }
        return false;
    }
    static int digits(int num){
        int count = 0;
        while(num > 0){
            num = num /10;
            count++;
        }
        return count;
    }
    // static boolean checkEven(int numnum){
    //     String str = Integer.toString(numnum);
    //     if (str.length() % 2 == 0) {
    //         return true;
    //     }
    //     return false;
}
