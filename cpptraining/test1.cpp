#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
 
int main()
{
    string s="hello";
    reverse(s.begin(),s.end());

    char c[]="hello";
    reverse(c,c+strlen(c));

    char x[6]={'h','e','l','l','o'};
    reverse(x,x+strlen(x));

    char str[11];
    for(int i=0;i<5;i++)cin>>str[i];
    reverse(str,str+5);
    
    cout<<s<<endl;
    cout<<c<<endl;
    cout<<x<<endl;
    for(int i=0;i<5;i++)cout<<str[i];
    return 0;
}