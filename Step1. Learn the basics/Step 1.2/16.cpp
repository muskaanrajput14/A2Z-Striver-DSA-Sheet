/* Question -
A
B B
C C C
*/
#include <iostream>
using namespace std;

void print(int n)
{
      for (int i=0; i<n; i++)  // for rows
    { 
        char ch ='A'+i;
        for(int j=0; j<=i;j++)  // for columns
        { 
            cout<<ch<<" ";
        }
        cout << endl;
        // ch+=i;
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