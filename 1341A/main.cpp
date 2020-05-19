#include <iostream>

using namespace std;

int main()
{
   int n,a,b,c,d,e,f,t;
   cin>>t;
   string s[t];

   for(int i=0;i<t;i++)
   {
       cin>>n>>a>>b>>c>>d;
       if((n*(a-b))>(c+d) || (n*(a+b))<(c-d))
        s[i]="No";
       else
        s[i]="Yes";
   }
    for(int j=0;j<t;j++)
    {
        cout<<s[j]<<endl;
    }
}
