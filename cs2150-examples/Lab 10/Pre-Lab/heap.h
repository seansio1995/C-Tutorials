//Robert Alexander, RMA3MZ, heap.h

#ifndef HEAP_H
#define HEAP_H

#include <vector>
#include <iostream>
#include "huffManNode.h"

using namespace std;

class heap{
 public:
  heap();
  ~heap();
  bool isEmpty();
  void insert(huffManNode* n);
  void deleteMin();
  huffManNode* findMin();
  int getSize();
  vector<huffManNode*> getVect();
 private:
  int currentSize;
  vector<huffManNode*> list;
};
#endif
