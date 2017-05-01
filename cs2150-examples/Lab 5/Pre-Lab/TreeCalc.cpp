// Robert Alexander, RMA3MZ
// TreeCalc.cpp:  CS 2150 Tree Calculator method implementations

#include "TreeCalc.h"
#include <iostream>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <string>
using namespace std;

//Constructor
TreeCalc::TreeCalc()
{
  mystack=stack<TreeNode*>();
}

//Destructor- frees memory
TreeCalc::~TreeCalc()
{
  while(mystack.size()!=0){
    cleanTree(mystack.top());
    mystack.pop();}
}

//Deletes tree/frees memory
void TreeCalc::cleanTree(TreeNode* ptr)
{
  if(ptr->left!=NULL){
    cleanTree(ptr->left);
    cleanTree(ptr->right);}
  else
    delete ptr;
}

//Gets data from user
void TreeCalc::readInput()
{
    string response;
    cout << "Enter elements one by one in postfix notation" << endl
    << "Any non-numeric or non-operator character,"
    << " e.g. #, will terminate input" << endl;

    cout << "Enter first element: ";
    cin >> response;

    //while input is legal
    while (isdigit(response[0]) || response[0]=='/' || response[0]=='*'
            || response[0]=='-' || response[0]=='+' )
    {
        insert(response);
        cout << "Enter next element: ";
        cin >> response;
    }
}

//Puts value in tree stack
void TreeCalc::insert(const string& val)
{
  if(val=="+" || val=="/" || val=="*" || val=="-"){
     TreeNode *node2=new TreeNode(val);
    node2->left=mystack.top();
    mystack.pop();
    node2->right=mystack.top();
    mystack.pop();
    mystack.push(node2);
  }
  else{
    TreeNode *node1=new TreeNode(val);
    mystack.push(node1);
  }
}

//Prints data in prefix form
void TreeCalc::printPrefix(TreeNode* ptr) const
{
  if(ptr->left!=NULL || ptr->right!=NULL){
    //cout<<" ";
    cout<<ptr->value;
    cout<<" ";
    printPrefix(ptr->right);
    cout<<" ";
    printPrefix(ptr->left);}
    //cout<<" ";}
  else{
    // cout<<" ";
   cout<<ptr->value;
   //cout<<" ";
  }}


//Prints data in infix form
void TreeCalc::printInfix(TreeNode* ptr) const
{
   if(ptr->left!=NULL){
    if(ptr->value=="+" || ptr->value=="/" || ptr->value=="*" || ptr->value=="-"){
      cout<<"(";
      printInfix(ptr->right);
      cout<<" ";
      cout<<ptr->value;
      cout<<" ";
      printInfix(ptr->left);
      cout<<")";}
   else{
     cout<<ptr->value;}}
    else{
      cout<<ptr->value;}
      
  }

//Prints data in postfix form
void TreeCalc::printPostfix(TreeNode* ptr) const
{
    if(ptr->left!=NULL || ptr->right!=NULL){
      printPostfix(ptr->right);
      cout<<" ";
      printPostfix(ptr->left);
      cout<<" ";
      cout<<ptr->value;}
    //cout<<" ";}
    else
      //cout<<" ";
      cout<<ptr->value;
      // cout<<" ";}
}

// Prints tree in all 3 (pre,in,post) forms

void TreeCalc::printOutput() const
{
    if (mystack.size()!=0 && mystack.top()!=NULL)
    {
        cout << "Expression tree in postfix expression: ";
        printPostfix(mystack.top());
        cout << endl;

        cout << "Expression tree in infix expression: ";
        printInfix(mystack.top());
        cout << endl;

        cout << "Expression tree in prefix expression: ";
        printPrefix(mystack.top());
        cout << endl;
    }
    else
        cout<< "Size is 0." << endl;
}

//Evaluates tree, returns value
// private calculate() method
int TreeCalc::calculate(TreeNode* ptr) const
{
  int total=0;
  if(ptr->left==NULL){
    return atoi((ptr->value).c_str());}
  else if(ptr->value=="+"){
    int right=calculate(ptr->right);
    int left=calculate(ptr->left);
    total+=(right+left);}
  else if(ptr->value=="*"){
    int right=calculate(ptr->right);
    int left=calculate(ptr->left);
    total+=(right*left);}
  else if(ptr->value=="-"){
    int right=calculate(ptr->right);
    int left=calculate(ptr->left);
    total+=(right-left);}
  else if(ptr->value=="/"){
    int right=calculate(ptr->right);
    int left=calculate(ptr->left);
    total+=(right/left);}
return total;
}

//Calls calculate, sets the stack back to a blank stack
// public calculate() method. Hides private data from user
int TreeCalc::calculate()
{
    int i = 0;
    while(mystack.size()!=0){
      i+=calculate(mystack.top());
      mystack.pop();}
    return i;
}
