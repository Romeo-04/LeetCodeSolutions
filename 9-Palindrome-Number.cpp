#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

        if(x < 0) return false;
        int reverse = 0;
        int lastDigit = 0;
        int checker = x;
        long long multiplier = 1;
        int holder = x;
        x = abs(x);
        while(checker != 0){
            checker /= 10;
            multiplier *= 10;
        }
        multiplier /= 10;
        while(x != 0){
            lastDigit = x % 10;
            reverse += (lastDigit*multiplier);
            multiplier /= 10;
            x /= 10;
        }
        
        if(holder == reverse)
            return true;
        else
            return false;
    }
};

int main(){
    Solution sol;
    int n;
    cin >> n;

    if(sol.isPalindrome(n))
        cout << "true" << endl;
    else
        cout << "false" << endl;
}