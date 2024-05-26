class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> contain;
        int n=nums.size();
        for(int i=0; i<n; i++){
            contain[nums[i]]=i;
        }

        for(int i=0; i<n; i++){
            int desired=target-nums[i];
            if(contain.find(desired)!=contain.end() && contain[desired]!=i){
                return {i, contain[desired]};
            }
        }
        return {};
    }
};