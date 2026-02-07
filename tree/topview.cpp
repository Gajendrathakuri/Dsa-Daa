#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
class Node{
public:
  int data;
  Node* left;
  Node* right;
  Node(int data){
 this->data=data;
    this->left=nullptr;
    this->right=nullptr;
  }
};
static int idx=0;
class TreeSolution{
public: 
 Node* createTree(vector<int> nodes)
{
    idx++;
    if(nodes[idx]==-1) return  nullptr; 
    Node* current=new Node(nodes[idx]);
    current->left=createTree(nodes);
    current->right=createTree(nodes);
    return current;
  }

void bfs(Node* root)
{
 if(root==nullptr)
 {
  return ;
 }
  queue<Node*>Q;
  Q.push(root);
  while(!Q.empty())
  {
    Node* curr=Q.front();
    Q.pop();
    cout<<curr->data<<" ";
    if(curr->left !=nullptr)
    {
      Q.push(curr->left);
    }
    if(curr->right!=nullptr)
    {
      Q.push(curr->right);
    }
  }
};


int main()
{
  vector<int> items={2,1,-1,4,3,2,-1,5,-1,-1,-1};
  TreeSolution newtree=new TreeSolution();
  
  
  return 0;
}
