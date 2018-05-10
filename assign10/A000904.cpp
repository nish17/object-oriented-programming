

#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

#define PATTERNCODE "A000904"
using namespace std;
vector<long long int> f(600);
int binarySearch(vector<long long int> f1, int l, int r, int x)
{
	if (r >= l)
	{
		int mid = l + (r - l) / 2;
		if (f1[mid] == x)
			return 1;
		if (f1[mid] > x)
			return binarySearch(f1, l, mid - 1, x);
		return binarySearch(f1, mid + 1, r, x);
	}

	return -1;
}
long long generate(long long x)
{
	if (x == 1)
	{
		// f[0] = 0;
		return 0;
	}
	else if (x == 2)
	{
		// f[1] = 3;
		return 3;
	}
	else if (x == 3)
	{
		// f[2] = 13;
		return 13;
	}
	if (f[x] != -1)
		return f[x];
	f[x] = (((x + 1) * generate(x - 1)) + ((x + 2) * generate(x - 2)) + generate(x - 3));
	return f[x];
}

int check_if_in_sequence(long long int n)
{
	int t;

	t = binarySearch(f, 0, 20, n);
	if (t == 1)
		return 1;
	else
		return 0;
}
void dumpVectorToFile(fstream &outfile, vector<string> str)
{
	for (int i = 0; i < str.size(); i++)
		outfile << str.at(i) << ",";
	outfile << "\n";
}
void fileHandling(char *filename)
{
	fstream file;
	fstream outFile;
	outFile.open("temp.txt", fstream::out);
	file.open(filename, fstream::in);
	string line;

	while (getline(file, line, '\n'))
	{
		vector<string> temp;

		stringstream ss(line);
		for (std::string token; std::getline(ss, token, ',');)
		{
			temp.push_back(std::move(token));
		}

		if (check_if_in_sequence(stoi(temp.at(0))))
		{
			cout << temp.at(0) << " : "
					 << "In Sequence\n";
			if (std::find(temp.begin(), temp.end(), PATTERNCODE) == temp.end())
				temp.push_back(string(PATTERNCODE));
			dumpVectorToFile(outFile, temp);
		}
		else
		{
			cout << temp.at(0) << " : "
					 << "Not In Sequence\n";
			dumpVectorToFile(outFile, temp);
		}
	}
	file.close();
	outFile.close();
	remove(filename);
	rename("temp.txt", filename);
}
int main()
{
	for (int i = 0; i <= f.size(); i++)
		f[i] = -1;

	for (int i = 0; i < 20; i++)
	{
		f[i] = generate(i);
	}
	fileHandling("pattern.txt");
	return 0;
}
