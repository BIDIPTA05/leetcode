class Solution {
public:
    int strStr(string haystack, string needle) {
        //also kmp algorithm can be used
        //great explanation -  https://www.youtube.com/watch?v=AsysPr44uGk&ab_channel=KrishnaTeaches
        int s1 = haystack.size();
        int s2 = needle.size();
        if(s1<s2){
            return -1;
        }
        int flag;
        for(int i =0 ; i< s1 ;i++){
            if(haystack[i]==needle[0]){
                flag=0;
            }
            for(int j=0; j<s2; j++){
                if(haystack[i+j]!=needle[j]){
                    flag=1;
                    break;
                }
            }
            if( flag==0){
            //found in the first string
            return i ;
        }
        }
        
        return -1;
    }
};