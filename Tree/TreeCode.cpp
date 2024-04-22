#include<stdio.h>
#include<stdlib.h>
struct TreeNode{
    struct TreeNode* left;
    int data;
    struct TreeNode* right;
};
void printPre(TreeNode* ptr){
    if(ptr==NULL) {
        printf("NULL ");
        return;
    }
    printf("%d ",ptr->data);
    printPre(ptr->left);
    printPre(ptr->right);
}
int main(){
    struct TreeNode *root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->left=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->right=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->data = 0;
    root->left->data = 50;
    root->right->data = 100;
    root->left->left = NULL;
    root->right->right = NULL;
    printPre(root);
    free(root->left);
    free(root->right);
    free(root);
    return 0;
}