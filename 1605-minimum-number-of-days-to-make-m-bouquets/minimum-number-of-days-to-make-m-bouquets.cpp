class Solution {
public:
bool isPossible(vector<int>& bloomDay, int m, int k,int mid){
    int flowers=0;
    int bouquets=0;
    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=mid){
            flowers++;
            if(flowers==k){
                bouquets++;
                flowers=0;
            }
        }
            else{
                flowers=0;
            }
        }return bouquets>=m;
        
        
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();

        if(1LL*m*k>n){
            return -1;
        }
        int s=*min_element(bloomDay.begin(),bloomDay.end());
        int e=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(isPossible(bloomDay,m,k,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }return ans;
    }
};