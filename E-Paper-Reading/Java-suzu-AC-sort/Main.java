import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int test_case = sc.nextInt();
        for(int test = 0; test < test_case; ++test) {
            int N = sc.nextInt();
            int[] T = new int[N];
            for (int i = 0; i < N; ++i) {
                T[i] = sc.nextInt();
            }
            Arrays.sort(T);
            System.out.println(T[0]+T[1]);
        }
    }
}