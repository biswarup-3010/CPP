#include<iostream>
#include<vector>
using namespace std;
template <typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode<T>*> children;
    TreeNode(T data){
        this->data=data;
    }
};

void PrintTree(TreeNode<int>* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" : ";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<", ";
    }
    cout<<endl;
    for(int j=0;j<root->children.size();j++){
        PrintTree(root->children[j]);
    }
}
int main(){
    TreeNode<int> *root = new TreeNode<int>(1);
    TreeNode<int> *root1 = new TreeNode<int>(2);
    TreeNode<int> *root2 = new TreeNode<int>(3);
    TreeNode<int> *root3 = new TreeNode<int>(4);
    TreeNode<int> *root4 = new TreeNode<int>(5);
    TreeNode<int> *root5 = new TreeNode<int>(6);
    root->children.push_back(root1);
    root->children.push_back(root2);
    root1->children.push_back(root3);
    root1->children.push_back(root4);
    root2->children.push_back(root5);
    root3->children.push_back(root5);
    PrintTree(root);
    return 0;
}