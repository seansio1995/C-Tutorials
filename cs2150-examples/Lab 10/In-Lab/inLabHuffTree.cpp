//Robert Alexander, RMA3MZ, inLabHuffTree.cpp 
//constructs the huffman tree for the in lab decoding

#include "huffManNode.h"
#include <string>
using namespace std;

/*Forms the tree recursively, takes the code from the passed node to determine
whether to create a right or left leaf, then keeps recursively calling itself 
until the code is empty and then it sets the letter to that leafnode.*/
void huffTree(huffManNode* n, char c, string code){
  if(code.length()==0){
    n->letter=c;
  }
  if(code[0]=='0'){
    if(n->left==NULL){
      n->left=new huffManNode(0,NULL);
    }
    huffTree(n->left, c, code.substr(1,code.length()-1));
  }
  else if(code[0]=='1'){
    if(n->right==NULL){
      n->right=new huffManNode(0,NULL);
    }
    huffTree(n->right,c, code.substr(1,code.length()-1));
  }}
