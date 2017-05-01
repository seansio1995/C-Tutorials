//Robert Alexander, RMA3MZ, Node.h

#include <vector>
#include <string>

using namespace std;

class node{
 public:
  node(string n);
  void addAdj(node* n);
  vector<node*> adjList;
  string name;
  int indegree;
};
