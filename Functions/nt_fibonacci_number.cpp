#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{
    if(n==1 || n==2)
    {
         return 1;
    }
    int a=1,b=1,c;
    for(int i=3; i<=n; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        if(n<=0)
        {
        cout<<"Invalid Input write number greater then 0"<<"\n";
        }
        else{
            cout<<fibonacci(n)<<"\n";
        }
    }
    return 0;
}