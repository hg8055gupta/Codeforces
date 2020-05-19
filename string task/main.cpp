#include <iostream>
#include<ctype.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s.at(i)=='a' || s.at(i)=='A' || s.at(i)=='e' || s.at(i)=='E' || s.at(i)=='I' || s.at(i)=='i' || s.at(i)=='o' || s.at(i)=='O' || s.at(i)=='u' || s.at(i)=='U' || s.at(i)=='y' || s.at(i)=='Y')
            continue;
        else
            if(isupper(s.at(i)))
        {
            cout<<"."<<(char)tolower(s.at(i));
        }
        else
            cout<<"."<<s.at(i);
    }
    return 0;
}
