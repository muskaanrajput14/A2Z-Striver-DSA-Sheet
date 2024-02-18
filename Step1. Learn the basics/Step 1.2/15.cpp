/* Question -
A B C
A B
A
*/
#include <iostream>
using namespace std;

void print(int n)
{
    for (int i=0; i<n; i++)  // for rows
    { 
        for(char ch='A'; ch<='A'+(n-i-1); ch++)  // for columns
        { 
            cout<<ch<<" ";
        }
        cout << endl;
    }
    // for (int i = 0; i <= n; i++) // for rows
    // {
    //     for (int j = 0; j < i; j++) // for columns
    //     {
    //         int number = 65;
    //         char charvalue = (char(number) + i);
    //         cout << charvalue;
    //     }
    //     cout << endl;
    // }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        print(n);
    }
    return 0;
}