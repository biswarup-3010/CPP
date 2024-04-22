#include<iostream>
#include<queue>
#include "TreeNode.h"
using namespace std;
TreeNode<int>* input_level(){
    int root_data;
    cin>>root_data;
    TreeNode<int>* root=new TreeNode<int>(root_data);
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        int numOfchild;
        TreeNode<int>* front=pendingNodes.front();
        pendingNodes.pop();
        cin>>numOfchild;
        for(int j=0;j<numOfchild;j++){
            int childData;
            cin>>childData;
            TreeNode<int>* child=new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}
TreeNode<int>* take_input(){
    int root_data,n;
    cout<<"enter root"; 
    cin>>root_data;
    TreeNode<int>* root=new TreeNode<int>(root_data);
    cout<<"no of child:";
    cin>>n;
    for(int i=0;i<n;i++){
        TreeNode<int>* child= take_input();
        root->children.push_back(child);
    }
    return root;
}
void print_tree(TreeNode<int>* root){
    if(root==NULL)
        return ;
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        print_tree(root->children[i]);
    }
}
int main(){
    TreeNode<int>* root= input_level();   //take_input();
    print_tree(root);
    delete root;
    return 0;
}