import java.util.Arrays;
public class ChangeValue {
    public static void main(String[] args) {
        int[] arr = {2, 3, 5, 6, 7};
        
        change(arr);
        System.out.println("Updated value of arr is: ");
        System.out.println(Arrays.toString(arr));
    }
    static void change(int[] myArr){
        myArr[0] = 92;
    }
}
