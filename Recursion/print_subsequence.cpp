#include<bits/stdc++.h>
using namespace std;

void printS(int i,vector<int> &ds,int arr[],int n){
    if(i == n){
        for(auto it:ds) cout<<it<<" ";
        return;
    } 
    ds.push_back(arr[i]);
    printS(i+1,ds,arr,n);
    cout<<endl;
    ds.pop_back();
    printS(i+1,ds,arr,n);
}
int main(int argc, char const *argv[])
{
    int arr[3] = {3,1,2};
    int n = 3;
    vector<int> ds;
    printS(0,ds,arr,n);


    return 0;
}
