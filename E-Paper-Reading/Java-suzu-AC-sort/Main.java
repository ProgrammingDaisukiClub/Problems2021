import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int test = 0; test < T; ++test) {
            int N = sc.nextInt();
            int[] A = new int[N];
            for (int i = 0; i < N; ++i) {
                A[i] = sc.nextInt();
            }
            Arrays.sort(A);
            System.out.println(A[0]+A[1]);
        }
    }
}