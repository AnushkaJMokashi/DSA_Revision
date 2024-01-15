// print 1 to n with recursion

#include <iostream>
using namespace std;

void fun(int i ,int n){
    if(i>n) return;
    cout<<i<<endl;
    fun(i+1,n);
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Output: "<<endl;
    fun(1,n);

    return 0;
}