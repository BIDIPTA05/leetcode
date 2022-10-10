class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set <int> s1(nums1.begin(),nums1.end());
        unordered_set <int> s2(nums2.begin(),nums2.end());
        vector <int> ans;
        for(auto x : s2){
            if(s1.find(x) != s2.end()){
                ans.push_back(x);
            }
        }
        return ans;
    }
};









// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         int n = nums1.size();
//         int m = nums2.size();
//         unordered_set <int> v;
//         for(int i =0;i<n;i++){
//             for(int j = 0;j<m;j++){
//                 if(nums1[i]==nums2[j]){
//                     v.insert(nums1[i]);
//                 }
//             }
//         }
//         vector <int> ans(v.begin(),v.end());
//         return ans;
//     }
// };