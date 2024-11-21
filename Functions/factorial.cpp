#include<iostream>
using namespace std;

// Recursion Example 5!= 5*4*3*2*1
int fact(int n) 
{
    if(n>1)
    return n*fact(n-1);
}

 // logical while loop backward to forward example 5!= 5*4*3*2*1

int factorial(int n)
{
    int fact=1;
    while(n>1)
    {
        fact*=n;
        n--;
    }
}

// Logical for loop forward multiplication 5!=1*2*3*4*5
int factorial_for(int n)
{
    int fact=1;
    for(int i=1; i<=n; i++)
    {
        fact*=i;
    }
    return fact;
    
}

int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        cout<<fact(n)<<"\n";
        cout<<factorial(n)<<"\n";
        cout<<factorial_for(n)<<"\n";
    }
    return 0;
}