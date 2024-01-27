#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    if(a%3==0 || a%5==0)
    cout << "Divisible by the 3 or 5 " << endl;
    else
    cout<<"Not divisible by the 3 or 5 "<<endl;
    return 0;
}
