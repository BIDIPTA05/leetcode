class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int a = accounts.size();
        int b = accounts[0].size();
        int sum;
        int maxi= INT_MIN;
        for(int i =0; i< a;i++){
          sum =0;
            for(int j=0;j< b; j++){
                sum += accounts[i][j];
            }
            maxi = max(sum,maxi);
        }
        return maxi;
    }
};