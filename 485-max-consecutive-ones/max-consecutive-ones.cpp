class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int n=nums.size();
       int curr=0,maxi=INT_MIN;
       for(int i=0;i<n;i++){
            if(nums[i]!=1){
                maxi=max(maxi,curr);
                curr=0;
                continue;
            }
            curr++;
       }
        maxi=max(maxi,curr);

       return maxi;
    }
};