#include <bits/stdc++.h>
using namespace std;

class Stack{
  // int n=10;
  int _array1[10],_array2[20];
  int topOfStack;
  public:
    void push(int n){
      if(topOfStack < 10) _array1[++topOfStack] = n;
      else if(topOfStack > 10) _array2[++topOfStack] = n;
    }
    void pop(){
      topOfStack--;
    }
    /*
    * eliminated Repetitive code by creating subPrint function
    */
    void subPrint(int arr[]){ 
      cout << "current value of top of stack " << topOfStack << endl;
      for(int i=topOfStack; i>=0; i--){
        cout << arr[i] << " ";
      }     
      cout << endl; 
    }
    /*
    * After first _array1 gets fully populated, copying all the elements
    * to _array2 which is of double the size of _array1.
    */
    void resetStack(){
      if(topOfStack == 9){
        // cout << "Stack1 is FULL!"<<endl;
        for(int i=9; i>=0; i--){
          int l = 0;
          _array2[l] = _array1[i];
          cout << _array2[l] << " ";
          l++;
        }cout << endl;
        cout << "current value of top of stack " << topOfStack << endl;
        Stack();
        subPrint(_array2);
      }
    }
    /*
    * prints in the required form
    */
    void print(){
      if(topOfStack < 9){
        cout << "Stack1:: "; 
        subPrint(_array1);        
      }
      else if(topOfStack > 9 && topOfStack <20){
        cout << "Stack1:: "; 
        subPrint(_array2);      
      }
      else if(topOfStack == 9){
        cout << "Stack1 is now full\n";
        subPrint(_array1);
        resetStack();
        // cout << "2=>";
        // subPrint(_array2);
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
    stack.print();
  }
}