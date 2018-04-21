#include <bits/stdc++.h>
using namespace std;
vector<long long int> f(100);
long long int fibonacci(long long int x)
{
  if (x <= 1)
    return 1;
  if (f[x] != -1)
    return f[x];
  f[x] = fibonacci(x - 1) + fibonacci(x - 2);
  return f[x];
}

int main()
{
  for (int i = 0; i < f.size(); i++)
    f[i] = -1;
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