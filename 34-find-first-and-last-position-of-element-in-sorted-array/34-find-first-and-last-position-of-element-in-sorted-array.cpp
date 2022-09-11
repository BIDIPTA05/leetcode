//OPTIMAL
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector <int> ans;
        int low=0;
        int high=n-1;
        int fr =-1;
     
        if(n==0){
            return {-1,-1};
        }
        
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target){
             fr = mid;
            high = mid -1;
            }
            else if(nums[mid]<target){
                low = mid +1;
            }
            else{
                high = mid-1;
            }
            }
             ans.push_back(fr);
        
             low=0;
             high=n-1;
             fr =-1;
     
        
            while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target){
            fr = mid;
            low = mid+1;
            }
            else if(nums[mid]<target){
                low = mid +1;
            }
            else{
                high = mid-1;
            }
            }
            ans.push_back(fr);
        
        return ans;
    };
};










//BRUTE-FORCE
// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int n = nums.size();
//         vector <int> ans;
//         int start = -1;
//         int end = -1;
        
//         for(int i =0; i< n ;i++){
//             if(nums[i]==target){
//                 start =i;
//                 break;
//             }    
//         }
        
//           for(int i =n-1; i>= 0 ;i--){
//             if(nums[i]==target){
//                 end =i;
//                 break;
//             }    
//         }
//         ans.push_back(start);
//         ans.push_back(end);
//         return ans;
//     }
// };