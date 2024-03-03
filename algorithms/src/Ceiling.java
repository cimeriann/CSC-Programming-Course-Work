public class Ceiling {
    public static void main(String[] args) {
        int[] myArr = { 2, 3, 5, 9, 14, 16, 18 };
        int ceil = ceiling(myArr, 15);
        int _floor = floor(myArr, 15);
        System.out.println(ceil);
        System.out.println(_floor);

    }

    static int ceiling(int[] arr, int target) {
        if (target > arr[arr.length-1]) {
            return -1;
        }
        int start = 0;
        int end = arr.length - 1;

        while (start <= end) {
            // find the middle element
            // since we might deal with arrays that the number of
            // elements might be more than an int type can hold, we
            // have to handle the overflow
            int mid = start + (end - start) / 2;

            if (target < arr[mid]) {
                // set the new "end" to be the element before the middle element
                // since mid has already been automatically eliminated from the conditional
                // check
                end = mid - 1;

            } else if (target > arr[mid]) {
                // set the new "start" to the next element after the middle element
                start = mid + 1;
            } else {
                // target found
                return mid;
            }
        }
        return start;
    }

    static int floor(int[] arr, int target ){

        int start = 0;
        int end = arr.length - 1;

        while (start <= end) {
            // find the middle element
            // since we might deal with arrays that the number of
            // elements might be more than an int type can hold, we
            // have to handle the overflow
            int mid = start + (end - start) / 2;

            if (target < arr[mid]) {
                // set the new "end" to be the element before the middle element
                // since mid has already been automatically eliminated from the conditional
                // check
                end = mid - 1;

            } else if (target > arr[mid]) {
                // set the new "start" to the next element after the middle element
                start = mid + 1;
            } else {
                // target found
                return mid;
            }
        }
        return end;        
    }
}