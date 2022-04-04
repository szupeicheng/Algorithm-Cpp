#include "myboxa.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  mybox myObj;  // Create an object of MyClass

  // Access attributes and set values
  //myObj.myNum = 15;
  myObj.myString = "untitled-21.txt";
  myObj.myString_o="filename-7a.txt";

  // Print macron values
  cout << myObj.myString << "\n";
  cout << myObj.myString_o << "\n";
  myObj.myMethod_7a();  // Call the method

  myObj.myString = "filename-7a.txt";
  myObj.myString_o="filename-3a.txt";

  // Print grave values
  //cout << myObj.myNum << "\n";

  cout << myObj.myString << "\n";
  cout << myObj.myString_o << "\n";
  myObj.myMethod_3a();  // Call the method

  myObj.myString = "filename-3a.txt";
  myObj.myString_o="filename-2a.txt";

  // Print acute values
  //cout << myObj.myNum << "\n";

  cout << myObj.myString << "\n";
  cout << myObj.myString_o << "\n";
  myObj.myMethod_2a();  // Call the method

  myObj.myString = "filename-2a.txt";
  myObj.myString_o="filename-6a.txt";

  // Print caret values
  //cout << myObj.myNum << "\n";

  cout << myObj.myString << "\n";
  cout << myObj.myString_o << "\n";
  myObj.myMethod_6a();  // Call the method

  myObj.myString = "filename-6a.txt";
  myObj.myString_o="filename-na.txt";

  // Print caret values
  //cout << myObj.myNum << "\n";

  cout << myObj.myString << "\n";
  cout << myObj.myString_o << "\n";
  myObj.myMethod_na();  // Call the method

  return 0;
}
