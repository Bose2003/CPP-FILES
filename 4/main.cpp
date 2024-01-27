#include <iostream>

using namespace std;

int main()
{
    int x,f=1;
    cout<<"Enter the positive number : ";
    cin>>x;
    for(int i=1;i<=x;i++)
    f=f*i;
    cout<<f;
    return 0;
}
