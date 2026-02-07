#include <iostream>
#include <vector>
#include<queue>
using namespace std;
class Node{
public:
  int data;
  Node* left;
  Node* right;
  Node(int val){
    data=val;
    left=nullptr;
    right=nullptr;
  }
};
static int idx=-1;
Node* buildTree(vector<int>node)
{
  idx++;
  if(node[idx]==-1){
    return nullptr;
  }
  Node* current=new Node(node[idx]);
  current->left=buildTree(node);
  current->right=buildTree(node);
  return current;
}


//preorder transversal 
void preorder(Node *root)
{
    if(root==nullptr)
    {

        return;

    }
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);

}
void inorder(Node *root)
{
    if(root==nullptr)
    {

        return;

    } 
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);

}

void postorder(Node * root)
{
  if(root==nullptr)
   {return;}

   postorder(root->left);
   postorder(root->right);
   cout<<root->data;
}

// breadth first search 
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
   
  
}
int main()
{
  vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
  Node* root=buildTree(nodes); 
  preorder(root);
  cout<<"in order";
  inorder(root);
  cout<<"postorder"<<endl;
  postorder(root);
  cout<<"bfs"<<endl;
  bfs(root);
}
