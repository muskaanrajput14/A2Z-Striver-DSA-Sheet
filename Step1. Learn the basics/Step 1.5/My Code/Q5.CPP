// // print linearly from n to 1 but by using backtracking
#include <iostream>
using namespace std;

void myFunc(int i, int n)
{
    if (i > n)
    {
        return;
    }
    myFunc(i+1, n);
    cout << i <<endl;
}

int main()
{
    int n = 5;
    myFunc(1,n);
    return 0;
}
