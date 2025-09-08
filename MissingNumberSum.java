// File: MissingNumberSum.java
public class MissingNumberSum {
    public static int missingNumber(int[] nums) {
        int n = nums.length;
        long expected = (long) n * (n + 1) / 2; // use long to avoid overflow
        long actual = 0;
        for (int v : nums) actual += v;
        return (int) (expected - actual);
    }

    public static void main(String[] args) {
        int[] a1 = {3,0,1};
        System.out.println(missingNumber(a1)); // 2
    }
}
