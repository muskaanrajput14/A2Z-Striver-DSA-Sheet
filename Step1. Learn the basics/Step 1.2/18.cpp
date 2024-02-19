/* Question -
C
C B 
C B A
*/
// striver ka run  ni hua, yeh chat gpt se h 
#include <iostream>
using namespace std;

void print(int n)
{
     for(int i=0; i<n; i++)
    {
        char ch= 'A'+(n-1);
        for(int j=0;j<=i; j++)
        {
            cout<<ch<<" ";
            ch--;
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