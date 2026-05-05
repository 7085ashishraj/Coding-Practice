#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> ans;

    void helper(vector<int> &nums , int i){
        if(i==nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int j=i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            helper(nums,i+1);
            //backtrack
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        helper(nums,0);
        return ans;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = sol.permute(nums);
    
    cout << "All permutations:" << endl;
    for(auto& perm : result){
        for(int num : perm){
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}

