import java.util.Scanner;

public class Print1ToN {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); // Input n
        for (int i = 1; i <= n; i++) {
            System.out.print(i + " ");
        }
    }
}
