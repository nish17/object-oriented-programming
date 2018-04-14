#include <bits/stdc++.h>
using namespace std;

long long int fibonacci(long long int x)
{
  if (x == 0 || x == 1)
    return 1;
  else
    return fibonacci(x - 1) + fibonacci(x - 2);
}

int main()
{
  long long int x;
  double t;
  cout << "Input: ";
  cin >> x;
  time_t start, end;
  start = clock();
  cout << fibonacci(x) << endl;
  end = clock();
  t = ((double)(end - start)) / CLOCKS_PER_SEC;
  cout << "fibonacci() took " << t << " seconds to execute\n";
  return 0;
}