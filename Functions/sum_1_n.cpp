# include<iostream>
using namespace std;

int Sum_1_n(int n)
{
    int sum=0;
    for(int i=1; i<n+1; i++)
    {
        sum+=i;
    }
    return sum;
}

int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
    int n;
    cin>>n;
    cout<<Sum_1_n(n)<<"\n";
    }
    
    return 0;
}