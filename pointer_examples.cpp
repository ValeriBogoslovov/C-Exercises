#include <iostream>

using namespace std;

// testing some pointer examples

int main() {
  int number = 5; // initializing variable with value of 5
  cout << "Variable value is: " << number << endl; //printing the value
  cout << "Address of variable is: " << &number << endl; // printing the address of the variable

  // initializing a pointer of the same type (int) using '*' after the type (convection wise)
  // you can create the pointer like this: int * ptr or int *ptr;
  int* ptr;
  //ptr = number; // this will throw an error, because we are trying to assign a value to an address
  // this is how you assign a value to a pointer, by passing the address to the variable, now it holds both address and value
  ptr = &number;
  cout << "Address of pointer is: " << ptr << endl;
  // when we put '*' before the pointer variable, we get the value of the pointer, it is called 'dereferencing'
  cout << "Value of pointer is: " << *ptr << endl;
  // Both addresses and values are the same
  // Now we are going to change the value of the Pointer
  // Again we have to dereference the pointer so we can access the value and assign a new one
  *ptr = 22;
  cout << "Address of pointer is: " << ptr << endl; // checking if the address is the same
  cout << "Value of pointer is: " << *ptr << endl; // checking if the new value is assigned
  // You can see below that the value of the variable has changed, even though we haven't assigned it explicitly
  cout << "New value of variable is: " << number << endl;
  cout << "Address of variable is: " << &number << endl;
  return 0;
}
