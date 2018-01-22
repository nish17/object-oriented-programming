#include <bits/stdc++.h>
#include <ctime>
using namespace std;
#define SIZE 3
class Messenger
{
public:
  int id;
  string name, messages;
  /*
    * sets the input to the data members
    */
  void set(int n, string m)
  {
    id = n;
    name = m;
  }
  /*
    * sets the input string to the destination node also to the caller node
    */
  void sendMessage(Messenger m1[], int id2, string s)
  {
    this->messages = s;
    m1[id2].messages = s;
  }
};
/*
* This function is not a member function of the above class,
* It finds the index of source and destination
*/
int searchIndex(int x, Messenger m[])
{
  int z;
  for (int i = 0; i < SIZE; i++)
  {
    if (m[i].id == x)
      z = i;
  }
  return z;
}

int main()
{

  int x, s, d;
  string y, m, m1;
  Messenger node[SIZE];
  time_t t1, t2;
  /*
  * Input Section
  */
  t1 = clock();
  for (int i = 0; i < SIZE; i++)
  {
    cout << "Enter name and ID: ";
    cin >> y >> x;
    node[i].set(x, y);
  }
  /*
  * Shows all the input details
  */
  cout << "\nNode details:\n";
  for (int i = 0; i < SIZE; i++)
    cout << "Node name: " << node[i].name << " ID: " << node[i].id << endl;
  /*
  * Message functionality
  */
  int count = 0; /* Counts number of messages transmitted */

  while (1)
  {
    cout << "\n"
         << endl;
    cout << "Type your message: ";

    // getline (cin, m);
    // cin.get(cin, m);
    // cin.ignore();
    cin >> m;
    // gets(m);

    if (m == "STOP" || m == "stop")
    {
      cout << "Total number of messages Transmitted " << count << endl;
      exit(1);
    }

    /*
    * for ending the program after 10 seconds.
    */
    // t2 = clock();
    // cout << (double)t1 - t2 / CLOCKS_PER_SEC << endl;
    // if (t1 >= 10000
    //   exit(1);
    // printf("%2.1f\n", (double)t1 - t2 / CLOCKS_PER_SEC);
    cout << "Input source and destination node ID: ";
    cin >> s >> d;
    count++;

    int x = searchIndex(s, node);
    int y = searchIndex(d, node);
    node[x].sendMessage(node, y, m);

    // cout << "sender's index " <<x << endl;
    // cout << "reciever's index " << y << endl;
    cout << "Sending Message " << node[y].messages << " to destination Node name " << node[y].name << " ID " << node[y].id << endl;
    cout << "Received Message " << node[x].messages << " from source Node name " << node[x].name << " ID " << node[x].id << endl;
  }
  return 0;
}