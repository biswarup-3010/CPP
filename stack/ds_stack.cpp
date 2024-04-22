#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
class stack{
    Node *head;
    int size=0;
    public:
    void push(int n){
        head->data=n;
        head->next=NULL;
        size++;
    }
    bool is_empty(){
        return size==0;
    }
    int pop(){
        if(is_empty())
            return -1;
        int temp=head->data;
        head->data=NULL;
        size--;
        return temp;
    }
    int peak(){
        while(head!=NULL||head->next!=NULL){
            head=head->next;
        }
        return head->data;
    }
    int Size(){
        return size;
    }
    void print(Node *head){
        if(is_empty())
            return ;
        while(head!=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }
    }
};
int main(){
    stack v;
    v.push(5);
    cout<<v.is_empty()<<"  "<<v.peak();
    return 0;
}