//Robert Alexander, RMA3MZ, huffManNode.h

#ifndef HUFFMANNODE_H
#define HUFFMANNODE_H

#include <string>
#include <iostream>
using namespace std;

class huffManNode {
 public:
  huffManNode(int freq, char l);
  ~huffManNode();
  int freq;
  string code;
  char letter;
  huffManNode *left, *right;
  bool operator<(const huffManNode& n) const;
  void printNode();
  int getFreq()const;
  string getCode();
  char getLetter();
  void printCode();
};
#endif
