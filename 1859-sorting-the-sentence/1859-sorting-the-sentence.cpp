class Solution {
public:
    string sortSentence(string s) {
        vector<string> sent(10);
         string word;
        for(int i = 0 ; i< s.size() ; i++){
            if(s[i]>=48 && s[i]<=57){
                sent[s[i]-48] = word  + " ";
                word = "";
                i++;
            }
            else
            word += s[i];
        } 
        
        string ans;
        for( string x : sent){
            ans+= x;
        }
        ans.pop_back();
         
        return ans;
    }
};