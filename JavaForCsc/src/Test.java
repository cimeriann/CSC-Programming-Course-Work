public class Test {
    private static int id;

    public void m1() {
        this.id = 45;
    }
    public void m2() {
        Test.id = 45;
    }
}
