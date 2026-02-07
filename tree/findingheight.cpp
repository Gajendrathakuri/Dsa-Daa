#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

static int idx = -1;

Node* buildtree(vector<int>& items) {
    idx++;
    if (idx >= items.size() || items[idx] == -1) {
        return nullptr;
    }
    Node* current = new Node(items[idx]);
    current->left = buildtree(items);
    current->right = buildtree(items);
    return current;
}

int CalculateHeight(Node* root) {
    if (root == nullptr) return 0;
    int leftH = CalculateHeight(root->left);
    int rightH = CalculateHeight(root->right);
    return max(leftH, rightH) + 1;
}

int countNode(Node* root)
{
  if(root==nullptr)return 0;

  int leftcount=countNode(root->left);
  int rightcount=countNode(root->right);
  return leftcount+rightcount+1;
}
int main() {
    vector<int> items = {1,2,4,-1,-1,5,-1,-1,3,6,-1,-1,-1}; 
    Node* root = buildtree(items);
    cout << "Root: " << root->data << endl;
    cout << "Height: " << CalculateHeight(root) << endl;
   cout<<countNode(root);
    return 0;
}
