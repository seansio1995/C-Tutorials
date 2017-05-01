//Robert Alexander, RMA3MZ, wordPuzzle.cpp, Main File
/* n^4 running time, this is the worst case out of all of the different
running times.  Each for loop is linear and this includes the running time for 
all four loops*/

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include "hashTable.h"
#include "timer.h"

using namespace std;

#define MAXROWS 500
#define MAXCOLS 500

char table[MAXROWS][MAXCOLS];

bool readInTable (string filename, int &rows, int &cols);
char* getWordInTable (int startRow, int startCol, int dir, int len,
                      int numRows, int numCols);

int main(int argc, char ** argv){
  string line;
  int numLines=0;
  string temp;
  string tempString;
  timer t;

  string dictionary=argv[1];

  ifstream file1(dictionary.c_str());
  
  char tempTest[256];
  while(!file1.eof()){
    file1.getline(tempTest, 256);
    numLines++;}
  cout<<"Number of Lines:  "<<numLines<<endl;

  hashTable *myTable=new hashTable(numLines);

  ifstream file4(dictionary.c_str());

  char insertTemp[256];
  while(!file4.eof()){
    file4.getline(insertTemp,256);
    string temp1(insertTemp);
    if(temp1.length()>=3)
      myTable->insert(temp1);
  }

  file1.close();
    
  //next portion

  string gridFile=argv[2];
  
  ifstream file2(gridFile.c_str());
  file2.open(gridFile.c_str());

  int rows, cols;

  readInTable(gridFile.c_str(), rows, cols);

  t.start();
  int numFound=0;
  string direction;
  
//Word Search loop
  for (int newRow=0;newRow<rows;newRow++){
    for(int newCol=0;newCol<cols;newCol++){
      for(int newDir=0;newDir<8;newDir++){
          for(int wordLen=3;wordLen<=22;wordLen++){
              string currentWord=getWordInTable(newRow,newCol,newDir,wordLen,rows,cols);
              if (currentWord.length() == wordLen) {
                if(myTable->contains(currentWord)){
                    numFound++;
                    if(newDir==0){
                        direction="N";}
                    if(newDir==1){
                        direction="NE";}
                    if(newDir==2){
                        direction="E";}
                    if(newDir==3){
                        direction="SE";}
                    if(newDir==4){
                        direction="S";}
                    if(newDir==5){
                        direction="SW";}
                    if(newDir==6){
                        direction="W";}
                    if(newDir==7){
                        direction="NW";}
	    cout<<direction<<" ("<<newRow<<", "<<newCol<<"):  "<<currentWord<<endl;
                }
              }
          }
      }
    }
  }

  t.stop();
  cout<<numFound<<" words found."<<endl;
  double time=t.getTime();
  cout<<"Found all words in: "<<time<<" seconds"<<endl;}

  //end of my code

/** This function will read in a grid file, as per the format in the
 * CS 2150 lab 6 document, into a global table[][] array.  It uses C++
 * file streams, and thus requires the the <fstream> #include header.
 *
 * @return true or false, depending on whether the file was
 *         successfully opened.
 * @param filename The file name to read in -- it's assumed to be in
 *                 the file format described in the lab document.
 * @param rows The number of rows as specified in the input file;
 *             as this is a reference, it is set by the function.
 * @param cols The number of columnss as specified in the input file;
 *             as this is a reference, it is set by the function.
 */
bool readInTable (string filename, int &rows, int &cols) {

  // a C++ string to hold the line of data that is read in
  string line;

  // set up the file stream to read in the file (takes in a C-style
  // char* string, not a C++ string object)
  ifstream file(filename.c_str());

  // upon an error, return false
  if ( !file.is_open() )
    return false;

  // the first line is the number of rows: read it in
  file >> rows;
  //cout << "There are " << rows << " rows." << endl;
  getline (file,line); // eats up the return at the end of the line

  // the second line is the number of cols: read it in and parse it
  file >> cols;
  //cout << "There are " << cols << " cols." << endl;
  getline (file,line); // eats up the return at the end of the line

  // the third and last line is the data: read it in
  getline (file,line);

  // close the file
  file.close();

  // convert the string read in to the 2-D grid format into the
  // table[][] array.  In the process, we'll print the table to the
  // screen as well.
  int pos = 0; // the current position in the input data
  for ( int r = 0; r < rows; r++ ) {
    for ( int c = 0; c < cols; c++ ) {
      table[r][c] = line[pos++];
      //cout << table[r][c];
    }
    //cout << endl;
  }

  // return success!
  return true;
}



/** This function will retrieve a word in a grid of letters in a given
 * direction.  If the end of the grid is encountered before the length
 * of the desired string is reached, then a shorter string will be
 * returned.  The data is retrieved from a global char table[][]
 * array, which is assumed to be defined (and in scope).  NOTE: The
 * return value is a static char[][] variable (for efficiency
 * reasons), so a successive return value will overwrite a previous
 * return value.
 *
 * @return A char* containing the letters in the provided direction
 *         (NOTE: it is returned in a static char array).
 * @param startRow The starting (row,col) position to find the word.
 * @param startCol The starting (row,col) position to find the word.
 * @param dir The direction to move: 0 is north (upwards), 1 is
 *            northeast, and it rotates around clockwise until it
 *            reaches 7 for northwest.
 * @param len The length of the string to return (assuming the edge of
 *            the grid is not reached).
 * @param numRows The number of rows in the global char table[][]
 *                array .
 * @param numCols The number of columns in the global char table[][]
 *                array.
 */
char* getWordInTable (int startRow, int startCol, int dir, int len,
                      int numRows, int numCols) {

  // the static-ness of this variable prevents it from being
  // re-declared upon each function invocataion.  It also prevents it
  // from being deallocated between invocations.  It's probably not
  // good programming practice, but it's an efficient means to return
  // a value.
  static char output[256];

  // make sure the length is not greater than the array size.
  if ( len >= 255 )
    len = 255;

  // the position in the output array, the current row, and the
  // current column
  int pos = 0, r = startRow, c = startCol;

  // iterate once for each character in the output
  for ( int i = 0; i < len; i++ ) {

    // if the current row or column is out of bounds, then break
    if ( (c >= numCols) || (r >= numRows) || (r < 0) || (c < 0) )
      break;

    // set the next character in the output array to the next letter
    // in the table
    output[pos++] = table[r][c];

    // move in the direction specified by the parameter
    switch (dir) { // assumes table[0][0] is in the upper-left
    case 0:
      r--;
      break; // north
    case 1:
      r--;
      c++;
      break; // north-east
    case 2:
      c++;
      break; // east
    case 3:
      r++;
      c++;
      break; // south-east
    case 4:
      r++;
      break; // south
    case 5:
      r++;
      c--;
      break; // south-west
    case 6:
      c--;
      break; // west
    case 7:
      r--;
      c--;
      break; // north-west
    }
  }

  // set the next character to zero (end-of-string)
  output[pos] = 0;

  // return the string (a C-style char* string, not a C++ string
  // object)
  return output;
}
	    

