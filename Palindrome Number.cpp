
/*
Ques.
Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.
*/


class Solution {
public:
    bool isPalindrome(int x) {
        int xt=x,r,res;
        if(xt>9)
        {
            while(xt>0)
        {
            r=xt%10;
            xt=xt/10;
            res=res*10+r;
        }
        return res==x;
        }
       else if(xt<=9 && xt>=0)
           return true;
       else
            return false;
    }
};
