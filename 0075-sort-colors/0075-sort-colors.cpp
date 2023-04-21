class Solution {
public:
    void sortColors(vector<int>& nums) {
    int low =0 ;
    int high = nums.size()-1;
    int mid = 0;  
    while(mid<=high){
        if(nums[mid]==0){
        //if the element i s 0
            
                swap(nums[low],nums[mid]);
            low++;
            mid++;
               }
        //if the element is 1
           else if(nums[mid]==1){
                mid++;
           }
        //if the element is 2
            else if(nums[mid]==2){
                swap(nums[mid],nums[high--]);
                
                }
        }
        
    }
}; 