#include <bits/stdc++.h>
using namespace std;
#define SIZE 6
class Messenger{
  public:
    int id;
    string name;
    string sendMessage;
    string receiveMessage;

    void set(int n, string m){
      id = n;
      name = m;
    }
};

int main(){
  int x;
  string y;
  Messenger node[SIZE];
  for(int i=0; i< SIZE; i++){
    cout << "Enter name and ID: ";
    cin >> y >> x;
    node[i].set(x,y);
  }
  cout << "\nNode details:\n";
  for(int i=0; i< SIZE; i++){
    cout << "Node name: "<<node[i].name << " ID: " <<node[i].id << endl;
  }
  return 0;
}