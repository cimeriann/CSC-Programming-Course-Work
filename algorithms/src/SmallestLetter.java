public class SmallestLetter {
    public static void main(String[] args) {
        
    }
    public char nextGreatestLetter(char[] letters, char target) {
            int start = 0;
            int end = letters.length - 1;
    
            while (start <= end) {
                // find the middle element
                // since we might deal with arrays that the number of
                // elements might be more than an int type can hold, we
                // have to handle the overflow
                int mid = start + (end - start) / 2;
    
                if (target < letters[mid]) {
                    // set the new "end" to be the element before the middle element
                    // since mid has already been automatically eliminated from the conditional
                    // check
                    end = mid - 1;
    
                } else {
                    // set the new "start" to the next element after the middle element
                    start = mid + 1;
                }
            }
            return letters[start % letters.length];
        }
    }
