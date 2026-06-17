class Solution {
public:
    bool check(string num, int i, int j){
        if(num[i] != num[j]) return false;
        if(i > j) return true;
        return check(num, i+1, j-1);
    }
    bool isPalindrome(int x) {
        string num = to_string(x);
        int len = num.length();
        if (len == 1)return true;
        return check(num, 0, len-1);
    }
};