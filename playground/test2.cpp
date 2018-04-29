#include <fstream>
#include <vector>
#include <iostream>

int main()
{
  long long int value, count = 0;

  long long int ieos[] = {1, 1, 1, 1, 2, 3, 6, 11, 23, 47, 106, 235, 551,
                          1301, 3159, 7741, 19320, 48629, 123867, 317955, 823065, 2144505, 5623756, 14828074,
                          39299897, 104636890, 279793450, 751065460, 2023443032, 5469566585, 14830871802,
                          40330829030, 109972410221, 300628862480, 823779631721, 2262366343746, 6226306037178};
  std::vector<long long int> series(ieos, ieos + (sizeof(ieos) / sizeof(long long int)));

  std::ifstream f("thefile.txt");
  std::vector<long long int> v;
  for (int n; f >> n;)
  {
    value = n;
    for (int i = 0; i < series.size(); i++)
    {
      if (n == series[i])
      {
        std::cout << n << ". A000055\n";
      }
    }
    // std::cout << n << std::endl;
    count++;
  }
  f.close();
  return 0;
}
