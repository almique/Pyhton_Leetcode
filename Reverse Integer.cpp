
/*
QUES.-
Given a 32-bit signed integer, reverse digits of an integer.

@author almique
*/

class Solution {
public:
long long int reverse(int x) {
        long long int c=x,dx=x,fd=0,f[50],i=0,j=0;
        do
        {
            f[i]=c%10;
            dx/=10;
            c=dx;
            i++;
        }while(c!=0);
       while(i!=0)
        {
            fd+=f[j]*pow(10,i-1);
            i--;
            j++;
        }
    if(fd>=(2147483647) || fd<-2147483648)
    {
        return 0;
    }
    else
      return fd;
    }
};
