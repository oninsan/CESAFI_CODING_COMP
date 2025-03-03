#include <iostream>
#include <cstdlib>
using namespace std;

int sum_of_digits(int n)
{
  n = abs(n);
  int sum = 0;
  while (n > 0)
  {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main()
{
  int num;
  cout << "Enter a number: ";
  cin >> num;
  cout << sum_of_digits(num) << endl;
  return 0;
}
