/* Question -
*****
 ***
  *
*/
#include <iostream>
using namespace std;

void print(int n)
{
   for (int i=0; i<n; i++)  // for rows
    { 
        for (int j=0; j<i; j++)  // for columns - space 
        { 
            cout<<" ";
        }
        for (int j=0; j< (2*n-(2*i+1)); j++)  // for columns - star 
        { 
            cout<<"*";
        }
         for (int j=0; j<i; j++)  // for columns - space 
        { 
            cout<<" ";
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