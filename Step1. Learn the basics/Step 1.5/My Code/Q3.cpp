// // print linearly from n to 1
#include <iostream>
using namespace std;

void myFunc(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    cout << i << endl;
    return myFunc(i - 1, n);
}

int main()
{
    int n = 5;
    myFunc(n, n);
    return 0;
}

