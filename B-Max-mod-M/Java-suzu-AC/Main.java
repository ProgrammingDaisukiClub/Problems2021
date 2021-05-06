import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int test = 0; test < T; ++test) {
            int A = sc.nextInt();
            int B = sc.nextInt();
            int M = sc.nextInt();
            if (A % M > B % M) {
                System.out.println(A);
            } else {
                System.out.println(B);
            }
        }
        sc.close();
    }
}