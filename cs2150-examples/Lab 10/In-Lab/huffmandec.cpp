//Robert Alexander, RMA3MZ, huffManDec.cpp

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "huffManNode.h"
#include "inLabHuffTree.cpp"
#include <string>
using namespace std;

// main(): we want to use parameters
int main (int argc, char **argv) {
  huffManNode* temp=new huffManNode(0,NULL);
  // verify the correct number of parameters
  if ( argc != 2 ) {
    cout << "Must supply the input file name as the only parameter" << endl;
    exit(1);
  }

  // attempt to open the supplied file; must be opened in binary
  // mode, as otherwise whitespace is discarded
  ifstream file(argv[1], ifstream::binary);

  // report any problems opening the file and then exit
  if ( !file.is_open() ) {
    cout << "Unable to open file '" << argv[1] << "'." << endl;
    exit(2);
  }

  // read in the first section of the file: the prefix codes
  char buffer[256];
  
  while ( true ) {
    // read in first character on line
    char first = file.get();
    // catch DOS and UNIX newlines
    if ( (first == '\n') || (first == '\r') )
      continue;
    // read in second character on line
    char second = file.get();
    // did we encounter the separator?
    if ( (first == '-') && (second == '-') ) {
      // read in the rest of the line
      file.getline(buffer, 255, '\n');
      break;
    }
    // read in the prefix code
    file.getline(buffer, 255, '\n');
    string codeStr=string(buffer);//huffTree takes in a string, not c-string
    huffTree(temp, first, codeStr);
  }

  // read in the second section of the file: the encoded message,
  // prints decoded message
  char bit;
  huffManNode* temp2=temp;
  while ( (bit = file.get()) != '-' ) {
    if ( (bit != '0') && (bit != '1') )
      continue;
    if(bit=='1' && temp2->right!=NULL)
      temp2=temp2->right;
    else if(bit=='0' && temp2->left!=NULL)
      temp2=temp2->left;
    if(temp2->left==NULL && temp2->right==NULL){
      cout<<temp2->getLetter();
      temp2=temp;//reset or it just keeps printing first char
    }
  }

  cout<<endl;
  // close the file before exiting
  file.close();
  }
