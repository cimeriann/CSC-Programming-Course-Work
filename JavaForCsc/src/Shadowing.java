import java.util.Arrays;

public class Shadowing {
    static int x = 90;
    public static void main(String[] args) {
        System.out.println(x);//should print 90
        fun(2,3,343,4,342,124,34,564);
    }
    static void fun(int ...myArray){
        System.out.println(Arrays.toString(myArray));
    }

    static void multiple(int a, String b, String ...c ){
        //the ...spreader must always come last
        //
    }
}
