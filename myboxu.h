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
    void myMethod_7u();    // Method/function declaration
    void myMethod_3u();    // Method/function declaration
    void myMethod_2u();    // Method/function declaration
    void myMethod_6u();
    void myMethod_8u();

};

// Method/function definition outside the class
void mybox::myMethod_7u() {
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
            //MyWriteFile << "\\" ;
            ptr++;
            if (*ptr == '=') {
                //MyWriteFile << "=" ;
                ptr++;
                if (*ptr == '{') {
                        //MyWriteFile << "{" ;
                    ptr++;
                    if (*ptr == 'u') {
                        //MyWriteFile << "o" ;
                        ptr++;
                        if (*ptr == '}') {
                            //MyWriteFile << "}" ;
                            MyWriteFile << "\\u016B" ;
                            ptr++;
                            //no case in else {MyWriteFile << "\\={" << *ptr << "}" ;}
                        } else {MyWriteFile << "\\={" << *ptr ; }
                    } else {MyWriteFile << "\\={" ; }
                } else {MyWriteFile << "\\=" ; }
            } else {MyWriteFile << "\\" ; }
         } else {MyWriteFile << *ptr ; ptr++;}
    } MyWriteFile << "\n";
    }
  // Close the file
  MyReadFile.close();  MyWriteFile.close();

}

// Method/function definition outside the class
void mybox::myMethod_3u() {
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
            //MyWriteFile << "\\" ;
            ptr++;
            if (*ptr == '`') {
                //MyWriteFile << "=" ;
                ptr++;
                if (*ptr == '{') {
                        //MyWriteFile << "{" ;
                    ptr++;
                    if (*ptr == 'u') {
                        //MyWriteFile << "o" ;
                        ptr++;
                        if (*ptr == '}') {
                            //MyWriteFile << "}" ;
                            MyWriteFile << "\\u00F9" ;
                            ptr++;
                            //no case in else {MyWriteFile << "\\={" << *ptr << "}" ;}
                        } else {MyWriteFile << "\\`{" << *ptr ; }
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
void mybox::myMethod_2u() {
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
            //MyWriteFile << "\\" ;
            ptr++;
            if (*ptr == '\'') {
                //MyWriteFile << "=" ;
                ptr++;
                if (*ptr == '{') {
                        //MyWriteFile << "{" ;
                    ptr++;
                    if (*ptr == 'u') {
                        //MyWriteFile << "o" ;
                        ptr++;
                        if (*ptr == '}') {
                            //MyWriteFile << "}" ;
                            MyWriteFile << "\\u00FA" ;
                            ptr++;
                            //no case in else {MyWriteFile << "\\={" << *ptr << "}" ;}
                        } else {MyWriteFile << "\\\'{" << *ptr ; }
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
void mybox::myMethod_6u() {
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
            //MyWriteFile << "\\" ;
            ptr++;
            if (*ptr == '^') {
                //MyWriteFile << "^" ;
                ptr++;
                if (*ptr == '{') {
                        //MyWriteFile << "{" ;
                    ptr++;
                    if (*ptr == 'u') {
                        //MyWriteFile << "a" ;
                        ptr++;
                        if (*ptr == '}') {
                            //MyWriteFile << "}" ;
                            MyWriteFile << "\\u00FB" ;
                            ptr++;
                            //no case in else {MyWriteFile << "\\={" << *ptr << "}" ;}
                        } else {MyWriteFile << "\\^{" << *ptr ; }
                    } else {MyWriteFile << "\\^{" ; }
                } else {MyWriteFile << "\\^" ; }
            } else {MyWriteFile << "\\" ; }
         } else {MyWriteFile << *ptr ; ptr++;}
    } MyWriteFile << "\n";
    }
  // Close the file
  MyReadFile.close();  MyWriteFile.close();

}

// Method/function definition outside the class
void mybox::myMethod_8u() {
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
				     if (*ptr == 'u') {
				        ptr++;
				        if (*ptr == '}') {
                                           MyWriteFile << "u\\u030D" ;
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

#endif
