#include <bits/stdc++.h>
using namespace std;

class Stack{
  // int n=10;
  int _array1[10],_array2[2*10];
  int topOfStack;
  public:
    void push(int n){
      if(topOfStack < 10) _array1[++topOfStack] = n;
      else _array2[++topOfStack] = n;
    }
    void pop(){
      topOfStack--;
    }
    void resetStack(){
      if(topOfStack > 9){
        cout << "Stack1 is FULL!"<<endl;
        for(int i=0; i<10; i++){
          _array2[i] = _array1[i];
        }
      }
    }
    void print(){
      if(topOfStack < 9){
        cout << "Stack1:: "; 
        for(int i=0; i<=topOfStack; i++){
          cout << _array1[i] << " ";
        }
        cout << endl;        
      }
      else if(topOfStack > 9 && topOfStack <20){
        cout << "Stack1:: "; 
        for(int i=0; i<=topOfStack; i++){
          cout << _array2[i] << " ";
        }
        cout << endl;        
      }
      else{
        cout << "Stack2 is full";
        return;
      }
    }
    Stack(){
      topOfStack = -1;
    }
};


int main(){
  Stack stack;
  int t;
  while(1){
    cout << "Input: ";
    cin >> t;
    stack.push(t);
    stack.resetStack();
    stack.print();
  }
}