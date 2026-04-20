class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxdist=0;
        int n=colors.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            if(colors[i]!=colors[j]){
int dis=j-i;
maxdist=max(maxdist,dis);
            }
            
        }
    }
    return maxdist;
    }
};