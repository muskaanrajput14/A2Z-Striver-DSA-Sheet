/* Question -
1
1 2 
1 2 3
*/
#include <iostream>
using namespace std;

void print(int n)
{
    for (int i = 1; i <=n; i++)  // for rows
    { 
        for (int j = 1; j <=i; j++)  // for columns
        { 
            cout <<j<<" ";
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        print(n);
    }

    return 0;
}