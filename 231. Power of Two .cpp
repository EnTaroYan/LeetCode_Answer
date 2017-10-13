/*Given an integer, write a function to determine if it is a power of two. */

//Solution 1  
class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        if(n==0)
            return false;
        while(!(n%2))
        {
            n/=2;
        }
        if(n==1)
            return true;
        else
            return false;
    }
};

//Solution 2
class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        if(n<=0)
            return false;
        return !(n & (n-1));
    }
};