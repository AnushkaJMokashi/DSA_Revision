// print sbsequences whose sum is k
#include<bits/std++.h>
using namespace std;

void printS(int i, vector<int> &ds, int arr[] ,int s, int sum,int n){
    if(i==n)
    {
        if(s == sum){
            //cout<<"s==sum";
            for(auto it:ds) cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    ds.push_back(arr[i]);
    s+=arr[i];
    printS(i+1,ds,arr,s,sum,n);
    s-=arr[i];
    ds.pop_back();
    printS(i+1,ds,arr,s,sum,n);

}

int main(int argc, char const *argv[])
{
    int n=3;
    vector<int> ds;
    int sum =2;
    int arr[n]= {1,2,1};
    //cout<<"ok";
    printS(0,ds,arr,0,sum,n);
    return 0;
}
