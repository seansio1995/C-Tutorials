//Robert Alexander, RMA3MZ, huffManNode.cpp

#include "huffManNode.h"
#include <iostream>
using namespace std;

huffManNode::huffManNode(int freqVal, char l){
  freq=freqVal;
  letter=l;
  code="";
  left=NULL;
  right=NULL;
}

huffManNode::~huffManNode(){
  delete left;
  delete right;
}

int huffManNode::getFreq() const{
  return freq;
}

void huffManNode::printCode(){
  cout<<"letter: "<<letter<<" code is: "<<code<<endl;
}

//overrides operator< for heap class comparisons
bool huffManNode::operator<(const huffManNode& n) const{
  return(this->getFreq()<n.getFreq());
}

void huffManNode::printNode(){
  cout<<"frequency"<<this->getFreq()<<"  char: "<<letter<<endl; 
}

string huffManNode::getCode(){
  return code;}

char huffManNode::getLetter(){
  return letter;
}
