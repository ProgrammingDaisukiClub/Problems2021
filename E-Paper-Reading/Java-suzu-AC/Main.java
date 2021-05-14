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
            int min1 = Integer.MAX_VALUE;
            int min2 = Integer.MAX_VALUE;
            for(int i = 0; i < N; ++i){
                if(A[i] < min2){
                    min2 = A[i];
                    if(min2 < min1){
                        int tmp = min2;
                        min2 = min1;
                        min1 = tmp;
                    }
                }
            }
            System.out.println(min1 + min2);
        }
    }
}