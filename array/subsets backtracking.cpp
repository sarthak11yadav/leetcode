class Solution {
public:
     vector<vector<int>> res;vector<int>ve;
    void sub(vector<int>&nums,int st)
    {
        if(st>=nums.size())
        {
            res.push_back(ve);
            return;
        }
        ve.push_back(nums[st]);
        sub(nums,st+1);
        ve.erase(ve.end()-1);
        sub(nums,st+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        sub(nums,0);
        return res;
    }
};