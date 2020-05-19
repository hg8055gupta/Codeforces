#include <iostream>

using namespace std;

int main()
{
    int n,k,j,h,y;
    cin>>n>>k;
    j=k;
    int a[n];
    for(int j=0;j<n;j++)
        cin>>a[j];
    h=a[k-1];
    if(h==0)
    {
        for(y=k-2;y>=0;y--)
        {
            if(a[y]!=0)
                break;
        }
        cout<<y+1;
        return 0;
    }
    for(int i=k;i<n;i++)
    {
        if(a[i]==h)
        {
            j++;
        }
        else
            break;
    }
    cout<<j;
    return 0;
}
