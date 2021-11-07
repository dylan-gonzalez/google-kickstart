import java.util.Scanner;

public class K_goodness {

    public static void main(String[] args) {
        Scanner scanner = null;
        scanner = new Scanner(System.in);
        
        // try {
        //     scanner = new Scanner(System.in);
        // } finally {
        //     if (scanner != null)
        //         scanner.close();
        // }

        int t = scanner.nextInt();

        for (int i = 0; i < t; i++) {
            System.out.println("Line: " + scanner.next());
            String[] line = scanner.nextLine().split(" ");

            System.out.println(line[0]);
            int k = Integer.parseInt(line[1]);

            String s = scanner.nextLine();

            kGoodnessString(s, k);
        }

        scanner.close();


    }

    private static int kGoodnessString(String s, int k) {
        int minOps = 0, x = 0;
        for (int i = 0; i < s.length() / 2; i++) {
            if (s.charAt(i) != s.charAt(s.length() - 1 - i)) {
                x++;
            }
        }

        if (x == k) {
            return 0;
        } else {
            return Math.abs(x-k);
        }

    }

}
