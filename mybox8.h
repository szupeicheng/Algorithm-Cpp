#ifndef MYBOX8_H
#define MYBOX8_H

#include <fstream>
#include <string>
#include <iostream>
using namespace std;

class mybox {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
    string myString_o;
    //void myMethod_7o();    // Method/function declaration
    //void myMethod_3o();    // Method/function declaration
    void myMethod_8o();
    void myMethod_8i();
    void myMethod_oo();

};


// Method/function definition outside the class
void mybox::myMethod_8o() {
  //cout << "Hello World!";

  string myText;  // Attribute (string variable)
  ifstream MyReadFile(myString);
  ofstream MyWriteFile(myString_o);

  // Use a while loop together with the getline() function to read the file line by line
  while (std::getline (MyReadFile, myText)) {
    // Output the text from the file
    char* ptr;
    //cout << myText << myText.size() << "\n";
    //MyWriteFile << myText << " " << myText.size() << "\n";
    ptr = &myText[0]; //MyWriteFile << "ptr:" << *ptr << "\n";
    while ( *ptr != NULL ) {
        //ptr++;
        if (*ptr == '\\') {
            ptr++;
            if (*ptr == 'p') {
                ptr++;
                if (*ptr == 'e') {
                    ptr++;
                    if (*ptr == 'h') {
                        ptr++;
                        if (*ptr == 'i') {
                            ptr++;
                            if (*ptr == 'n') {
                               ptr++;
                               if (*ptr == '{') {
				  ptr++;
				  if (*ptr == 'o') {
				     ptr++;
				     if (*ptr == '}') {
                                        MyWriteFile << "o\\u030D" ;
                                        ptr++;
                                         //no case in else {MyWriteFile << "\\pehin{" << *ptr << "}" ;}
					} else {MyWriteFile << "\\pehin{" << *ptr ; }
				    } else {MyWriteFile << "\\pehin{" ; }
			        } else {MyWriteFile << "\\pehin" ; }
			    } else {MyWriteFile << "\\pehi" ; }
                        } else {MyWriteFile << "\\peh" ; }
                    } else {MyWriteFile << "\\pe" ; }
                } else {MyWriteFile << "\\p" ; }
            } else {MyWriteFile << "\\" ; }
         } else {MyWriteFile << *ptr ; ptr++;}
    } MyWriteFile << "\n";
    }
  // Close the file
  MyReadFile.close();  MyWriteFile.close();

}

// Method/function definition outside the class
void mybox::myMethod_8i() {
  //cout << "Hello World!";

  string myText;  // Attribute (string variable)
  ifstream MyReadFile(myString);
  ofstream MyWriteFile(myString_o);

  // Use a while loop together with the getline() function to read the file line by line
  while (std::getline (MyReadFile, myText)) {
    // Output the text from the file
    char* ptr;
    //cout << myText << myText.size() << "\n";
    //MyWriteFile << myText << " " << myText.size() << "\n";
    ptr = &myText[0]; //MyWriteFile << "ptr:" << *ptr << "\n";
    while ( *ptr != NULL ) {
        //ptr++;
        if (*ptr == '\\') {
            ptr++;
            if (*ptr == 'p') {
                ptr++;
                if (*ptr == 'e') {
                    ptr++;
                    if (*ptr == 'h') {
                        ptr++;
                        if (*ptr == 'i') {
                            ptr++;
                            if (*ptr == 'n') {
                               ptr++;
                               if (*ptr == '{') {
				  ptr++;
				  if (*ptr == '\\') {
				     ptr++;
				     if (*ptr == 'i') {
				        ptr++;
				        if (*ptr == '}') {
                                           MyWriteFile << "i\\u030D" ;
                                           ptr++;
                                           //no case in else {MyWriteFile << "\\pehin{" << *ptr << "}" ;}
					    } else {MyWriteFile << "\\pehin{\\" << *ptr ; }
					} else {MyWriteFile << "\\pehin{\\" ; }
				    } else {MyWriteFile << "\\pehin{" ; }
			        } else {MyWriteFile << "\\pehin" ; }
			    } else {MyWriteFile << "\\pehi" ; }
                        } else {MyWriteFile << "\\peh" ; }
                    } else {MyWriteFile << "\\pe" ; }
                } else {MyWriteFile << "\\p" ; }
            } else {MyWriteFile << "\\" ; }
         } else {MyWriteFile << *ptr ; ptr++;}
    } MyWriteFile << "\n";
    }
  // Close the file
  MyReadFile.close();  MyWriteFile.close();

}


// Method/function definition outside the class
void mybox::myMethod_oo() {

  string myText;  // Attribute (string variable)
  ifstream MyReadFile(myString);
  ofstream MyWriteFile(myString_o);

  // Use a while loop together with the getline() function to read the file line by line
  while (std::getline (MyReadFile, myText)) {
    // Output the text from the file
    char* ptr;
    //cout << myText << myText.size() << "\n";
    //MyWriteFile << myText << " " << myText.size() << "\n";
    ptr = &myText[0]; //MyWriteFile << "ptr:" << *ptr << "\n";
    while ( *ptr != NULL ) {
        //ptr++;
        if (*ptr == '{') {
            //MyWriteFile << "{" ;
            ptr++;
            if (*ptr == '\\') {
                //MyWriteFile << "=" ;
                ptr++;
                if (*ptr == 'd') {
                        //MyWriteFile << "{" ;
                    ptr++;
                    if (*ptr == 't') {
                        //MyWriteFile << "a" ;
                        ptr++;
                        if (*ptr == 'r') {
                            //MyWriteFile << "}" ;
                            ptr++;
                            if ( *ptr == '}') {
                                MyWriteFile << "\\u0358\\u0020" ;
                                ptr++;
                            } else {MyWriteFile << "{\\dtr" << *ptr ; }
                            //no case in else {MyWriteFile << "\\={" << *ptr << "}" ;}
                        } else {MyWriteFile << "{\\dt" << *ptr ; }
                    } else {MyWriteFile << "{\\d" ; }
                } else {MyWriteFile << "{\\" ; }
            } else {MyWriteFile << "{" ; }
         } else {MyWriteFile << *ptr ; ptr++;}
    } MyWriteFile << "\n";
    }
  // Close the file
  MyReadFile.close();  MyWriteFile.close();

}


#endif
