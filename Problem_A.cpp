#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int n;
    cin>>n;

    int x = log2(n);
    double y = log2(n);

   if(x==y)
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }

    return 0;
}
