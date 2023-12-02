public class Overloading {
    public static void main(String[] args) {
        fun(234);
        fun(":welcome");
        int answer = sum(4, 19);
        System.out.println("The answer is: "+ answer);
    }
    static void fun(int a){
        System.out.println(a);
    }
    static void fun(String b){
        System.out.println(b);
    }

    static int sum(int a, int b){
        return a + b;
    }
    static int sum(int a, int b, int c){
        return a + b + c;
    }
    // function overloading happens at compile time
    // in order to have two functions with the same name, their args must be of
    // different types or different number of arguments
}
