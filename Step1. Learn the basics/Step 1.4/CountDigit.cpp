/*
Problem statement
You are given a number ’n’.Find the number of digits of ‘n’ that evenly divide ‘n’.
Note:
A digit evenly divides ‘n’ if it leaves no remainder when dividing ‘n’.
Example:
Input: ‘n’ = 336
Output: 3
Explanation:336 is divisible by both ‘3’ and ‘6’. Since ‘3’ occurs twice it is counted two times.
*/
#include <iostream>
using namespace std;

int countDigits(int n)
{
    int original = n; // Store the original number
    int cnt = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        if (lastDigit != 0 && original % lastDigit == 0) // Check if the digit evenly divides 'n'
            cnt++;
        n = n / 10;
    }
    return cnt; // Return the count instead of printing it
}

int main()
{
    int n;
    cin >> n;
    cout << countDigits(n);
    return 0;
}

// TC - O(logn)  because the loop id running or divding by 10

/* explaination of if (lastDigit != 0 && original % lastDigit == 0) 
lastDigit != 0: This part of the condition checks if the last digit of the number is not zero. We include this check because dividing by zero is not defined and can lead to errors. So, we want to ensure that we only consider digits that are not zero.

n % lastDigit == 0: This part of the condition checks if the number 'n' is evenly divisible by the last digit without leaving a remainder. The % operator calculates the remainder of the division operation. So, n % lastDigit checks if 'n' divided by the last digit has no remainder, indicating that the last digit evenly divides 'n'.

Putting both parts together:

If the last digit is not zero (lastDigit != 0) and 'n' is evenly divisible by the last digit (n % lastDigit == 0), then the condition is true.
In this context, it means that the digit evenly divides the original number 'n'.*/