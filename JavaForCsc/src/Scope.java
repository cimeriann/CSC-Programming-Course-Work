public class Scope {
    
    public static void main(String[] args) {
        int a = 22;
        // int b = 35;
        String name = "Yinka";
        {
             a = 23; // values initialized outside this block cannot be reinitialized
            //int c = 43;// values initiated in the block will stay in the block
            System.out.println(a);
        }
        System.out.println(a);
        System.out.println(name);

        for (int i = 0; i < 4; i++) {
            i += 2; //i cannot be used outside
            //anything initialized outside, can be used inside while anything initialized 
            // inside cannot be used outside
            // anything initialized inside the block can also be reinitialized outside the block
        }
    }

    static void random(int marks){
        int num = 34;
        System.out.println(num);
        System.out.println(marks);
    }
}
