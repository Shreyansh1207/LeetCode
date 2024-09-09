class Solution {
public:
    int splitNum(int num) {
    string digits = to_string(num);
    sort(digits.begin(), digits.end());
    
    string num1, num2;
    for (size_t i = 0; i < digits.size(); ++i) {
        if (i % 2 == 0) {
            num1 += digits[i];
        } else {
            num2 += digits[i];
        }
    }
    
    int n1 = stoi(num1);
    int n2 = stoi(num2);
    
    return n1 + n2;

        
    }
};