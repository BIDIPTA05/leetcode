class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int a = accounts.size();
        int b = accounts[0].size();
        int sum;
        vector <int> ans;
       // int maxi= INT_MIN;
        for(int i =0; i< a;i++){
          sum =0;
            for(int j=0;j< b; j++){
                sum += accounts[i][j];
                
            }
            ans.push_back(sum);
          //  maxi = max(sum,maxi);
        }
        int answer = *max_element(ans.begin(),ans.end());
        // for(auto x : ans){
        //     cout<<x<<" ";
        // }
        return answer;
    }
};