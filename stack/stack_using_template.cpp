#include<iostream>
using namespace std;
template<typename T>
class Node{
    T data;
    Node<T> *next;
    Node(T data){
        this->data=data;
    }
};
int main(){
    cout<<"Enter root node : ";
    int n;
    cin>>n; 
    Node<int>* root = new Node<int>(n);
    return 0;
}