#include <bits/stdc++.h>
using namespace std;

void printSeries(int n, int c)
{
  int f1 = 0, f2 = 1, add;
  if (c == 1)
  {
    cout << f1 << " " << f2 << " ";
    while (n--)
    {
      add = f1 + f2;
      f1 = f2;
      f2 = add;
      cout << add << " ";
    }
    cout << endl;
  }
  else
  {
    while (n--)
    {
      add = f1 + f2;
      f1 = f2;
      f2 = add;
    }
    cout << add << endl;
  }
}

int main()
{
  int n, c;
  cout << "Input: ";
  cin >> n;
  cout << "Print whole series? press '1'\nPrint only sum? press '2'\n";
  cin >> c;
  printSeries(n, c);
  return 0;
}
// 0   1  1   2
// f1 f2 add
//    f1 f2  add