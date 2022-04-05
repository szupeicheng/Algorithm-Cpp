#include "myboxu.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  mybox myObj;  // Create an object of MyClass

  // Access attributes and set values
  //myObj.myNum = 15;
  // Print macron values
  myObj.myString = "filename-6e.txt";
  myObj.myString_o="filename-7u.txt";
  cout << myObj.myString << "\n";
  cout << myObj.myString_o << "\n";
  myObj.myMethod_7u();  // Call the method

  // Print grave values
  //cout << myObj.myNum << "\n";
  myObj.myString = "filename-7u.txt";
  myObj.myString_o="filename-3u.txt";
  cout << myObj.myString << "\n";
  cout << myObj.myString_o << "\n";
  myObj.myMethod_3u();  // Call the method

  // Print acute values
  //cout << myObj.myNum << "\n";
  myObj.myString = "filename-3u.txt";
  myObj.myString_o="filename-2u.txt";
  cout << myObj.myString << "\n";
  cout << myObj.myString_o << "\n";
  myObj.myMethod_2u();  // Call the method


  // Print caret values
  //cout << myObj.myNum << "\n";
  myObj.myString = "filename-2u.txt";
  myObj.myString_o="filename-6u.txt";
  cout << myObj.myString << "\n";
  cout << myObj.myString_o << "\n";
  myObj.myMethod_6u();  // Call the method

  // Print caret values
  //cout << myObj.myNum << "\n";
  //myObj.myString = "filename-6u.txt";
  //myObj.myString_o="filename-8u.txt";


  //cout << myObj.myString << "\n";
  //cout << myObj.myString_o << "\n";
  //myObj.myMethod_8u();  // Call the method

  return 0;
}
