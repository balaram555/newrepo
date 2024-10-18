#include<bits/stdc++.h>
using namespace std;
int getSumOfSquares(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

bool isHappy(int n) {
    std::unordered_set<int> seen;

    while (n != 1 && seen.find(n) == seen.end()) {
        seen.insert(n);
        n = getSumOfSquares(n);
    }

    return n == 1;
}

int main() {
    int number;
    std::cin >> number;

    if (isHappy(number)) {
        std::cout << number << " is a happy number." << std::endl;
    } else {
        std::cout << number << " is not a happy number." << std::endl;
    }

    return 0;
}
