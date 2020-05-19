#include <iostream>
#include<cmath>
using namespace std;
int sum(int n)
{
    long int s1=0,s2=0,t=n/4,j=0;
    if(n%4==0)
    {
    for(int i=1;i<=n/4;i++)
    {
        s1+=pow(2,i)+pow(2,n-i+1);
    }
    s2=pow(2,n+1)-2-s1;
    j=s1-s2;
    }
    else if(n<4)
    {
            j=2;
    }
    else{
        for(int u=1;u<=t;u++)
    {
        s1+=pow(2,u)+pow(2,n-u+1);
    }
    s1=s1+pow(2,t+1);
    s2=pow(2,n+1)-2-s1;
    j=s1-s2;}
    if(j<0)
        j=j*(-1);
    return j;

}
int su(int n)
{
    long int s1=0,s2=0,t=n/2,j=0;
    if(n<4)
        return 2;
    else{
    s1=pow(2,t)-2+pow(2,n);
    s2=pow(2,n+1)-2-s1;
    j=s2-s1;
    if(j<0)
        j=j*(-1);
    return j;}
    /*if(n%4==0)
    {
        s1=pow(2,t+1)-2-pow(2,n-t+1)+pow(2,n+1);

    s2=pow(2,n+1)-2-s1;
    j=s1-s2;
    }
    else if(n<4)
    {
            j=2;
    }
    else{
        s1=pow(2,t+2)-2+-pow(2,n-t+1)+pow(2,n+1);
    s2=pow(2,n+1)-2-s1;
    j=s1-s2;}
    if(j<0)
        j=j*(-1);
    return j;*/

}
int sun(int n)
{
    long int s=1,t=n/4,j=0;
    /*if(n%4==0)
    {
    for(int i=1;i<=n/4;i++)
    {
        s1+=pow(2,i)+pow(2,n-i+1);
    }
    s2=pow(2,n+1)-2-s1;
    j=s1-s2;
    }
    else if(n<4)
    {
            j=2;
    }
    else{
        for(int u=1;u<=t;u++)
    {
        s1+=pow(2,u)+pow(2,n-u+1);
    }
    s1=s1+pow(2,t+1);
    s2=pow(2,n+1)-2-s1;
    j=s1-s2;}
    if(j<0)
        j=j*(-1);
    return j;*/
    if(n%4==0)
    for(int i=1;i<=n/2;i++,s++)
    {
        if(i==((n/4)+1))
            s=n-t+1;
            j+=pow(2,s)-pow(2,t+i);
    }
    else if(n<4)
        j=2;
    else
    {
       for(int r=1;r<=n/2;r++,s++)
    {
        if(r==n/4+2)
            s=n-t+1;
            j+=pow(2,s)-pow(2,t+r+1);
    }
    }
    return j;

}
int main()
{
    int n,t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>n;
        a[i]=su(n);
    }
    for(int r=0;r<t;r++)
    {
        cout<<a[r]<<endl;
    }
    return 0;
}
