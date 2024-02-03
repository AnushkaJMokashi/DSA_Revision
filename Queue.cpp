#include<bits/stdc++.h>
using namespace std;

class Queue{

    int *arr;
    int n;
    public:
    int f, r;

    Queue();
    bool isFull();
    bool isEmpty();
    void push_back(int x);
    int pop_back();
    void display();

};

Queue :: Queue(){
    f = r = -1;
    cout<<"Enter Size : ";
    cin>> n;
    arr = new int[n];

}

bool Queue :: isFull(){
    if(r == n-1){
        cout<<"Queue is Overflow..";
        return 1;
    }
    return 0;
    
}

bool Queue :: isEmpty(){
    if(f > r || (f==-1 && r == -1)){
        cout<<"Queue is Underflow..";
        return 1;
    }
    return 0;
}

void Queue :: push_back(int x){
    if(isFull()){
        return;
    }
    arr[++r]=x;
}
int Queue :: pop_back(){
    if(isEmpty()){
        return -1;
    }
    int item = arr[f];
    f++;
    return item;
}

void Queue :: display(){
    for(int i = f ; i < r ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(int argc, char const *argv[])
{
    Queue q;
    q.push_back(3);
    q.push_back(1);
    q.push_back(4);
    q.push_back(5);
    q.push_back(9);

    q.pop_back();

    q.display();
    
    return 0;
}
