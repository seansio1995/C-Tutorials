//Robert Alexander, RMA3MZ, huffTree.cpp

#include "huffManNode.h"
#include "huffTree.h"
#include "heap.h"
#include <string>

using namespace std;

huffTree::huffTree(){
  root=NULL;
}

huffTree::~huffTree(){
  delete root;
}

//create the huffManNode combinations
//heap heap1;
//could have used pass by reference, which would be more efficient
heap huffTree::createHuffMan(heap heap1){
  while(heap1.getSize()>=2){
  huffManNode* a=heap1.findMin();
  heap1.deleteMin();
  huffManNode* b=heap1.findMin();
  heap1.deleteMin();
  int combFreq = 0;//put the two smallest together into combFreq
  combFreq+=(a->getFreq());
  combFreq+=(b->getFreq());
  huffManNode* comboNode=new huffManNode(combFreq,'1');//1=filler char
  comboNode->left=a;//choose'a' since heap was organized by size and pulled a first
  comboNode->right=b;
  heap1.insert(comboNode);}
  return heap1;
}

//Prints the codes for the huffManNodes, but doesn't set them
void huffTree::printCode(huffManNode *root, string code){
  if (root->left==NULL && root->right==NULL){
    cout<<root->letter<<"  "<<code<<endl;}
  if (root->left){
    printCode(root->left, code +"0");}
  if (root->right){
    printCode(root->right, code+"1");}
}

//sets the actual code in the values of the huffManNodes
void huffTree::setCode(huffManNode *root, string codetemp){
  if (root->left==NULL && root->right==NULL){
    root->code=codetemp;}
  if (root->left){
    setCode(root->left, codetemp+"0");}
  if (root->right){
    setCode(root->right, codetemp+"1");}
}
