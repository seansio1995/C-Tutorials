//Robert Alexander, hashTable.cpp, RMA3MZ

#include "hashTable.h"

hashTable::hashTable(int size){
  myBuckets=new vector<List>();

  if(!checkforlargeprime(size)){
    tableSize=getNextPrimeNumber(size);
   }
   myBuckets->resize(tableSize);
   for(int i=0;i<size;i++){
      List *temp=new List();
      myBuckets->push_back(*temp);
    }
}

hashTable::~hashTable(){
  delete myBuckets;
}

bool hashTable::contains(string str){
  List vect1=myBuckets->at(hash(str));
  if (vect1.isEmpty()){
    return false;}
  ListItr itr1=vect1.first();
  while(!itr1.isPastEnd()){
    if(str==itr1.retrieve())
      return true;
    itr1.moveForward();
  }
  return false;
}


int hashTable::hash(string str) const{
  int hashVal=0;
  int length=str.length();
  for (int i=0;i<length;i++){
    hashVal*= 37;
    hashVal+=(str[i]);}
  return hashVal%myBuckets->size();}

void hashTable::insert(string str){
    myBuckets->at(hash(str)).insertAtTail(str);
}

bool checkforlargeprime(int num);

bool hashTable::checkprime (int nn) {
  if (nn > 100) {
    return checkforlargeprime(nn);
  } else {
    int k=2;
    while (k < nn) {
      int sd = nn%k;
      if ( sd == 0) {
        return false;
      }
      k++;
    }
  }
  return true;
}

int hashTable::getNextPrimeNumber (int num) {
  int nam = num+1;
  bool das = true;
  while ( das == true ) {
    if (checkprime(nam))
      das = false;
    else
      nam = nam+1;
  }
  return nam;
  }
bool hashTable::checkforlargeprime (int num) {
  if (num > 100) {
    int sss = ((int)(sqrt((double)num)))+1;
    int pn = 2;

    while (pn < sss) {
      if (num%pn == 0) {
        return false;
      }
      pn = getNextPrimeNumber(pn);
    }
    return true;
  } else {
    return false;
  }
}
