#include <iostream>

using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i].at(1)=='+')
            c++;
        else
            c--;
    }
    cout<<c;
    return 0;
}
