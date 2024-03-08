#include <vector>
using std::vector;

long long check(int n) {
    if (n == 1) return 1;
    return n * check(n - 1);
}

vector<long long> factorialNumbers(long long n) {
    vector<long long> fact;
    int x = 1;
    while (true) {
        long long factorial = check(x); // Calculate factorial once per loop
        if (factorial <= n) {
            fact.push_back(factorial); // Add it to the vector if it's less than or equal to n
        } else {
            break; // Exit the loop if the factorial is greater than n
        }
        x++; // Increment x to check the next factorial
    }
    return fact;
}
