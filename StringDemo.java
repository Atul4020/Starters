import org.w3c.dom.TypeInfo;

public class StringDemo {
    public static void main(String[] args) {
        String str = "Hello how are you my friend";
        System.out.println(str.length());
        System.out.println(str.toUpperCase());
        System.out.println(str.toLowerCase());
        System.out.println(str.indexOf("how"));
        System.out.println(str.charAt(1));

        String str1 = "John";
        String str2 = "Doe";

        System.out.println(str1 + " " + str2);

        String str3 = "10";
        int num = 20;
        // String r = str3 + num;
        // System.out.println(r.getClass().getName());

        System.out.println(((Object) (str3 + num)).getClass().getName());
        System.out.println(str3 + num);

        System.out.println(Math.max(5, 10));
        System.out.println(Math.min(5, 10));
        System.out.println(Math.sqrt(64));
        System.out.println(Math.abs(-4.7));
        System.err.println(Math.random());
        System.out.println((int) (Math.random() * 101)); // gives between the 0 to 100

        int num4 = 10;
        System.out.println(num > num4);

        int time = 20;
        String result = (time < 18) ? "Good day." : "Good evening.";
        System.out.println(result);

        String[] cars = { "Volvo", "BMW", "Ford", "Mazda" };
        for (String car : cars) {
            System.out.println(car);
        }

        int[][] myNumbers = { { 1, 2, 3, 4 }, { 5, 6, 7 } };
        for (int i = 0; i < myNumbers.length; ++i) {
            for (int j = 0; j < myNumbers[i].length; ++j) {
                System.out.println(myNumbers[i][j]);
            }
        }

        int[][] myNumbers1 = { { 1, 2, 3, 4 }, { 5, 6, 7 } };
        for (int[] row : myNumbers1) {
            for (int i : row) {
                System.out.println(i);
            }
        }
    }
}
