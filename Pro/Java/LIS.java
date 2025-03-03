import java.util.Scanner;

public class LIS {
  public static int longestIncreasingSubsequence(int[] arr) {
    int n = arr.length;
    int[] dp = new int[n];
    int maxLen = 1;

    for (int i = 0; i < n; i++) {
      dp[i] = 1;
      for (int j = 0; j < i; j++) {
        if (arr[i] > arr[j]) {
          dp[i] = Math.max(dp[i], dp[j] + 1);
        }
      }
      maxLen = Math.max(maxLen, dp[i]);
    }

    return maxLen;
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter numbers: ");
    String[] input = sc.nextLine().split(" ");
    int[] arr = new int[input.length];
    for (int i = 0; i < input.length; i++) {
      arr[i] = Integer.parseInt(input[i]);
    }
    sc.close();

    System.out.println(longestIncreasingSubsequence(arr));
  }
}
