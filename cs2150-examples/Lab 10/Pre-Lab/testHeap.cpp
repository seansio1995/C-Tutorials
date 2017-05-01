//Robert Alexander, test file for heap.cpp + huffManNode.cpp

#include "huffManNode.h"
#include "heap.h"
#include "huffTree.h"

using namespace std;

int main(){
  heap heap1;
  huffTree huff1;
  huffManNode *a1=new huffManNode(15,'a');
  huffManNode *a2=new huffManNode(9,'b');
  huffManNode *a3=new huffManNode(3,'c');
  huffManNode *a4=new huffManNode(7,'d');
  heap1.insert(a1);
  heap1.insert(a2);
  heap1.insert(a3);
  heap1.insert(a4);
  heap heap2=huff1.createHuffMan(heap1);
  huff1.printCode(heap2.getMax(),"");
  huff1.setCode(heap2.getMax(),"");
  cout<<"second test for code"<<endl; 
  heap1.findMin()->printCode();
  heap1.deleteMin();
  heap1.findMin()->printCode();
  heap1.deleteMin();
  heap1.findMin()->printCode();
  heap1.deleteMin();
  heap1.findMin()->printCode();
  heap1.deleteMin();
}
