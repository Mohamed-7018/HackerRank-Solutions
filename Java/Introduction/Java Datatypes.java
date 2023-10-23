import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            try {
                Long num = sc.nextLong();
                System.out.println(num + " can be fitted in:");
                if (Byte.MIN_VALUE <= num && Byte.MAX_VALUE >= num) {
                    System.out.println("* byte");
                }
                if (Short.MIN_VALUE <= num && Short.MAX_VALUE >= num) {
                    System.out.println("* short");
                }
                if (Integer.MIN_VALUE <= num && Integer.MAX_VALUE >= num) {
                    System.out.println("* int");
                }
                if (Long.MIN_VALUE <= num && Long.MAX_VALUE >= num) {
                    System.out.println("* long");
                }
            } catch (Exception e) {
                System.out.println(sc.next() + " can't be fitted anywhere.");
            }

        }
    }
}
