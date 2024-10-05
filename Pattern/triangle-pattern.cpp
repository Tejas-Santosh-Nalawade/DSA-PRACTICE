#include<iostream>
using namespace std;
int main()
{
    int n=4;
    for(int i=0; i<n; i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl;
    char c='A';
    for(int i=0; i<n; i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
        cout<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=1;j<n-i+1;j++)
        {
            cout<<j<<" ";
            c++;
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0; i<n; i++)
    {   
        for(int j=0;j<i+1;j++)
        {
            cout<<(i+1)<<" ";
        }
        cout<<endl;
    }
        cout<<endl;

    for(int i=0; i<n; i++)
    
    {
        for(int j=0;j<i+1;j++)
        {
            
            cout<<char('A'+i)<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j>0; j--)
        {
            cout<<char('A'+j-1)<<" ";
        }
        cout<<endl;
    }
    return 0; 
}