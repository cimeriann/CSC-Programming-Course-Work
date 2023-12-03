import java.util.Arrays;

public class MinMax {
    public static void main(String[] args) {
        int[] arr = {2, 3,4 ,5, 6, 7, 1,6,34,5,6};
        int min = findMin(arr);
        System.out.println(min);
        int target = 5;
        int[][] twoDArray = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };
        int[] _min = minSearch2D(twoDArray, target);
        System.out.println(Arrays.toString(_min));
        int max = maxSearch2D(twoDArray);
        System.out.println((max));
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
    static int[] minSearch2D(int[][] arr, int target){
        for (int row = 0; row < arr.length; row++) {
            for (int col = 0; col < arr[row].length; col++) {
                if (arr[row][col] == target) {
                    return new int[]{row, col};
                }
            }
        }
        return new int[]{-1, -1};
    }
    static int maxSearch2D(int[][] arr){
        int max = Integer.MIN_VALUE;
        for (int row = 0; row < arr.length; row++) {
            for (int col = 0; col < arr[row].length; col++) {
                if (arr[row][col] > max) {
                    max =  arr[row][col];
                }
            }
        }
        System.out.println("The max element is " + max );
        return max;
        // return new int[]{row, col};

    }
}
