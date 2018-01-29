#include <bits/stdc++.h>
using namespace std;
#define SIZE 10 // Stack SIZE is limited to 10 elements

class Stack
{
  int unique; //maybe useful
  int _array1[SIZE];
  int topOfStack;
  static int _buffer[2 * SIZE];

public:
  Stack()
  {
    topOfStack = -1;
  }
  /*
    * eliminated Repetitive code by creating subPrint function
    */
  void subPrint(int arr[])
  {
    for (int i = topOfStack; i >= 0; i--)
    // for (int i = 0; i <= topOfStack; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
  ~Stack()
  {
    topOfStack = SIZE;
    cout << "Destructor invoked: \n";
    // cout << "this is print buffer method: \n";
    printBuffer();
    // exit(1);
  }
  /*
    * push element onto the stack
    */
  void push(int n)
  {
    if (topOfStack < SIZE)
      _array1[++topOfStack] = n;
  }
  /*
    * Pops element from the stack
    */
  void pop()
  {
    topOfStack--;
  }
  /*
  * returns the last element on the Stack
  */
  int peek(int arr[])
  {
    int k = arr[topOfStack];
    pop();
    return k;
  }
  /*
    * After first _array1 gets fully populated, copying all the elements
    * to _buffer which is of double the size of _array1.
    * buffer array is not accessible outside of the resetStack Scope
    */
  void resetStack()
  {
    if (topOfStack == SIZE - 1 && unique != 999)
    {
      cout << "Contents of buffer:: ";
      for (int i = SIZE - 1; i >= 0; i--)
      {
        int l = 0;
        _buffer[l++] = _array1[i];
        cout << _buffer[l - 1] << " ";
      }
      cout << endl;
      // topOfStack = -1;
    }

    /*
  * unique method also didn't work
  */
    // else if (unique == 999)
    // {
    //   cout << "contents of buffer:: ";
    //   for (int i = SIZE - 1; i >= 0; i--)
    //   {
    //     cout << _buffer[i] << " ";
    //   }
    //   cout << endl;
    // }
  }
  /*
* similar to resetStack method
*/
  void buffer_resetStack()
  {
    if (topOfStack == SIZE - 1)
    {
      for (int i = topOfStack; i >= 0; i--)
      {
        _buffer[i] = peek(_array1);
        // cout << _buffer[i] << " ";
      }
      // cout << endl;
    }
  }
  /*
    * prints in the required form
    */
  void print()
  {
    if (topOfStack < SIZE - 1)
    {
      cout << "Stack1:: ";
      subPrint(_array1);
    }
    else if (topOfStack == SIZE - 1)
    {
      cout << "Stack1 is now full\nStack1::";
      subPrint(_array1);
      cout << "elements moved to buffer\n";
      buffer_resetStack();
      // cout << "2=>";
      // subPrint(_buffer);
      return;
    }
  }
  /*
  *prints the contents of buffer 
  */
  void printBuffer()
  {
    for (int i = 0; i < topOfStack; i++)
    {
      cout << _buffer[i] << " ";
    }
    cout << endl;
  }
};
int Stack::_buffer[2 * SIZE];
int main()
{
  Stack stack;
  int t;
  // while (1)
  for (int i = 0; i < SIZE; i++)
  {
    cout << "Input: ";
    cin >> t;
    /*
    *Condition for stopping the program
    * i.e if the input value is -1 then it will execute
    * the destructor 
    */
    // if (t == -1)
    // {
    //   stack.~Stack();
    // }
    stack.push(t);
    stack.print();
  }
  // stack.printBuffer();
  return 0;
}