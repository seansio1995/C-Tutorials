#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include "hashTable.h"

int main(){
  /*  ifstream scan(dFile.c_str());
  hashTable hTable1=new hashTable(NUMLINES);//hardcode lines
  scan.open(dFile.c_str);
  string current;
  while(scan.good()){
    getline(scan, curr);
    hTable1.insert(curr);*/

  hashTable *hTable1=new hashTable(10);
  hTable1->insert("Robert");
  hTable1->insert("test");
  hTable1->insert("apple");
  hTable1->insert("amazing");
  hTable1->insert("exctatic");
  hTable1->insert("Robert");
  cout<<hTable1->contains("amazing")<<endl;
  
}
