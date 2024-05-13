public class TestSimpleCircle {
    public static void main(String[] args) {
        /**
         * Creat three circle objects, one with the default radius,
         * two others with radius 5 and 25 respectively
         */
        SimpleCircle circle1 = new SimpleCircle();
        System.out.println("The area of circle with radius of: " +
                 circle1.radius + " is " + circle1.getArea());

        SimpleCircle circle2 = new SimpleCircle(5);
        System.out.println("The area of circle with radius of: " +
                 circle2.radius + " is " + circle2.getArea());

        SimpleCircle circle3 = new SimpleCircle(25);
        System.out.println("The area of circle1 with radius of: " +
                 circle3.radius + " is " + circle3.getArea());

        System.out.println("The total number of circles that have been created is: "
        + circle3.getNumberOfCirclesCreated());
    }
}

/**
 * SimpleCircle
 */
class SimpleCircle {
    static int numberOfCirclesCreated;
    double radius;

    /** Construct a circle with the default radius */
    SimpleCircle() {
        radius = 1;
        numberOfCirclesCreated++;
    }

    /** Construct a circle which updates the radius with `newRadius` */
    SimpleCircle(double newRadius) {
        radius = newRadius;
        numberOfCirclesCreated++;
    }

    /**
     * method: getArea
     */
    double getArea() {
        return radius * radius * Math.PI;
    }

    /**
     * method getPerimeter
     */
    double getPerimeter() {
        return 2 * Math.PI * radius;
    }

    /**
     * method: setRadius
     * description: accepts a new value for the radius and
     * updates the value of the circle's radius
     */
    void setRadius(double newRadius) {
        radius = newRadius;
    }
    static int getNumberOfCirclesCreated(){
        return numberOfCirclesCreated;
    }

}
