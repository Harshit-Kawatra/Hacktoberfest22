class Solution {
public:
    bool isPalindrome(string s) {
        string p="",q="";        
        for(char i : s)
            if((i>= 'A' && i <='Z') ||(i>= 'a' && i <='z') || (i>='0' && i<= '9'))p+=tolower(i);
        for(int i = p.size()-1;i>=0;i--)q+= tolower(p[i]);
        if(p==q)return true;
        return false;
    }
};
