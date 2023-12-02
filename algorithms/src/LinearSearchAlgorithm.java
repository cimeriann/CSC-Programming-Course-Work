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
        for (int i = 0; i < arr.length; i++) {
            if(arr[i] == target){
                return i;
            }

        }
        return -1;
    }
}
