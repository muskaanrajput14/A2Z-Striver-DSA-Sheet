/* Question -
1
2 3
4 5 6
*/
#include <iostream>
using namespace std;

void print(int n)
{
    int count = 1;
    for(int i =1; i<=n; i++)
    {
        for(int j =1; j<=i;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;   
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