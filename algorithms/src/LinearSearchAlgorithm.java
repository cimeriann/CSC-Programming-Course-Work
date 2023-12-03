public class LinearSearchAlgorithm {
    public static void main(String[] args) {
        int[] numbers = {2, 34,3,5 ,34,5,45,21,23, -4, 4,234 ,5};
        int target = -19 ;
        int ans = linearSearch(numbers, target);
        System.out.println(ans);
    }

    // search the array for 'target', if found, return the index
    // otherwise return -1
    static int linearSearch(int[] arr, int target){
        if (arr.length == 0){
            return -1;
        }
        for (int i = 0; i < arr.length; i++) {
            if(arr[i] == target){
                return i;
            }

        }
        return -1;
    }
       static int linearSearchElement(int[] arr, int target){
        for (int i = 0; i < arr.length; i++) {
            int element = arr[i];
            if(element == target){
                return element;
            }

        }
        // because -1 could actually be a value returned from the array
        // I need to return something else
        return Integer.MAX_VALUE;
    }
    static boolean linearSearchString(String str, char target){
        if (str.length() == 0){
            return false;
        }
        for (int i = 0; i < str.length(); i++) {
            if (target == str.charAt(i)){
                return true;
            }
        }
        return false;
    }
    // using a for each loop
    static boolean linearSearchString2(String str, char target){
        if (str.length() == 0) {
            return false;
        }
        for (char ch : str.toCharArray()) {
            if (ch == target) {
                return true;
            }
        }
        return false;
    }
}
