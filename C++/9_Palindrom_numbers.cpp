class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || (x != 0 && x % 10 == 0)){
            return false;
        }

        int setengah = 0;
        while(x > setengah){
            setengah = (setengah * 10) + (x % 10);
            x = x / 10;
        }

        return x == setengah || x == setengah / 10;
    }
};
