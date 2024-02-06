#include<iostream>
#include<vector>
using namespace std;
class Solution {

public:
    void findCombination(int ind,int target, vector<int> &arr,vector<vector<int>>&ans,vector<int>&ds){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<arr.size();i++){
            if(i>ind && arr[i]==arr[i-1]) continue; //if [1,1,1,2,2] as we can't pick 1st as 0th is also 1
            //but if its at the start then pick hence i>ind
            if(arr[i]>target) break;
            ds.push_back(arr[i]);
            findCombination(i+1,target-arr[i],arr,ans,ds);
            ds.pop_back();
        }
        
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end()); //as we need in lexicographical order
        vector<vector<int>>ans; //store the combination
        vector<int> ds;  //use in recursion to generate the combination
        findCombination(0,target,candidates,ans,ds);
        return ans;
    }
};