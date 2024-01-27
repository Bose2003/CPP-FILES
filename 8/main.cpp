#include <iostream>


using namespace std;

int main()
{
    string s;
    int i,v=0,c=0;
    cout<<"Enter the string : ";
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        v+=1;
        else
        c+=1;
    }
    cout<<"Vowels : "<<v<<endl;
    cout<<"Consonants : "<<c<<endl;
}
