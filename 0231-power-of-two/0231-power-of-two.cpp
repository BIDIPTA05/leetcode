class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        for(int i=0;i<=30;i++){
            if(pow(2,i) == n){
                return true;
            }
        }
        return false ;
    }
};


// var isPowerOfTwo = function(n) {
//     for (let i = 0; i <= 31; i++) {
//         if (Math.pow(2, i) === n || Math.pow(2, -i) === n) {
//             return true
//         }
//     }
//     return false
// };