class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int maxSize=0, i=0, j=0, n=s.size();
        while(j<n){
            if(st.count(s[j])==0){
                st.insert(s[j]);
                maxSize = max(maxSize, j-i+1);
                j++;
            }
            else{
                st.erase(s[i]);
                i++;
            }
        }
        return maxSize;
    }
};