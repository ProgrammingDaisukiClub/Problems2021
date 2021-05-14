import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int test_case = sc.nextInt();
        for (int test = 0; test < test_case; ++test) {
            int N = sc.nextInt();
            String s = sc.next(), mohu = "mohu";
            Boolean res = N % 4 == 0;
            if (res) {
                for (int i = 0; i < N; i += 4)
                    for (int j = 0; j < 4; ++j)
                        if (s.charAt(i + j) != mohu.charAt(j))
                            res = false;
            }
            System.out.println(res ? "Yes" : "No");
        }
        sc.close();
    }
}