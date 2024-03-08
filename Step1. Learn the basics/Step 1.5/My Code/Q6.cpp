// sum of n natural numbers

#include <iostream>
using namespace std;

// m1- parameterized
int sumOfNaturalNumbers(int i, int sum){
    if(i<1){
        // cout<<i;
        // return 0;
        return sum;
    }
    return sumOfNaturalNumbers(i-1, sum+i);
}

// m-2- functional
int sum(int n){
    if(n<0){
        return 0;
    }
    return sum(n-1)+n;
} 

int main()
{
    int n=3;
    // cout<<sumOfNaturalNumbers(n, 0); m-1
    cout<<sum(n);  // m-2
    return 0;
}