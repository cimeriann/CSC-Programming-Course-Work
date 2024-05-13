public class LinearTime{
    public static void main(String args[]){
        int[] arr = new int[200];
        String s = "cat";
        System.out.println(arr[s.charAt(2)]);
    }
    static void linearFunc(int arr[]){
        for(int i = 0; i < arr.length; i++){
            System.out.println(1000*100000);//constant expressions, exps that dont scale with input to the function
        }
    }
}