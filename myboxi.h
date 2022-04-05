#ifndef MYBOX_H
#define MYBOX_H

#include <fstream>
#include <string>
#include <iostream>
using namespace std;

class mybox {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
    string myString_o;
    //void myMethod_7i();    // Method/function declaration
    void myMethod_3i();    // Method/function declaration
    void myMethod_2i();
    void myMethod_6i();
    //void myMethod_8i();
    //void myMethod_8o();

};

// Method/function definition outside the class
void mybox::myMethod_3i() {
  //cout << "Hello World!";

  string myText;  // Attribute (string variable)
  ifstream MyReadFile(myString);
  ofstream MyWriteFile(myString_o);

  // Use a while loop together with the getline() function to read the file line by line
  while (std::getline (MyReadFile, myText)) {
    // Output the text from the file
    char* ptr;
    ptr = &myText[0]; //MyWriteFile << "ptr:" << *ptr << "\n";
    while ( *ptr != NULL ) {
        //ptr++;
        if (*ptr == '\\') {
            //MyWriteFile << "\\" ;
            ptr++;
            if (*ptr == '`') {
                //MyWriteFile << "=" ;
                ptr++;
                if (*ptr == '{') {
                   //MyWriteFile << "{" ;
                   ptr++;
                   if (*ptr == '\\') {
                      //MyWriteFile << "{" ;
                      ptr++;
                      //if (*ptr == '\\') {
                         //MyWriteFile << "\\" ;
                      if (*ptr == 'i') {
                          ptr++;
                          if (*ptr == '}') {
                              MyWriteFile << "\\u00EC" ;
                              ptr++;
                            //no case in else {MyWriteFile << "\\={\\" << *ptr << "}" ;}
                            } else {MyWriteFile << "\\`{\\" << *ptr ; }
                        } else {MyWriteFile << "\\`{\\" ; }
                    } else {MyWriteFile << "\\`{" ; }
                } else {MyWriteFile << "\\`" ; }
            } else {MyWriteFile << "\\" ; }
         } else {MyWriteFile << *ptr ; ptr++;}
    } MyWriteFile << "\n";
    }
  // Close the file
  MyReadFile.close();  MyWriteFile.close();

}

// Method/function definition outside the class
void mybox::myMethod_2i() {
  //cout << "Hello World!";

  string myText;  // Attribute (string variable)
  ifstream MyReadFile(myString);
  ofstream MyWriteFile(myString_o);

  // Use a while loop together with the getline() function to read the file line by line
  while (std::getline (MyReadFile, myText)) {
    // Output the text from the file
    char* ptr;
    ptr = &myText[0]; //MyWriteFile << "ptr:" << *ptr << "\n";
    while ( *ptr != NULL ) {
        //ptr++;
        if (*ptr == '\\') {
            //MyWriteFile << "\\" ;
            ptr++;
            if (*ptr == '\'') {
                //MyWriteFile << "=" ;
                ptr++;
                if (*ptr == '{') {
                   //MyWriteFile << "{" ;
                   ptr++;
                   if (*ptr == '\\') {
                      //MyWriteFile << "{" ;
                      ptr++;
                      //if (*ptr == '\\') {
                         //MyWriteFile << "\\" ;
                      if (*ptr == 'i') {
                          ptr++;
                          if (*ptr == '}') {
                              MyWriteFile << "\\u00ED" ;
                              ptr++;
                            //no case in else {MyWriteFile << "\\={\\" << *ptr << "}" ;}
                            } else {MyWriteFile << "\\\'{\\" << *ptr ; }
                        } else {MyWriteFile << "\\\'{\\" ; }
                    } else {MyWriteFile << "\\\'{" ; }
                } else {MyWriteFile << "\\\'" ; }
            } else {MyWriteFile << "\\" ; }
         } else {MyWriteFile << *ptr ; ptr++;}
    } MyWriteFile << "\n";
    }
  // Close the file
  MyReadFile.close();  MyWriteFile.close();

}

// Method/function definition outside the class
void mybox::myMethod_6i() {
  //cout << "Hello World!";

  string myText;  // Attribute (string variable)
  ifstream MyReadFile(myString);
  ofstream MyWriteFile(myString_o);

  // Use a while loop together with the getline() function to read the file line by line
  while (std::getline (MyReadFile, myText)) {
    // Output the text from the file
    char* ptr;
    ptr = &myText[0]; //MyWriteFile << "ptr:" << *ptr << "\n";
    while ( *ptr != NULL ) {
        //ptr++;
        if (*ptr == '\\') {
            //MyWriteFile << "\\" ;
            ptr++;
            if (*ptr == '^') {
                //MyWriteFile << "=" ;
                ptr++;
                if (*ptr == '{') {
                   //MyWriteFile << "{" ;
                   ptr++;
                   if (*ptr == '\\') {
                      //MyWriteFile << "{" ;
                      ptr++;
                      //if (*ptr == '\\') {
                         //MyWriteFile << "\\" ;
                      if (*ptr == 'i') {
                          ptr++;
                          if (*ptr == '}') {
                              MyWriteFile << "\\u00EE" ;
                              ptr++;
                            //no case in else {MyWriteFile << "\\={\\" << *ptr << "}" ;}
                            } else {MyWriteFile << "\\^{\\" << *ptr ; }
                        } else {MyWriteFile << "\\^{\\" ; }
                    } else {MyWriteFile << "\\^{" ; }
                } else {MyWriteFile << "\\^" ; }
            } else {MyWriteFile << "\\" ; }
         } else {MyWriteFile << *ptr ; ptr++;}
    } MyWriteFile << "\n";
    }
  // Close the file
  MyReadFile.close();  MyWriteFile.close();

}

#endif
