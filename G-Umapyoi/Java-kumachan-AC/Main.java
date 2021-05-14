import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        final Scanner scanner = new Scanner(System.in);
    
        final int numCases = scanner.nextInt();
        for (int i = 0; i < numCases; i++) {
            final int a = scanner.nextInt();
            final int b = scanner.nextInt();
            final int c = scanner.nextInt();
            final int d = scanner.nextInt();
            final int e = scanner.nextInt();

            final boolean answer = a == b + c + d && c + d == e;
            System.out.println(answer? "Yes" : "No");
        }
    }
}