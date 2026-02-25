class Solution {
public:
    string largestOddNumber(string num) {
        int x = num.length();
        for(int i=x-1 ; i>=0 ; i--){
            char ch = num[i];
            int digit = ch -'0';
            if(digit % 2 != 0 ){
                return num.substr(0,i+1);
            }
       
            
        }  
             return "";      
    }
};