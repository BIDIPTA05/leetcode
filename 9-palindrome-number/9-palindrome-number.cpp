class Solution {
public:
    bool isPalindrome(int x) {
        
        string s = to_string(x);
        int n = s.length();
        int low = 0;
        int high = n-1;
        while(low<high){
            if(s[low]!=s[high]){
                return false; 
            }
           else{
               low++;
               high--; 
           }              
        }
     return true;
    }
};






// class Solution {
// public:
//     bool isPalindrome(int x) {
//         string s = to_string(x);
//         string temp = s;
//         reverse(s.begin(),s.end());
//         return temp==s;
     
//     }
// };


//        int revnum=0;
//         while(x>0){
//             int a = x%10;
//             revnum = revnum*10+a;
//             x/=10;
//         }
    
      


    //using string,
