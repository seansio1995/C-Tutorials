//Robert Alexander, RMA3MZ, huffTree.h

#ifndef HUFFTREE_H
#define HUFFTREE_H

#include "huffManNode.h"
#include "heap.h"

using namespace std;

class huffTree{
 public:
  huffTree();
  ~huffTree();
  heap createHuffMan(heap heap1);
  void printCode(huffManNode* root, string code);
  void setCode(huffManNode* root, string code);
  huffManNode *root;
};
#endif
