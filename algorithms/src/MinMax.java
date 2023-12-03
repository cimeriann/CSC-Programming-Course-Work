public class MinMax {
    public static void main(String[] args) {
        int[] arr = {2, 3,4 ,5, 6, 7, 1,6,34,5,6};
        int min = findMin(arr);
        System.out.println(min);
    }
    static int findMin(int ...arr){
        int min = arr[0];
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] < min) {
                min = arr[i];
            }

        }
        return min;
    }
}
