#include <iostream>

using namespace std;
int main()
{
    int n,d=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a[3],c=0;
        for(int j=0;j<3;j++)
        {
            cin>>a[j];
            if(a[j]==1)
                c++;
               // cout<<c<<endl;
        }
        if(c>=2)
            d++;
       // cout<<d<<" "<<endl;
    }
        cout<<d;
    return 0;
}
