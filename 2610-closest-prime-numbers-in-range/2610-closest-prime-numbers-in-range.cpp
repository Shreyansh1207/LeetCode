bool Prime(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        int num1 = -1;
        int num2 = -1;
        int firstPrime = -1;
        int dif = INT_MAX;
        for (int i = left; i <= right; i++) {
            if (Prime(i)) {
                if (firstPrime == -1) {
                    firstPrime = i;
                } else {
                    int curr = i - firstPrime;;
                    if (curr < dif) {
                        dif = curr;
                        num1 = firstPrime;
                        num2 = i;
                    }
                    firstPrime = i;
                }
            }
        }

        if (num1 == -1 || num2 == -1)
            return {-1, -1};
        return {num1, num2};
    }
};