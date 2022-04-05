#include "mybox8.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  mybox myObj;  // Create an object of MyClass

  // Access attributes and set values
  //myObj.myNum = 15;
  myObj.myString = "filename-oo.txt";
  myObj.myString_o="filename-8o.txt";

  // Print values
  cout << myObj.myString << "\n";
  cout << myObj.myString_o << "\n";
  myObj.myMethod_8o();  // Call the method

  myObj.myString = "filename-8o.txt";
  myObj.myString_o="filename-8i.txt";
  cout << myObj.myString << "\n";
  cout << myObj.myString_o << "\n";
  myObj.myMethod_8i();  // Call the method


  return 0;
}
