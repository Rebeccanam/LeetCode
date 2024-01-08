class Solution {
public:
    bool isPalindrome(int x) {
        // constraints: x > 0, x < 2147483647
        
        if (x < 0 || x > 2147483647)
            return false;
        
        long int reverseNum = 0;
        long int originalNum = x;
        
        while (x > 0) {
            reverseNum *= 10;
            if (reverseNum > 2147483647)
                return false;
            
            reverseNum = reverseNum + (x % 10);
            x /= 10;
        }
        if (reverseNum == originalNum)
            return true;
        else
            return false;
    }
};