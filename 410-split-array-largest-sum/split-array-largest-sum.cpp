class Solution {
    bool isPossible(vector<int>& nums, int k,int n,int mid){
        int studentcount=1;
        int subarraysum=0;
        for(int i=0;i<n;i++){
            if(subarraysum+nums[i]<=mid){
                subarraysum+=nums[i];
            }
            else{
                studentcount++;
                if(studentcount>k||nums[i]>mid){
                    return false;;

                }
                subarraysum=0;
                subarraysum=nums[i];
            }
        }return true;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        
        int s=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int e=sum;
        int ans=-1;

        int mid=s+(e-s)/2;
        while(s<=e){

        if(isPossible(nums,k,n,mid)){
        ans=mid;
        e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
        }
        return ans;
    }
};