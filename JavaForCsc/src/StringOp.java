public class StringOp {
    public static void main(String[] args) {
      String name = "Olayinka";  
      changeName(name);//still wouldnt change the value of name
                        // because strings are immutable and we're
                        // actually creating a copy of our name when we 
                        // modify it in the function
        System.out.println(name);
    }   

    static void changeName(String naam){
        naam = "Elon Musk"; //creates a new object
                            // this will only change in the scope of the function
    }
}
