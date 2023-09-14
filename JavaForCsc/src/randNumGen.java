import java.util.Random;

public class randNumGen {
    public static void main(String[] args) {
        // generating random values
        Random random = new Random();

        // int x = random.nextInt(6) + 1;
        double y = random.nextDouble();
        boolean z = random.nextBoolean();
        // System.out.println(x);
        System.out.println(z);
        System.out.println(y);
    }
}