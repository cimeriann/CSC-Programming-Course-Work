import java.util.Scanner;

public class Arrays {
    public static void main(String[] args) throws Exception {
        String[] cars = { "Subaru", "Corvette", "Tesla", "Mustang" };
        System.out.println(cars[0]);
        System.out.println(cars[2]);

        System.out.println(cars[3]);

        // array initialization
        String[] elements = new String[4];
        elements[0] = "Water";
        elements[1] = "Wind";
        elements[2] = "Fire";
        elements[3] = "Earth";

        // print out the contents of he array with a for loop
        for (int i = 0; i < elements.length; i++) {
            System.out.println(elements[i]);
        }
        // 2D Arrays - an array of arrays
        String[][] newCars = new String[3][3];

        newCars[0][0] = "Camaro";
        newCars[0][1] = "Honda";
        newCars[0][2] = "Hyndei";
        newCars[1][0] = "Lamborghini";
        newCars[1][1] = "Subaru";
        newCars[1][2] = "Chiron";
        newCars[2][0] = "Ranger";
        newCars[2][1] = "Roadster";
        newCars[2][2] = "Prius";
        for (int i = 0; i < newCars.length; i++) {
            for (int j = 0; j < newCars[i].length; j++) {
                System.out.print(newCars[i][j] + " ");
            }
            System.out.println("");
        }
    }
}
