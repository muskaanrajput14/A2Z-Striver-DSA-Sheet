#include <iostream>
using namespace std;

void myFunc(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << i << endl;
    return myFunc(i + 1, n);
}

int main()
{
    int n = 5;
    myFunc(1, n);
    return 0;
}

