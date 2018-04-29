#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main()
{
  // char data[100];
  int data[100];

  ofstream fout; // open file in a write mode
  ifstream fin;  // open file in a read mode
  fstream myfile;
  fin.open("random.txt", std::ios_base::in);

  cout << "Reading from a file\n";
  // fin >> data;
  // for (int i = 0; i < 100; i++)
  //   cout << data[i] << endl;
  // fin.close();

  // for (int i = 0; i < 100; i++)
  int i = 0;
  while (fin >> data)
  {
    // fin >> data[i];
    cout << data[i] << std::endl;
    i++;
  }

  return 0;
}