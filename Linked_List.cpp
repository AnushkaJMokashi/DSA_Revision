#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next; 
    Node(int a){
        data = a;
        next = NULL;
    }
    
};

class LL{
    Node * head;
    public:
    LL(){
        head = NULL;
    }
    void insert();
    void display();
    bool search();
    void DeleteNode();
};


void LL :: insert(){
    int x;
    cout<<"Enter element : ";
    cin>>x;
    Node * temp = new Node(x);
    if(head == NULL){
        
        head = temp;
    }
    else{
        Node * t1 = head;
        while(t1->next != nullptr){
            t1 = t1->next;
        }
        t1->next = temp;
    }

}

void LL :: display(){
    Node *temp = head;

    if(head==NULL){
        cout<<"Linked List not created...";
    }
    else{
        while(temp != NULL){
            cout<<" "<<temp->data;
            temp = temp->next;
        }
    }
    cout<<endl;
}

bool LL :: search(){
    int a;
    cout<<"Enter Element to be searched.."<<endl;
    cin>>a;

    Node * temp = head;
    if(head == NULL){
        cout<<"Linked list not created";
    }
    else{
        while(temp != NULL){
            if(temp->data == a){
                return 1;
            }
            temp = temp->next;
        }    
    }
    return 0;
}

void LL :: DeleteNode(){
    Node * temp = head;
    if(search()){
        int a;
        cout<<"Enter element to be deleted..";
        cin>>a;

        Node* curr= head;
        Node * prev= head;
        while(curr->next->data == a){
            prev = curr;
            curr = curr->next;
        }
        if(curr == head){
            head = head->next;
            delete curr;
        }else{
            prev->next = curr->next;
        }
        cout<<"Deleted !!";
    }
    else{
        cout<<"Not present.."<<endl;
    }
}

int main(int argc, char const *argv[])
{
    LL l;
    int x;

    l.insert();
    l.insert();
    l.insert();

    l.display();

    l.DeleteNode();
    l.display();
    return 0;
}
