//print 1 to N with backtracking

#include <iostream>
using namespace std;

void fun_back(int i , int n){
    if(i<1) return;
    fun_back(i-1,n);
    cout<<i<<endl;
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Output is: "<<endl;
    fun_back(n,n);
    return 0;
}