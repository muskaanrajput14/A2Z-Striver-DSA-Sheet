// print linearly from 1 to n but by using backtracking

#include <iostream>
using namespace std;

void myFunc(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    myFunc(i - 1, n);
    cout << i << endl;
    // return 
}

int main()
{
    int n = 5;
    myFunc(n, n);
    return 0;
}

