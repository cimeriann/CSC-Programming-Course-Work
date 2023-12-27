public class BinarySearch {
    public static void main(String[] args) {
        int[] arr = generateSortedArray(-1000);

        int res = binarySearch(arr, 56);
        System.out.println(res);
    }
    // return the index
    // return -1 if it does not exist
    static int binarySearch(int[] arr, int target){
        int start = 0;
        int end = arr.length - 1;

        while (start <= end) {
            // find the middle element
            // since we might deal with arrays that the number of
            // elements might be more than an int type can hold, we 
            // have to handle the overflow
            int mid = start + (end - start)/2;

            if (target < arr[mid]){
                // set the new "end" to be the element before the middle element
                // since mid has already been automatically eliminated from the conditional check
                end = mid - 1;

            }else if(target > arr[mid]){
                // set the new "start" to the next element after the middle element
                start = mid + 1;
            } else {
                // target found
                return mid;
            }
        }
        return -1;
    }
    static int[] generateSortedArray(int length){
        if (length <= 0) {
            System.out.println("Length cannot be less than zero or equal to it");
            return new int[]{-1, -1};
        }
        int[] sortedArray = new int[length];

        // Populate the array with sorted values
        for (int i = 0; i < length; i++) {
            sortedArray[i] = i + 1;
        } 
        return sortedArray;
    }
}
