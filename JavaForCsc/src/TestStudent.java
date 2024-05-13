/**
 * Student
 */ 
class Student {
    int age;
    String name;
    Boolean isScienceMajor;
    char gender;    
    
}
public class TestStudent{
    public static void main(String[] args){
        Student student1 = new Student();
        
        System.out.println(student1.age);
        System.out.println(student1.name);
        System.out.println(student1.isScienceMajor);
        System.out.println(student1.gender);

        int age;
        String name2;
        // System.out.println(age); -> variable not initialized error
        // System.out.println(name2);
    }
}
/**
 * Observation: Java seems to initialize variables in classes
 * to some default values 0 for number types, null for boolean and string
 * types.
 * The same code would resort in a compile error when used outside of
 * a class
 */