#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define SIZE 3
class Messenger{
  public:
    int id;
    string name,messages;
    // string receiveMessage(Messenger m2, string s){
    //   return "s";
    // }
    void set(int n, string m){
      id = n;
      name = m;
    }
    void sendMessage(Messenger m1, string s){
      m1.messages = s;
    }
};
int searchIndex(int x,Messenger m[]){
  int z;
  for(int i=0; i<SIZE; i++){
    if(m[i].id == x) z = i;
  }
  return z;
}


int main(){
  int x,s,d;
  string y,m,m1;
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
  int count = 0;
  while(1){
    cout << "\n\n\n" << endl;
    cout << "Type your message: ";
    // getline (cin, m);
    cin >> m;
    // gets(m);
    if(m == "STOP" || m=="stop") exit(1);
    cout << "Input source and destination node ID: ";
    cin >> s >> d;

    int x = searchIndex(s,node);
    int y = searchIndex(d,node);
    
    // cout << "sender's index " <<x << endl;
    // cout << "reciever's index " << y << endl;
    cout << "Sending Message " << m << " to destination Node name " << node[y].name << " ID "<< node[y].id<< endl;
    cout << "Received Message " << m << " from source Node name " << node[x].name << " ID "<< node[x].id << endl;
  }
  return 0;
}