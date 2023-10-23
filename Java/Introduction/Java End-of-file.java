import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

public class Solution {
    static boolean isTakeTestCase = false;
    FastScanner cin;
    Printer p;
    ModuloArithmetic mod;
    Vector<Integer> vector = new Vector<>();

    Solution() {
        cin = new FastScanner();
    }

    public static void main(String[] args) throws Exception {
        Solution solution = new Solution();
        solution.solve();

    }

    private void solve(Printer p, int testcase) throws Exception {   
        Scanner stdin =new Scanner(System.in);
        int n=1;
        do {
            System.out.println(n+++" "+stdin.nextLine());
        }
        while (stdin.hasNext());
        stdin.close();
      
    }

    public void solve() throws Exception {
        p = new Printer();
        mod = new ModuloArithmetic();
        for (int i = 0; i < 1000000; i++) {
            if (vector.size() >= 1001)
                break;
            if (i % 3 == 0 || i % 10 == 3) {
            } else
                vector.add(i);
        }
        int t = 1;
        if (isTakeTestCase)
            t = cin.nextInt();
        for (int i = 0; i < t; i++) {
            solve(p, i);
        }
        // out.printTime();
        p.out.close();

    }

    static class FastScanner {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer("");

        public String next() {
            while (!st.hasMoreTokens())
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            return st.nextToken();
        }

        public int nextInt() {
            return Integer.parseInt(next());
        }

        public double nextDouble() {
            return Double.parseDouble(next());
        }

        public long nextLong() {
            return Long.parseLong(next());
        }

        public String nextLine() throws IOException {
            return br.readLine();
        }

        public int[] nextIntArray(int n) {
            int[] arr = new int[n];
            readIntArray(arr);
            return arr;
        }

        public long[] nextLongArray(int n) {
            long[] arr = new long[n];
            readLongArray(arr);
            return arr;
        }

        public void readIntArray(int arr[]) {
            for (int i = 0; i < arr.length; i++)
                arr[i] = nextInt();
        }

        public void readLongArray(long arr[]) {
            for (int i = 0; i < arr.length; i++)
                arr[i] = nextLong();
        }

    }

    static class Printer {
        public PrintWriter out;

        public Printer() {
            this.out = new PrintWriter(System.out);
        }

        public void print(Object o1) {
            out.print(o1 + " ");
        }

        public void print(Object o1, Object o2) {
            out.print(o1 + " " + o2 + " ");
        }

        public void print(Object o1, Object o2, Object o3) {
            out.print(o1 + " " + o2 + " " + o3 + " ");
        }

        public void print(Object o1, Object o2, Object o3, Object o4) {
            out.print(o1 + " " + o2 + " " + o3 + " " + o4 + " ");
        }

        public void printList(List<?> lst) {
            lst.forEach((elem) -> print(elem));
        }

        public <T> void printArray(T[] arr) {
            for (int i = 0; i < arr.length; i++)
                print(arr[i]);
        }

        public void printArray(long[] arr) {
            for (int i = 0; i < arr.length; i++)
                print(arr[i]);
        }

        public void printArray(int[] arr) {
            for (int i = 0; i < arr.length; i++)
                print(arr[i]);
        }

        public void printReject() {
            print(-1);
        }

        // public void printYESNO(boolean b){
        // if(b) print("YES");
        // else print("NO");
        // }
        public void PYES() {
            println("YES");
        }

        public void PNO() {
            println("NO");
        }

        public void PYes() {
            println("Yes");
        }

        public void PNo() {
            println("No");
        }

        public void Pyes() {
            println("yes");
        }

        public void Pno() {
            println("no");
        }

        public void println() {
            out.println();
        }

        public void println(Object o1) {
            out.println(o1);
        }

        public void println(Object o1, Object o2) {
            out.println(o1 + " " + o2);
        }

        public void println(Object o1, Object o2, Object o3) {
            out.println(o1 + " " + o2 + " " + o3);
        }

        public void println(Object o1, Object o2, Object o3, Object o4) {
            out.println(o1 + " " + o2 + " " + o3 + " " + o4);
        }

        public void printlnList(List<?> lst) {
            printList(lst);
            println();
        }

        public <T> void printlnArray(T[] arr) {
            printArray(arr);
            println();
        }

        public void printlnArray(int[] arr) {
            printArray(arr);
            println();
        }

        public void printlnArray(long[] arr) {
            printArray(arr);
            println();
        }

        public void printKickStartCase(int t) {
            print("Case #", t, ": ");
        }

        public void printTime() {
            double tm = (double) System.currentTimeMillis() / 1000.0;
            System.err.println("time taken : " + tm);
        }

    }

    static class ModuloArithmetic {
        public static Map.Entry<Long, Long> extendedGcd(long a, long b) {
            if (b == 0) {
                return Map.entry(1L, 0L);
            } else {
                Map.Entry<Long, Long> prev = extendedGcd(b, a % b);
                long x = prev.getValue();
                long y = prev.getKey() - (a / b) * prev.getValue();
                return Map.entry(x, y);
            }
        }

        public static long hcf(long a, long b) {
            if (a == 0 || b == 0) {
                return Math.max(a, b);
            } else {
                Map.Entry<Long, Long> prev = extendedGcd(a, b);
                return a * prev.getKey() + b * prev.getValue();
            }
        }

        public static long lcm(long a, long b) {
            return a * (b / hcf(a, b));
        }

        public static long gcd(long a, long b) {
            return hcf(a, b);
        }

        public static long modSub(long a, long b, long mod) {
            return ((a % mod - b % mod + mod) % mod);
        }

        public static long modMul(long a, long b, long mod) {
            return ((a % mod) * (b % mod)) % mod;
        }

        public static long modAdd(long a, long b, long mod) {
            return ((a % mod) + (b % mod)) % mod;
        }

        public static long modInv(long a, long mod) {
            Map.Entry<Long, Long> prev = extendedGcd(a, mod);
            long x = prev.getKey();
            long y = prev.getValue();
            long g = a * x + mod * y;
            if (g != 1) {
                System.err.println("modular inverse does not exist , gcd != 1");
                // System.exit(0);
            }
            // adding mod to avoid negative value of x
            long res = (x % mod + mod) % mod;
            return res;
        }

        public static long modDiv(long a, long b, long mod) {
            a = a % mod;
            long inv = modInv(b, mod);
            long res = (inv * a) % mod;
            return res;
        }

        public static boolean isPrime(long x) {
            if (x <= 1) {
                return false;
            }
            for (int i = 2; i * i <= x; i++) {
                if (x % i == 0) {
                    return false;
                }
            }
            return true;
        }

        public static long pow(long x, long y, long p) {
            long res = 1;
            x = x % p; // Update x if it is more than or equal to p
            if (x == 0) {
                return 0; // In case x is divisible by p
            }
            while (y > 0) {
                if ((y & 1) == 1) {
                    res = (res * x) % p;
                }
                y = y >> 1; // y = y/2
                x = (x * x) % p;
            }
            return res;
        }

        public long mypow(long x, long n) {
            long result = 1;
            while (n > 0) {
                if (n % 2 == 1)
                    result = result * x;

                x = x * x;
                n = n / 2;
            }

            return result;
        }
    }
}


