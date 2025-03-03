#include <stdio.h>

int longest_increasing_subsequence(int arr[], int n)
{
  int dp[n], maxLen = 1;

  for (int i = 0; i < n; i++)
  {
    dp[i] = 1;
    for (int j = 0; j < i; j++)
    {
      if (arr[i] > arr[j] && dp[i] < dp[j] + 1)
      {
        dp[i] = dp[j] + 1;
      }
    }
    if (dp[i] > maxLen)
    {
      maxLen = dp[i];
    }
  }

  return maxLen;
}

int main()
{
  int arr[] = {10, 22, 9, 33, 21, 50, 41, 60};
  int n = sizeof(arr) / sizeof(arr[0]);
  printf("%d\n", longest_increasing_subsequence(arr, n));
  return 0;
}
