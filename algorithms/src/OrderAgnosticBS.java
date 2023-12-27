public class OrderAgnosticBS {
    public static void main(String[] args) {
        // int[] arr = { -1, 0, 2, 4, 5, 6, 7, 8, 9, 12, 23, 25 , 27};
        int[] arr = {99, 89,88,87,76,65,45,32,23,12,8,4,1};
        int target = 23;
        int ans = orderAgnosticBS(arr, target);
        System.out.println(ans);
    }

    static int orderAgnosticBS(int[] arr, int target){
        int start = 0;
        int end = arr.length -1;

        // find whether the array is in ascending or descending order
        boolean isAscending = arr[start] < arr[end];

        // if(arr[start] < arr[end]){
        //     isAscending = true;
        // }else{
        //     isAscending = false;
        // }
        while (start <= end) {
            // find the middle element
            // since we might deal with arrays that the number of
            // elements might be more than an int type can hold, we 
            // have to handle the overflow
            int mid = start + (end - start)/2;

            if (arr[mid] == target) {
                return mid;
            }
            if (isAscending) {
                if (target < arr[mid]){
                // set the new "end" to be the element before the middle element
                // since mid has already been automatically eliminated from the conditional check
                end = mid - 1;

            }else if(target > arr[mid]){
                // set the new "start" to the next element after the middle element
                start = mid + 1;
            }
            }else{
                if (target > arr[mid]){
                // set the new "end" to be the element before the middle element
                // since mid has already been automatically eliminated from the conditional check
                end = mid - 1;

            }else if(target < arr[mid]){
                // set the new "start" to the next element after the middle element
                start = mid + 1;
            } else {
                // target found
                return mid;
            }
        }
        }
           
    return-1;
    }
}
