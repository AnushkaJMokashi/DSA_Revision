//print N to 1 with recursion
#include<iostream>
using namespace std;

void fun(int i, int n){
    if(i<1) return;
    cout<<i<<endl;
    fun(i-1,n);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Output is : "<<endl;
    fun(n,n); 
    return 0;
}