//Robert Alexander, RMA3MZ, huffManEnc.cpp

#include "heap.h"
#include "huffTree.h"
#include "huffManNode.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main (int argc, char **argv) {

    // verify the correct number of parameters
    if ( argc != 2 ) {
        cout << "Must supply the input file name as the one and only parameter" << endl;
        exit(1);
    }

    FILE *fp = fopen(argv[1], "r");

    // if the file wasn't found, output and error message and exit
    if ( fp == NULL ) {
        cout << "File '" << argv[1] << "' does not exist!" << endl;
        exit(2);
    }

    int distinct=0;//distinct chars in file
    char g;
    int freq[128];//array that holds frequency values
    for(int i=0;i<128;i++){
      freq[i]=0;}  //initialize all values to 0

    int chars=0;//number of characters in file
    while ( (g = fgetc(fp)) != EOF ){
      int ascVal=(int) g;//gets ascii value of g, only want 31-128
      if(ascVal>31 && ascVal<128){
      freq[ascVal]++;
      chars++;}
    }

    heap heap2;
    for(int i=1;i<128;i++){
      if(freq[i]>0){
      huffManNode* temp=new huffManNode(freq[i],(char) i);
      heap2.insert(temp);
      distinct++;}
    }

    huffTree* huffTree1=new huffTree();

    heap heap3=huffTree1->createHuffMan(heap2);

    huffTree1->printCode(heap3.findMin(),"");//prints the code to the screen
    huffTree1->setCode(heap3.findMin(),"");//sets the code for the characters
    
    // separator
    cout << "----------------------------------------" << endl;

    // rewinds the file pointer, so that it starts reading the file
    // again from the begnning
    rewind(fp);

    int uncompressed=0;
    int compressed=0;
    vector<huffManNode*> tempVec=heap2.getVect();
   
    /*Use the underlying vector from heap 2, the huffTree sorted the huffNodes and 
      assigned codes to them using setCode and createHuffMan, have to use the heap size 
    (getSize), since the vector is set to hold 101 elements*/
    while ( (g = fgetc(fp)) != EOF ){
      for(int j=1;j<=heap2.getSize();j++){
          if(tempVec[j]->getLetter()==g){
              cout<<tempVec[j]->getCode()<<" ";
              compressed+=tempVec[j]->getCode().size();}
      }
    }
    
    cout<<endl;
    uncompressed=chars*8;
    double rat=(double)uncompressed/compressed;
    double cost=(double)compressed/chars;

     cout << "----------------------------------------" << endl;
     cout<<"There are a total of "<<chars<<" symbols that are encoded."<<endl;
     cout<<"There are a total of "<<distinct<<" distinct symbols used."<<endl;
     cout<<"There were "<<uncompressed<<" bits in the original file."<<endl;
     cout<<"There are "<<compressed<<" bits in the compressed file."<<endl;
     cout<<"This gives a compression ratio of "<<rat<<"."<<endl;
     cout<<"The cost of the Huffman Tree is "<<cost<<" bits per character"<<endl;
    
    // close the file
    fclose(fp);
    return 0;
}
