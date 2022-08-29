//efficient
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int low=0;
        int high = (n*m)-1;
        //if empty
         if(n == 0 || m == 0)
            return false;
        //if elements exist then use Binary search with Log(N) Time complexity
        while(low<=high){
            int mid = (low + (high-low)/2);
            if(matrix[mid/m][mid%m]==target){
                return true;
                
            }
            else if(matrix[mid/m][mid%m]<target){
                low= mid+1;   
            }
            else{
            high=mid-1;
            }
        }
        return false;
    }
};




//brute force

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int n = matrix.size();
//         int m = matrix[0].size();
//         //running the loop till size of the matrix
//         for(int i=0;i<n;i++)
//           {
//             //running through each row element
//             for(int j=0;j<m;j++)
//                {
//                 if(matrix[i][j] == target)
//                     return true;
//             }
//         }
//         return false;
//     }
// };

