#include <iostream>

using namespace std;

int main()
{
    int n,i,a[100];
    int po=0,ne=0,z=0;
    cout<<"Enter the array size : ";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<=n;i++)
    {
        if(a[i]>0)
        po+=1;
        else if(a[i]<0)
        ne+=1;
        else
        z+=1;
    }
    cout<<"positive : "<<po<<endl;
    cout<<"negative : "<<ne<<endl;
    cout<<"zero : "<<z<<endl;
}
