/* Question -
 * * * * * *
 * *     * *
 *         *
 *         *
 * *     * *
 * * * * * *
 */
// divide it into 2 halves, top and bottom and then solve it 
#include <iostream>
using namespace std;

void print(int n)
{
    int iniS = 0;
      // star, space, star
      for(int i=0; i<n; i++)
      {
        //   star
          for(int j=1;j<=n-i;j++)
          {
              cout<<"*"<<" ";
          }
        //   space
        for(int j=0;j<iniS;j++)
          {
              cout<<" ";
          }

        //   star
         for(int j=1;j<=n-i;j++)
          {
              cout<<"*"<<" ";
          }
        iniS+=2;
        cout<<endl;
      }
      
      iniS = 8;
      // star, space, star
      for(int i=1; i<=n; i++)
      {
        //   star
          for(int j=1;j<=i;j++)
          {
              cout<<"*"<<" ";
          }
        //   space
        for(int j=0;j<iniS;j++)
          {
              cout<<" ";
          }

        //   star
         for(int j=1;j<=i;j++)
          {
              cout<<"*"<<" ";
          }
        iniS-=2;
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
        cin >> n;
        print(n);
    }

    return 0;
}