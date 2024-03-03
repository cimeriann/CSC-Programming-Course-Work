public class FirstAndLastOccurrence {
    public static void main(String[] args) {
        int[] arr = {5, 7, 7, 7, 8, 9, 10};
        int target = 7;

        int[] positions = findFirstAndLastOccurrence(target, arr);
        System.out.println("The position of the first occurrence of " + target + " is " + positions[0]);
    }
    static int[] findFirstAndLastOccurrence(int target, int[] arr){

        int [] ans = {-1, -1};
        int start = search(arr, target, true);
        int end = search(arr, target, false);

        ans[0] = start;
        ans[1]= end;
        return ans;
    }
    // function returns the index value of target
    static int search(int[] arr, int target, boolean findStartIndex){
        int ans = -1;
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
                // potential ans found
                ans =  mid;
                if (findStartIndex) {
                    end = mid -1;
                } else{
                    start = mid + 1;
                }
            }
        }
        return ans;
    }
}
