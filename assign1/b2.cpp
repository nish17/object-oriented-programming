#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define SIZE 5
class Messenger{
  public:
    int id;
    string name,messages;
    void set(int n, string m){
      id = n;
      name = m;
    }
    void sendMessage(Messenger m1[],int id2, string s){
      this->messages = s;
      m1[id2].messages = s;
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
  for(int i=0; i< SIZE; i++) cout << "Node name: "<<node[i].name << " ID: " <<node[i].id << endl;
  int count = 0;
  while(1){
    cout << "\n\n\n" << endl;
    cout << "Type your message: ";

    // getline (cin, m);
    cin >> m;
    // gets(m);
    
    if(m == "STOP" || m=="stop"){ 
      cout << "Total number of messages Transmitted " << count << endl;  
      exit(1);
    }
    cout << "Input source and destination node ID: ";
    cin >> s >> d; count++;

    int x = searchIndex(s,node);
    int y = searchIndex(d,node);
    node[x].sendMessage(node,y,m);
    
    // cout << "sender's index " <<x << endl;
    // cout << "reciever's index " << y << endl;
    cout << "Sending Message " << node[y].messages << " to destination Node name " << node[y].name << " ID "<< node[y].id<< endl;
    cout << "Received Message " << node[x].messages << " from source Node name " << node[x].name << " ID "<< node[x].id << endl;
  }
  return 0;
}