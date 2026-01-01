/*Jan1 Leetcode PlusOne:-
Prblm:- 1.I/P :- [1,2,3] => O/P [1,2,4]
        2.[1,2,9] => [1,3,0]
        3.[9] = [1,0]*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size() - 1; i >= 0; i--) { //checking from last digit
            if(digits[i] < 9) {
                digits[i]++;
                return digits; 
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    int n; // size of array
    cin >> n;

    vector<int> digits(n);
    for(int i = 0; i < n; i++) {
        cin >> digits[i];
    }

    Solution obj;
    vector<int> result = obj.plusOne(digits);

    // printing the result
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
