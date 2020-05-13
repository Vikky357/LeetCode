 class Solution {
public:
    int myAtoi(string str) {
        int len=str.length();
        int i=0,sign=1;
        double result=0;
        while(len>i && str[i]==' ')
        {
            i++;
        }
        if(str[i]=='-' || str[i]=='+')
        {
            sign=(str[i]=='-')?-1:1;
            i++;
        }
        while(i<len)
        {
            if(str[i]>='0' and str[i]<='9')
        {
            result=result * 10+str[i]-'0';
        }
        else{
            break;
        }
         
            i++;
        }
        result=result*sign;
        if(result>INT_MAX)
            return INT_MAX;
        if(result<INT_MIN)
            return INT_MIN;
        return result;
    }
};
