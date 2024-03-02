#include <iostream>
using namespace std;

void myFunc(int n)
{
    if(n<=0){
        return;
    }
    cout<<"muskaan"<<endl;
    myFunc(n-1);
    return ;
}

int main()
{
    int n=5;
    myFunc(n);
    return 0;
}