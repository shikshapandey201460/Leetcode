class Solution {
public:
bool isPossible(vector<int>& piles, int h,int mid){
    int hours=0;
    for(int i=0;i<piles.size();i++){
        hours+=piles[i]/mid;
        if(piles[i]%mid!=0){
            hours++;
        }
        if(hours>h){
            return false;
        }
    }return true;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int s=1;
        int maxi=-1;
        for(int i=0;i<n;i++){
            maxi=max(maxi,piles[i]);

        }int e=maxi;
        int ans=-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(isPossible(piles,h,mid)){
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