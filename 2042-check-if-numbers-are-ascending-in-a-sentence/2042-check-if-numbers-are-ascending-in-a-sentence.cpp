class Solution {
public:
    bool areNumbersAscending(string s) {
        vector <int> data; 
        int num ;
        int max = 0;
        for(int i = 0 ; i <s.size() ; i++){
            if(s[i]>=48 && s[i]<=57){
                if(s[i+1]>=48&&s[i+1]<=57){
                    num=(s[i]-48)*10 + (s[i+1]-48);
                    if(max>=num){
                        return false;
                    }
                    else {
                        max = num;
                    }
                    i++;
                }
                else{
                    num = s[i]-48;
                    if(max>=num){
                        return false;
                    }
                    else{
                        max = num ;
                    }
                    
                }
                
            }
        }

    return true;
    }
};