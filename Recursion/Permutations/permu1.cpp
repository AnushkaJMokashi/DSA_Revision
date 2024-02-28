#include<iostream>
using namespace std;
#include<vector>


class Solution {
public:
    void find_Permutations(vector <int> &ds,vector <vector <int>> &ans,int freq[],vector<int>& nums){
        if(nums.size() == ds.size()){
            ans.push_back(ds);
            return;
        }
        for(int i = 0; i < nums.size() ; i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i] =1;
                find_Permutations(ds,ans,freq,nums);
                freq[i] = 0;
                ds.pop_back();
            }  
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector <int> ds;
        vector <vector <int>> ans;

        int freq[nums.size()];
        for(int i = 0; i<nums.size();i++) freq[i]=0;
        find_Permutations(ds,ans,freq,nums);
        return ans;
    }
};