#include <iostream>
#include <vector>
using namespace std;
class Node{
  public:
  int val;
  Node* right;
  Node* left;
  Node(int data):val(data),right(nullptr),left(nullptr){}
};
class Bst{
   public:
  Node* root;
  Bst():root(nullptr){}
  Node* insertbinaryTree(Node* node,int val){
     if(node==nullptr){
      return new Node(val);
    } 
    if(val<node->val){
      node->left=insertbinaryTree(node->left,val);
    }

    if(val>root->val){
      node->right=insertbinaryTree(node, val);
    }
    return node;
  }

  void buildHere(vector<int> datas)
{
    for ( auto item:datas) {
      root=insertbinaryTree(root,item);
    }
  }

  void inordertransverse(Node* root){
     if(root==nullptr)return;
    inordertransverse(root->left);
    cout<<root->val<<" ";
    inordertransverse(root->right);
  }

  Node* deleteNode(Node* root,int val){
    if(root==nullptr)return nullptr;
    if(root->val==val && root->left!=nullptr && root->right!=nullptr){
         
    }
    return root;
  }
};

int main()
{
  vector<int> myvalues={5,1,3,4,2,7};
  Bst b;
  b.buildHere(myvalues);
  b.inordertransverse(b.root); 
}
