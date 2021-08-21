// BINARY SEARCH TREE
// Search(x) n
// Insert(x) n
// Deletion(x)
// tree might be empty

#include<iostream>
#include<queue>
using namespace std;

struct BstNode{
  BstNode* left = NULL;
  BstNode* right = NULL;
  int data =0;
};
int FindMax(BstNode* root){ //searching in right side
  if(root == NULL) return -1;
  if (root->right == NULL) return root->data;
  else return FindMax(root->right);
}
int FindMin(BstNode* root){ //searching in left side
  if(root == NULL) return -1;
  else if (root->left == NULL) return root->data;
  else return FindMin(root->left);
}
int FindHeight(BstNode* root){
  if(root == NULL) return -1;
  int leftheight = FindHeight(root->left);
  int rightheight = FindHeight(root->right);
  return max(leftheight, rightheight) +1;
}

BstNode* GetNewNode(int data){ //creating a new node for the new node
  BstNode* newNode = new BstNode();
  newNode->data = data;
  newNode->left = newNode->right = NULL;
  return newNode; //returns address of this new ndoe to be stored
}
void Inorder(BstNode* root){
  if(root == NULL) return;
  Inorder(root->left);
  cout<<root->data<<" ";
  Inorder(root ->right);

}
void LevelOrder(BstNode* root){ //using queue FIFO
  if(root == NULL) return;
  queue<BstNode*> Q;
  Q.push(root);
  while(!Q.empty()){
    BstNode* current = Q.front();
    cout<<root->data<<" ";
    if(current->left != NULL) Q.push(current->left);
    if(current->right != NULL) Q.push(current->right);
    Q.pop();
  }
}

BstNode* Insert(BstNode* root, int data){ //passing the address of root with ** or just the value with *
  if(root == NULL ){ //empty tree
    root = GetNewNode(data); // updation of root address as new bstnode

  }
  else if(data <=  root->data){//left if data is smaller or equal
    root->left = Insert(root->left, data);
  }
  else root->right = Insert(root->right, data);
  return root;
}

bool Search(BstNode* root, int data){
  if(root == NULL) return false;
  else if(root->data == data) return true;
  else if(data < root->data) return Search(root->left, data);
  else return Search(root->right, data);
}

int main(){
  BstNode* root; //global pointer to root
  root = NULL; //tree is empty
  root = Insert(root, 15);
  root = Insert(root, 10);
  root = Insert(root, 20);
  root = Insert(root, 25);
  root = Insert(root, 8);
  root = Insert(root, 12);
  int number;
  cout<< "Enter number to be searched \n";
  cin>> number;
  if(Search(root,number)) cout<<"Found\n";
  else cout<<"Not Found\n";
  cout<<FindHeight(root)<<'\n'; //number of edges that is why return is -1 and not 0
  cout<<FindMin(root)<<'\n';
  cout<<FindMax(root);
}
