//Robert Alexander, RMA3MZ, hashTable.h


#include <cstdlib>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include "ListNode.h"
#include "List.h"
#include "ListItr.h"
#include <iterator>
//#include "primenumber.cpp"

using namespace std;

class hashTable {
 public:
  hashTable(int size);
  ~hashTable();
  bool contains(string str);
  int hash(string str) const;
  void insert(string str);
  bool checkprime(int nn);
  bool checkforlargeprime(int num);
  int getNextPrimeNumber (int num);
 private:
  vector<List> * myBuckets;
  int tableSize;
};
