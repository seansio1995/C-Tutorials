//Robert Alexander, RMA3MZ, heap.cpp
//Based on Code from Weiss Book

#include "heap.h"
#include "huffManNode.h"
#include <iostream>
using namespace std;

heap::heap():list(101), currentSize(0){}

heap::~heap(){
  currentSize=0;
  list.clear();}

bool heap::isEmpty(){
  return (currentSize==0);}

int heap::getSize(){
  return currentSize;
}

void heap::insert(huffManNode* x){
  if(currentSize==list.size()-1)
    list.resize(list.size()*2);
  int hole=++currentSize;
  for(; hole>1 && *x<*list[hole/2];hole/=2)
    list[hole]=list[hole/2];
  list[hole]=x;
}

void heap::deleteMin(){
  if(isEmpty())
    cout<<"heap is empty, can't delete nothing"<<endl;
  list[1]=list[currentSize--];
  int hole=1;//comined percolate down and delteMin together
  int child;
  huffManNode* tmp=list[hole];
  for(;hole*2<=currentSize;hole=child){
    child=hole*2;
    if(child!=currentSize && *list[child+1]<*list[child]){
      child++;}
    if(*list[child]<*tmp){
      list[hole]=list[child];}
    else break;}
  list[hole]=tmp;}
    
huffManNode* heap::findMin(){
  return list[1];}

vector<huffManNode*> heap::getVect(){
  return list;}
