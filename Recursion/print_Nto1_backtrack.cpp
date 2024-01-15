// print N to 1 with backtracking

#include<iostream>
using namespace std;

void fun_backtrack(int i, int n){
    if(i>n) return;
    fun_backtrack(i+1,n);
    cout<<i<<endl;
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"output is: "<<endl;;
    fun_backtrack(1,n);
    return 0;
}