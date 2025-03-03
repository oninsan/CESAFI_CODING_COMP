#include <iostream>
#include <vector>
using namespace std;

int longest_increasing_subsequence(vector<int> &arr)
{
  int n = arr.size();
  vector<int> dp(n, 1);
  int maxLen = 1;

  for (int i = 1; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      if (arr[i] > arr[j])
      {
        dp[i] = max(dp[i], dp[j] + 1);
      }
    }
    maxLen = max(maxLen, dp[i]);
  }

  return maxLen;
}

int main()
{
  vector<int> arr = {10, 22, 9, 33, 21, 50, 41, 60};
  cout << longest_increasing_subsequence(arr) << endl;
  return 0;
}
