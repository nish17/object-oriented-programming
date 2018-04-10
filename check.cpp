#include <bits/stdc++.h>
#include <stdio.h>
#include <cstring>
// #include <bitset>
#include <typeinfo> 
#include <sstream>
#include <string>
using namespace std;
// #define cs "1001"

bool checkValue(string a){
	bool ans;
	int k = a.size();
	cout << "string size "<< k << endl;
	int b = (int)a[k-1];
	cout << "value of b " << char(b) << endl;
	int bc = char(b);
	cout << "bcc" << bc << endl;
	int count=0;
	for(int i=0; i<a.size(); i++){
		if(a[i] == '1'){ 
			// cout << count << endl;
			count++;}
	}
	if(count == b)
		ans = true;
	else ans = false;

	return ans;
}

int main(){
    int c1 = 0,c2 = 0;
		vector <int> cc;
    string input;
		cout << "Input data\n";
    getline(cin, input);
    for (int i=0; i<input.length(); i++){
        if(input[i] == '1') c1++;
        else if(input[i] == '0') c2++;
    }
		// string ccc = to_string(c1);
    cout << "no of zeros " << c2 << "\nno of ones " << c1 << endl;
		// input = input + ccc;
		cout << input << endl;
    std::ostringstream ss;

		bitset<4> asdf = c1;

		ss<<asdf.to_ulong();
		cout << input+ss.str() << endl;
		// for (int i=input.length(); i<input.length()+4; i++){
		// 	// input [input[i] + dishant[i]
		// 	input[i] = dishant[i];
		// }

		
		// cout <<  input << dishant << endl;
		if(checkValue(input+ss.str())) cout << "message received\n";
		else cout << "error!\n";
		return 0;
}