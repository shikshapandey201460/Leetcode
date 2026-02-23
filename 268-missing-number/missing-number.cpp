class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();        int ans=0;
        int ans2=0;
        for(int i=0;i<n;i++){
            ans^=nums[i];
        }
        for(int i=0;i<=n;i++){
            ans2^=i;
        }
        return ans^ans2;
        
    }
};