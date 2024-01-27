#include <iostream>

using namespace std;

int main()
{
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    int i,u=0,l=0;
    for(i=0;i<s.length();i++)
    {

        if(s[i]=='A' && s[i]=='Z')
        u+=1;
        else
        l+=1;
    }
    cout <<"Upper : "<<u<< endl;
    cout <<"lower : "<<l<< endl;
    return 0;
}
