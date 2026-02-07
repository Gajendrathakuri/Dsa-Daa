  #include <iostream>
#include <iterator>
  #include <vector>
  using namespace std;

   class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data){
      this->val=data;
      this->left=nullptr;
      this->right=nullptr;
    }
  };
  static int idx=0;
  class BinarySearchTree{
        vector<int> vals;
    TreeNode buildBst(vector<int> datas){
       TreeNode* curr=new TreeNode(datas[idx]);
        vals.push_back(curr->val);
       if(datas[idx+1] >curr->val){
            BinarySearchTree(datas);
      }
      if(datas[idx+1])
    }
  };
