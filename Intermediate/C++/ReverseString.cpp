#include <iostream>
#include <cstring>
using namespace std;

void reverse_string(char str[])
{
  int len = strlen(str);
  for (int i = 0; i < len / 2; i++)
  {
    swap(str[i], str[len - i - 1]);
  }
}

int main()
{
  char str[100];
  cout << "Enter a string: ";
  cin >> str;
  reverse_string(str);
  cout << str << endl;
  return 0;
}
