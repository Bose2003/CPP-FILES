#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   cout<<"Enter the string : ";
   cin>>s;
   string x;
   x=s;
   reverse(s.begin(),s.end());
   if(x==s)
   cout<<"The string is palindrome";
   else
   cout<<"The string is not a palindrome";
    return 0;
}
