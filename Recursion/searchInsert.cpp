#include<iostream>
using namespace std;
#include <vector>
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int k;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == target) return i;
            if(nums[i] > target){
                k=i;
                return i;
            }
                
        }
        return k;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> nums;
    nums = {1,2,3,4};
    int a;
    a=s.searchInsert(nums,5);
    //cout<<a;
    return a;
}
