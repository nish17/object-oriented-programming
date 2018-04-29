#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int value, count = 0;

  long long int ieos[] = {1, 1, 1, 1, 2, 3, 6, 11, 23, 47, 106, 235, 551,
                          1301, 3159, 7741, 19320, 48629, 123867, 317955, 823065, 2144505, 5623756, 14828074,
                          39299897, 104636890, 279793450, 751065460, 2023443032, 5469566585, 14830871802,
                          40330829030, 109972410221, 300628862480, 823779631721, 2262366343746, 6226306037178};
  vector<long long int> series(ieos, ieos + (sizeof(ieos) / sizeof(long long int)));
  ifstream f("text.txt");
  vector<long long int> v;
  // while (!EOF)
  // {
  //   fin >> next;
  //   if (series[c] == next)
  //   {
  //     cout << "series[c]=>" << series[c] << "\n"
  //          << "next=>" << next << "\n";
  //     c++;
  //   }
  // }
  // fin.close();

  for (int n; f >> n;)
  {
    for (int i = 0; i < series.size(); i++)
      if (n == series[i])
        cout << n << ". A000055\n";
      else
        continue;
    count++;
  }
  f.close();
  return 0;
}