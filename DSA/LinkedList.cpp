#include<iostream>
using namespace std;
// data
// next is the address of th next element
// head pointer stores the address od the first element
//last node contains NULL
struct node{
//public:
//  int data;
//  node* next;
//  node(int value){
//    data = val;
//    next = NULL;
//  }
  int val;
  node *next;
};
int main(){
  node *head, *current; //will store address of first node
  head =0;
  int choice=1;
  while(choice){
  auto *newnode = new node;//dynamic
  cin>>newnode->val;
//  cout<<newnode->val;
  newnode->next = 0;
  if(head == 0){
    head = newnode;
    current = newnode;
  }
  else{
    current->next = newnode;
    current = newnode; //
  }
  cout<<"Do you want to continue? 1 to continue and 0 to exit ";
  cin>>choice;
}
  current = head; //turning back to where we started
  while(current){ //tille current is not 0
    cout<<current->val<<" ";
    current = current->next;
  }
}
