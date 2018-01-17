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

    /*
    * After first _array1 gets fully populated, copying all the elements
    * to _array2 which is of double the size of _array1.
    */
    void resetStack(){
      if(topOfStack > 9){
        cout << "Stack1 is FULL!"<<endl;
        for(int i=0; i<10; i++){
          _array2[i] = _array1[i];
        }
      }
    }
    /*
    * eliminated Repetitive code by creating subPrint function
    */
    void subPrint(int arr[]){ 
      for(int i=0; i<=topOfStack; i++){
        cout << arr[i] << " ";
      }     
      cout << endl; 
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
        subPrint(_array2);
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