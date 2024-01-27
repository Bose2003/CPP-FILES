#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    string s="hello world python";
    int w=1,n,i;
    n=s.length();
    for(i=0;i<=n;i++)
    {
        if(s[i]==' ')
        w+=1;
    }
    cout<<"NO.of words : "<<w;
    return 0;
}
