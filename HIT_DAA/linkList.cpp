#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int n){
        this->data=n;
        this->next=NULL;
    }
};
// insert in tail position
void insert_tail(Node* &head,int value){
    Node* newNode=new Node(value);
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
// insert the element in starting 
void insert_start(Node* &head,int val){
    Node* newNode=new Node(val);
    newNode->next=head;
    head = newNode;
}
// search any element
int search(Node* &head,int n){
    Node* temp = head;
    int k=0;
    while(temp->next!=NULL){
        if(temp->data==n){
            return k;
        }
        k++;
        temp=temp->next;
    }
    delete temp;
    return -1;
}
void deleteFront(Node* &head){
    if(head==NULL) return;
    head=head->next;
}
// delete any element
void delete_num(Node* &head,int n){
     if(head==NULL) return;
    if(head->data==n){
        head=head->next;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        if(temp->data==n){
            temp->next=temp->next->next;
        }
        temp=temp->next;
    }
}
// display LL
void display(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" --> ";
        temp=temp->next;
    }
    delete temp;
}

//  Iterrative reverse
Node* reverseLL(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* nextNode;
    while(curr!=NULL){
        nextNode = curr->next;
        curr->next=prev;

        prev = curr;
        curr = nextNode;
    }
    return prev;
}

// recurssive reverse

Node* revLL(Node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* newNode = revLL(head->next);
    head->next->next=head;
    head->next=NULL;

    return newNode;
}
// reverse K nodes
Node* ReverseK(Node* &head,int k){
    Node* prev = NULL;
    Node* curr = head;
    Node* nextNode;
    int count =0;
    while(curr!=NULL && count< k){
        nextNode = curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
        count++;
    }

    if(nextNode!=NULL){
        head->next=ReverseK(nextNode,k);
    }
    return prev;
}

//  cycle in LL

bool is_cycleP(Node* &head){
    Node* fast = head;
    Node* slow = head;
    while(fast->next != NULL && fast->next != NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast->data == slow->data){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    Node* root = new Node(n);
    int x;

    while(1){
        cout<<"\n1. Add front\n2. Add end\n3. search\n4. delete front\n5. Delete num\n6.Display\n7. Rev\n8. Rev K\n12. Exit"<<endl;
        cout<<"Enter choice :";
        cin>>x;
        switch(x){
            case 1:
                cout<<"Enter data :";
                int d;
                cin>>d;
                insert_start(root,d);
                break;
            case 2:
                cout<<"Enter data :";
                int z;
                cin>>z;
                insert_tail(root,z);
                break;
            case 3:
                int p;
                cout<<"Enter the element : ";
                cin>>p;
                cout<<search(root,p);
                cout<<endl;
                break;
            case 4:
                deleteFront(root);
                break;
            case 5:
                int num;
                cout<<"Which element : ";
                cin>>num;
                delete_num(root,num);
                break;
            case 6:
                display(root);
                break;
            case 7:
                root = revLL(root);
                break;
            case 8:
                int k;
                cout<<"Enter value of k : ";
                cin>>k;
                root = ReverseK(root,k);
                break;
            case 12: exit(0);
            default: break;
        }
    }
    return 0;
}