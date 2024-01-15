//Print the number 5 times;

#include <iostream>
using namespace std;

void fun(int i , int n){
    if(i>5) return;
    cout<<n<<endl;
    fun(i+1,n);
}
int main(){
    int n;
    cout<<"ENter input: "<<endl;
    cin>>n;
    cout<<"Output is: "<<endl;
    fun(1,n);
    
    return 0;
}