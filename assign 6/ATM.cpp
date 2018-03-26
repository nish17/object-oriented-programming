/*
* CODECHEF: SOLVED
* PROBLEM STATEMENT: https://www.codechef.com/problems/ATM
*/
#include <bits/stdc++.h>
using namespace std;

class Bank
{
  float balance;
  int amount;

public:
  float getBalance()
  {
    return balance;
  }
  void setBalance()
  {
    cin >> balance;
    // balance = bal;
  }
  void setAmount()
  {
    cin >> amount;
  }
  friend float transaction(Bank b);
};

float transaction(Bank b)
{
  if (b.amount < b.balance && b.amount % 5 == 0)
    return b.balance = b.balance - b.amount - 0.5;
  else
    return b.balance;
}

int main()
{
  Bank B1;
  B1.setAmount();
  B1.setBalance();
  printf("%3.2f\n", transaction(B1));
  // cout << transaction(B1) << endl;
  return 0;
}