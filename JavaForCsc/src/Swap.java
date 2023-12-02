public class Swap {
    public static void main(String[] args) {
        System.out.println();

        int a = 5;
        int b = 6;
        swap(a, b);

        System.out.println("a is now: " + a);
        System.out.println("b is now: " + b);
    }
    static void swap(int a, int b){
        int temp = a;
        a = b;
        b = temp;
    }
}
