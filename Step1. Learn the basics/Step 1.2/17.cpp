/* Question -
    A
  A B A
A B C B A
*/
// striver ka run  ni hua, yeh chat gpt se h 
#include <iostream>
using namespace std;

void print(int n)
{
      for(int i = 0; i < n; i++) {
        // Space before characters
        for(int j = 0; j < n - i - 1; j++) {
            cout << "  "; // Two spaces for better alignment
        }

        // Characters in increasing order
        char ch = 'A';
        for(int j = 0; j < i + 1; j++) {
            cout << ch << " ";
            ch++;
        }

        // Characters in decreasing order
        ch -= 2; // Start from the previous character
        for(int j = 0; j < i; j++) {
            cout << ch << " ";
            ch--;
        }

        // Space after characters
        for(int j = 0; j < n - i - 1; j++) {
            cout << "  "; // Two spaces for better alignment
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