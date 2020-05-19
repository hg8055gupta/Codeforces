#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n;j++)
    {
        if(a[j].size()>10)
            cout<<a[j].at(0)<<a[j].size()-2<<a[j].at(a[j].size()-1)<<endl;
        else
            cout<<a[j]<<endl;
    }
    return 0;
}
